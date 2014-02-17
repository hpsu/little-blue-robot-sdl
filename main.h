#include <SDL2/SDL.h>
//#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <string>
#include <vector>

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

class Player {
	public:
		Player();
		void move();
		void render();
		void handleEvents(SDL_Event& e);
	private:
		void setCamera();
		void jump();
		void animate();
		bool loadFromFile(std::string path);
		SDL_Texture* mTexture;
		int frame = 0;
		bool isMoving = false, isJumping = false, isGrounded = true;
		float x,y, xVel = 80.0f, gravity = 700.0f, yVel = 50.0f;
		SDL_RendererFlip flip = SDL_FLIP_NONE;
		Uint32 lastAnimated=0;
		SDL_Point hotSpot1, hotSpot2;
		int getTileAt(int x, int y);
};

enum {
	TILE_TYPE_NONE = 0,
	TILE_TYPE_NORMAL,
	TILE_TYPE_BLOCK,
	TILE_TYPE_LADDER
};
 
class Tile {
	public:
		int tileID;
		int typeID;
		int x;
		int y;
 
	public:
		Tile();
};

class Map {
	public:
		SDL_Surface* Surf_Tileset;
 
	private:
		std::vector<Tile> TileList;
 
	public:
		Map();
 
	public:
		bool load(int level[]);
		Tile getTile(int px, int py);
 		void render();
};

bool init();
bool loadMedia();
void close();
bool collides(SDL_Rect *a, SDL_Rect *b);

SDL_Window* gWindow = NULL;
SDL_Renderer* gRenderer = NULL;
SpriteSheet gSpriteSheetTexture;
unsigned int lastTime = 0, currentTime;

int bIsFullscreen = false;
SDL_Rect camera = { 0, 0, INTERNAL_WIDTH, INTERNAL_HEIGHT };