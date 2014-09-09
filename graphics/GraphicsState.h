#ifndef LOVEPRINT_GRAPHICS_GRAPHICSSTATE_H
#define LOVEPRINT_GRAPHICS_GRAPHICSSTATE_H

#include "Color.h"
#include "Viewport.h"

namespace loveprint
{
namespace graphics
{

struct GraphicsState
{
	Color color;
	Color clearcolor;
	Viewport viewport;
	bool scissor;
	Viewport scissorbox;
	bool wireframe;

	GraphicsState()
	{
		color.set(255, 255, 255, 255);
		clearcolor.set(0, 0, 0, 255);
		scissor = false;
		wireframe = false;
	}
}; // GraphicsState

}
}

#endif // LOVEPRINT_GRAPHICS_GRAPHICSSTATE_H