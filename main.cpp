#include "main.h"

int level1[][BLOCKSIZEY][BLOCKSIZEX] = {
	{
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
	}
	,{
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
	}
	,{
		 {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}
		,{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}
		,{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}
		,{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}
		,{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}
		,{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}
		,{-1, -1, -1, -1, -1, -1, -1, -1,  3,  4, -1, -1, -1, -1, -1, -1}
		,{-1,  0,  0, -1, -1, -1, -1, -1,  3,  4, -1, -1, -1, -1, -1, -1}
		,{-1, -1, -1, -1, -1, -1,  0,  0,  0,  0, -1, -1, -1, -1, -1, -1}
		,{-1, -1, -1, -1, -1, -1,  1,  1,  1,  1, -1, -1,  0,  0, -1, -1}
		,{-1, -1, -1, -1,  0,  0,  1,  1,  1,  1, -1, -1,  1,  1, -1, -1}
		,{-1, -1, -1, -1,  1,  1,  1,  1,  1,  1, -1, -1,  1,  1,  0,  0}
		,{ 0,  0,  0,  0,  1,  1,  1,  1,  1,  1, -1, -1,  1,  1,  1,  1}
		,{ 1,  1,  1,  1,  1,  1,  1,  1,  1,  1, -1, -1,  1,  1,  1,  1}
		,{ 1,  1,  1,  1,  1,  1,  1,  1,  1,  1, -1, -1,  1,  1,  1,  1}
	}
	,{
		 {-1, -1, -1, -1, -1, -1, -1, -1,  5,  5,  5,  5,  1,  2,  1,  1}
		,{-1, -1, -1, -1, -1, -1, -1, -1,  7,  6,  7,  6,  1,  2,  1,  1}
		,{-1, -1, -1, -1, -1, -1, -1, -1, 11, 10, 10, 10,  5,  2,  1,  1}
		,{-1, -1, -1, -1, -1, -1, -1, -1,  6, 11, 10, 12,  7,  2,  1,  1}
		,{-1, -1, -1, -1,  1,  2,  0,  6,  6,  0,  0,  0,  0,  0,  1,  1}
		,{-1, -1, -1, -1,  1,  2,  1,  7,  7,  1,  1,  1,  1,  1,  1,  1}
		,{-1, -1, -1, -1,  1,  2,  5,  6,  6,  5,  5,  5,  1,  1,  1,  1}
		,{-1, -1, -1, -1,  1,  2,  6,  7,  6,  6,  7,  6,  1,  1,  1,  1}
		,{-1, -1, -1, -1,  1,  2,  6,  6,  6,  7, 11, 12,  1,  1,  1,  1}
		,{-1, -1, -1, -1,  1,  2,  0,  0,  0,  6,  6,  6,  1,  1,  1,  1}
		,{-1, -1, -1, -1,  5,  5,  5,  7,  5,  6,  6,  0,  1,  1,  1,  1}
		,{-1, -1, -1, -1,  7,  6, 10, 12,  7,  6,  7,  1,  1,  1,  1,  1}
		,{ 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1}
		,{ 1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1}
		,{ 1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1}
	}
};

int level1_blocks = 4;

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
		(x * SPRITESIZE) - camera.x
		,(y * SPRITESIZE)
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
				if(!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "0")) {
					printf("Warning: Failed to set render hint!");
				}

				if(!SDL_SetHint( SDL_HINT_RENDER_VSYNC, "1"))
				{
					printf( "Warning: VSync not enabled!" );
				}


				if(!SDL_RenderSetLogicalSize(gRenderer, INTERNAL_WIDTH, INTERNAL_HEIGHT)) {
					printf("Warning: Failed to set logical size");
				}

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


void paintLevel(int level[][BLOCKSIZEY][BLOCKSIZEX]) {
	int col;
	int row;
	int block;
	for(block = 0; block < level1_blocks; block++) {
		for(row = 0; row < BLOCKSIZEY; row++) {
			for(col = 0; col < BLOCKSIZEX; col++) {
				if(level[block][row][col] >= 0)
					gSpriteSheetTexture.render(block * BLOCKSIZEX + col, row, level[block][row][col]);
			}
		}
	}
}

void toggleFullscreen() {
	SDL_SetWindowFullscreen(gWindow, bIsFullscreen ? 0 : SDL_WINDOW_FULLSCREEN_DESKTOP);
	bIsFullscreen = !bIsFullscreen;
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
						case SDL_KEYDOWN:
							switch(e.key.keysym.sym) {
								case SDLK_RETURN:
									if(e.key.keysym.mod & KMOD_ALT)
									toggleFullscreen();
									break;
								case SDLK_F11:
									toggleFullscreen();
									break;

								case SDLK_LEFT:
									camera.x-=10;
									if(camera.x < 0) camera.x=0;
									break;

								case SDLK_RIGHT:
									camera.x+=10;
									if(camera.x > (level1_blocks-1)*BLOCKSIZEX*SPRITESIZE) camera.x=(level1_blocks-1)*BLOCKSIZEX*SPRITESIZE;
									break;
							}
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