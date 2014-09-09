#ifndef LOVEPRINT_GRAPHICS_VIEWPORT_H
#define LOVEPRINT_GRAPHICS_VIEWPORT_H

namespace loveprint
{
namespace graphics
{
struct Viewport
{
	int x;
	int y;
	int w;
	int h;

	Viewport()
		: x(0)
		, y(0)
		, w(0)
		, h(0)
	{
	}

	Viewport(int x, int y, int w, int h)
		: x(x)
		, y(y)
		, w(w)
		, h(h)
	{
	}

	bool operator ==(const Viewport & v) const
	{
		return (x == v.x && y == v.y && w == v.w && h == v.h);
	}
}; // Viewport
}
}

#endif // LOVEPRINT_GRAPHICS_VIEWPORT_H