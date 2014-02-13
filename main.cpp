#include "main.h"

int level1[15][16] = {
	 {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}
	,{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}
	,{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}
	,{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}
	,{-1, -1, -1, -1, -1, -1, -1, -1,  3,  4, -1, -1, -1, -1, -1, -1}
	,{-1, -1, -1, -1, -1, -1, -1, -1,  3,  4, -1, -1, -1, -1, -1, -1}
	,{ 0,  0,  0,  0,  0,  2,  0,  0,  0,  0,  2,  0, -1, -1,  0,  0}
	,{ 5,  5,  5,  5,  5,  2,  5,  5, -1, -1,  2, -1, -1, -1, -1, -1}
	,{ 8,  8,  8,  6,  6,  2,  7,  6, -1, -1,  3,  4, -1, -1, -1, -1}
	,{ 9,  9,  9,  6,  6,  2,  6,  6, -1, -1,  3,  4, -1, -1, -1, -1}
	,{ 7,  6, 10,  6,  6,  2,  6,  6,  3,  4,  3,  4, -1, -1, -1, -1}
	,{ 6,  6,  6,  6,  6,  2,  6,  7,  3,  4,  3,  4, -1, -1, -1, -1}
	,{ 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}
	,{ 1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1}
	,{ 1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1}
};

SpriteSheet::SpriteSheet() {
	mTexture = NULL;
}

SpriteSheet::~SpriteSheet() {
	free();
}

bool SpriteSheet::loadFromFile(std::string path) {
	free();

	SDL_Texture* newTexture = NULL;
	SDL_Surface* loadedSurface = IMG_Load(path.c_str());

	if(loadedSurface == NULL) {
		printf("Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError());
	}
	else {
		newTexture = SDL_CreateTextureFromSurface(gRenderer, loadedSurface);
		if(newTexture == NULL) {
			printf("Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
		}

		SDL_FreeSurface(loadedSurface);
	}

	mTexture = newTexture;
	return mTexture != NULL;
}

void SpriteSheet::free() {
	if(mTexture != NULL) {
		SDL_DestroyTexture(mTexture);
		mTexture = NULL;
	}
}

void SpriteSheet::render(int x, int y, int frameOffset) {
	SDL_Rect clipRect = {
		frameOffset * SPRITESIZE
		,0
		,SPRITESIZE
		,SPRITESIZE
	};
	SDL_Rect renderRect = {
		x * SPRITESIZE
		,y * SPRITESIZE
		,SPRITESIZE
		,SPRITESIZE
	};

	SDL_RenderCopy(gRenderer, mTexture, &clipRect, &renderRect);
}

bool init() {
	bool success = true;

	if(SDL_Init(SDL_INIT_VIDEO) < 0) {
		printf("SDL could not initialize! SDL Error: %s\n", SDL_GetError());
		success = false;
	}
	else {
		//if(!SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "0" )) {
		//	printf( "Warning: Linear texture filtering not enabled!" );
		//}

		gWindow = SDL_CreateWindow("Little blue robot guy", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, INTERNAL_WIDTH, INTERNAL_HEIGHT, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
		if(gWindow == NULL) {
			printf("Window could not be created! SDL Error: %s\n", SDL_GetError());
			success = false;
		}
		else {
			gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
			if(gRenderer == NULL) {
				printf("Renderer could not be created! SDL Error: %s\n", SDL_GetError());
				success = false;
			}
			else {
				int imgFlags = IMG_INIT_PNG;
				if(!(IMG_Init(imgFlags) & imgFlags)) {
					printf("SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError());
					success = false;
				}
			}
		}
	}
	return success;
}

bool loadMedia() {
	if(!gSpriteSheetTexture.loadFromFile("res/sprites.png")) {
		printf("Failed to load sprite sheet texture!\n");
		return false;
	}

	return true;
}

void close() {
	gSpriteSheetTexture.free();

	SDL_DestroyRenderer(gRenderer);
	SDL_DestroyWindow(gWindow);
	gWindow = NULL;
	gRenderer = NULL;

	IMG_Quit();
	SDL_Quit();
}


void paintLevel(int level[15][16]) {
	int col;
	int row;
	for(row = 0; row < 15; row++) {
		for(col = 0; col < 16; col++) {
			gSpriteSheetTexture.render(col, row, level[row][col]);
		}
	}
}

int main(int argc, char* args[]) {
	if(!init()) {
		printf("Failed to initialize!\n");
	}
	else {
		if(!loadMedia()) {
			printf("Failed to load media!\n");
		}
		else {	
			bool quit = false;
			SDL_Event e;

			while(!quit) {
				while(SDL_PollEvent(&e) != 0) {
					switch(e.type) {
						case SDL_QUIT:
							quit = true;
							break;
					}
				}

				SDL_SetRenderDrawColor( gRenderer, 0x0, 0xE8, 0xD8, 0xFF );
				SDL_RenderClear( gRenderer );

				paintLevel(level1);

				SDL_RenderPresent( gRenderer );
			}
		}
	}

	close();
	return 0;
}