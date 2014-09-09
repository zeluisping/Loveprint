#include "opengl.h"
#include "libraries/libsdl.h"

#define PROC(type, name, args) PROC_##name name = nullptr
#include "typedefs.h"

bool initOpengl()
{
#	define PROC(type, name, args) if ((name = (PROC_##name) SDL_GL_GetProcAddress(#name)) == nullptr) return false
#	include "typedefs.h"

	return true;
}