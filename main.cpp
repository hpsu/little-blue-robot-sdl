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

Player::Player() {
	mTexture = NULL;
	x = 100;
	y = 12*SPRITESIZE-32;
	if(!loadFromFile("res/player.png")) {
		printf("Failed to load sprite sheet texture!\n");
	}
	lastUpdateTime = SDL_GetTicks();
};

void Player::move() {
	Uint32 delta = SDL_GetTicks() - lastUpdateTime;
	if(acDelta > 100) {
		acDelta = 0;
		if(isMoving) {
			if(frame == 0) {
				frame = 2;
			} 
			else {
				frame = frame == 3 ? 4: 3;
			}
		} else {
			// @TODO: 
			frame = 0;
		}
	}
	acDelta += delta;
	lastUpdateTime = SDL_GetTicks();
}

void Player::render() {
	SDL_Rect clipRect = {
		//frameOffset * SPRITESIZE
		isMoving ? frame*32 : 0
		,0
		,32
		,32
	};
	SDL_Rect renderRect = {
		x
		,y
		,32
		,32
	};

	SDL_RenderCopyEx(gRenderer, mTexture, &clipRect, &renderRect, 0, NULL, flip);
}

void Player::handleEvents(SDL_Event& e) {
	if(e.type == SDL_KEYDOWN && e.key.repeat == 0) {
		switch(e.key.keysym.sym) {
			case SDLK_LEFT:
				//camera.x-=10;
				flip = SDL_FLIP_HORIZONTAL;
				if(camera.x < 0) camera.x=0;
				isMoving = true;
				break;

			case SDLK_RIGHT:
				//camera.x+=10;
				flip = SDL_FLIP_NONE;
				if(camera.x > (level1_blocks-1)*BLOCKSIZEX*SPRITESIZE) camera.x=(level1_blocks-1)*BLOCKSIZEX*SPRITESIZE;
				isMoving = true;
				break;
		}
	}
	if(e.type == SDL_KEYUP && e.key.repeat == 0) {
		switch(e.key.keysym.sym) {
			case SDLK_LEFT:
			case SDLK_RIGHT:
				isMoving = false;
				break;
		}
	}
}

bool Player::loadFromFile(std::string path) {
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
			Player player;

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
							}
							break;
					}
					player.handleEvents(e);
				}

				player.move();

				SDL_SetRenderDrawColor( gRenderer, 0x0, 0xE8, 0xD8, 0xFF );
				SDL_RenderClear( gRenderer );

				paintLevel(level1);
				player.render();

				SDL_RenderPresent( gRenderer );
			}
		}
	}

	close();
	return 0;
}