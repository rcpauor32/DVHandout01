#ifndef __j1FILESYSTEM_H__
#define __j1FILESYSTEM_H__

#include "j1Module.h"

struct SDL_RWops;

int close_sdl_rwops(SDL_RWops *rw);

class j1FileSystem : public j1Module
{
public:

	j1FileSystem(const char* game_path);

	// Destructor
	virtual ~j1FileSystem();

	// Called before render is available
	bool Awake();

	// Open for Read/Write
	unsigned int Load(const char* file, char** buffer) const;
	SDL_RWops* Load(const char* file) const;

private:

};

#endif // __j1FILESYSTEM_H__