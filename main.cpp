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
	if(!loadFromFile("res/player.bmp")) {
		printf("Failed to load sprite sheet texture!\n");
	}
};

void Player::animate() {
	if(isJumping) {
		frame = 6;
		return;
	}
	if(isMoving) {
		if(lastAnimated + 100 > SDL_GetTicks()) return;
		lastAnimated = SDL_GetTicks();
		if(frame == 0) {
			frame = 2;
		} 
		else {
			frame = frame == 3 ? 4: 3;
		}
	} else {
		if(frame == 0 && lastAnimated + 2000 > SDL_GetTicks()) return;
		if(frame == 1 && lastAnimated + 100 > SDL_GetTicks()) return;
		lastAnimated = SDL_GetTicks();
		frame = frame == 0 ? 1 : 0;
	}
}

void Player::jump() {
	yVel = -240.0f;
	gravity = 700.0f;
	isJumping = true;
}

void Player::setCamera() {
	camera.x = (x + 32 / 2) - (INTERNAL_WIDTH /2);
	if(camera.x < 0) camera.x=0;
    else if(camera.x > (level1_blocks-1)*BLOCKSIZEX*SPRITESIZE) camera.x=(level1_blocks-1)*BLOCKSIZEX*SPRITESIZE;
}

void Player::move() {
	float delta = (currentTime - lastTime) / 1000.0f;
	if(isMoving) {
		x += xVel * delta;
		if(x < 0) x = 0;
		else if(x > ((level1_blocks)*BLOCKSIZEX*SPRITESIZE) - 32)
				x=((level1_blocks)*BLOCKSIZEX*SPRITESIZE) - 32;

		setCamera();
	}

	yVel += gravity*delta;
	y += yVel*delta;
	if (y > (12*SPRITESIZE)-32) {
		y = (12*SPRITESIZE)-32;
		isJumping = false;
	}

	animate();

}

void Player::render() {
	SDL_Rect clipRect = {
		frame*32
		,0
		,32
		,32
	};
	SDL_Rect renderRect = {
		(int)x - camera.x
		,(int)y
		,32
		,32
	};

	SDL_RenderCopyEx(gRenderer, mTexture, &clipRect, &renderRect, 0, NULL, flip);
}

void Player::handleEvents(SDL_Event& e) {
	if(e.type == SDL_KEYDOWN && e.key.repeat == 0) {
		switch(e.key.keysym.sym) {
			case SDLK_LEFT:
				flip = SDL_FLIP_HORIZONTAL;
				isMoving = true;
				xVel = abs(xVel)*-1.0f;
				break;

			case SDLK_RIGHT:
				flip = SDL_FLIP_NONE;
				isMoving = true;
				xVel = abs(xVel);
				break;
			case SDLK_SPACE:
				jump();
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
	SDL_Surface* loadedSurface = SDL_LoadBMP(path.c_str());

	if(loadedSurface == NULL) {
		printf("Unable to load image %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
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
	SDL_Surface* loadedSurface = SDL_LoadBMP(path.c_str());

	if(loadedSurface == NULL) {
		printf("Unable to load image %s! SDL_image Error: %s\n", path.c_str(), SDL_GetError());
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
		gWindow = SDL_CreateWindow("Little blue robot guy", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, INTERNAL_WIDTH*4, INTERNAL_HEIGHT*4, SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
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

				if(!SDL_SetHint( SDL_HINT_RENDER_VSYNC, "0"))
				{
					printf( "Warning: VSync not enabled!" );
				}


				if(!SDL_RenderSetLogicalSize(gRenderer, INTERNAL_WIDTH, INTERNAL_HEIGHT)) {
					printf("Warning: Failed to set logical size");
				}
			}
		}
	}
	return success;
}

bool loadMedia() {
	if(!gSpriteSheetTexture.loadFromFile("res/sprites.bmp")) {
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

	//IMG_Quit();
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
			SDL_Rect outlineRect = {0, 0, INTERNAL_WIDTH, INTERNAL_HEIGHT};

			while(!quit) {
				lastTime = currentTime;
				currentTime = SDL_GetTicks();
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
				SDL_SetRenderDrawColor( gRenderer, 0x0, 0x0, 0x0, 0xFF );

				SDL_RenderClear( gRenderer );

				SDL_SetRenderDrawColor( gRenderer, 0x0, 0xE8, 0xD8, 0xFF );
                SDL_RenderFillRect( gRenderer, {&outlineRect} );

				paintLevel(level1);
				player.render();


				SDL_RenderPresent( gRenderer );
			}
		}
	}

	close();
	return 0;
}