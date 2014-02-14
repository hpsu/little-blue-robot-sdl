#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <string>

#define INTERNAL_WIDTH 	256
#define INTERNAL_HEIGHT 240
#define SPRITESIZE 		16
#define BLOCKSIZEX 		16
#define BLOCKSIZEY 		15

class SpriteSheet {
	public:
		SpriteSheet();
		~SpriteSheet();

		bool loadFromFile(std::string path);
		void free();
		void render(int x, int y, int frameOffset);

	private:
		SDL_Texture* mTexture;
};

bool init();
bool loadMedia();
void close();

SDL_Window* gWindow = NULL;
SDL_Renderer* gRenderer = NULL;
SpriteSheet gSpriteSheetTexture;

int bIsFullscreen = false;
SDL_Rect camera = { 0, 0, INTERNAL_WIDTH, INTERNAL_HEIGHT };