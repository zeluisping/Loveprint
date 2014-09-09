#ifndef LOVEPRINT_GRAPHICS_GRAPHICS_H
#define LOVEPRINT_GRAPHICS_GRAPHICS_H

#include "libraries/libglm.h"
#include "GraphicsState.h"

namespace loveprint
{
namespace jade
{
class Window;
} // window


namespace graphics
{

enum DrawMode
{
	DRAW_FILL = 1,
	DRAW_LINE,
	DRAW_MAX_VALUE,
};

class Graphics final
{
	jade::Window * _wnd;
	void * _context;
	GraphicsState state;

public:
	//void setViewportSize(int w, int h);

	void clear();
	void flush();

	int getWidth() const;
	int getHeight() const;

	void setScissor(int x, int y, int w, int h);
	void setScissor();
	void getScissor(int & x, int & y, int & w, int & h) const;

	void setColor(const Color & c);
	Color getColor() const;

	void setBackgroundColor(const Color & c);
	Color getBackgroundColor() const;

	void setWireframe(bool enable);
	bool isWireframe() const;

	void rectangle(DrawMode mode, float x, float y, float w, float h);
	void circle(DrawMode mode, float x, float y, float radius, int points = 15);
	void arc(DrawMode mode, float x, float y, float radius, float angle0, float angle1, int points = 10);
	void line(float x0, float y0, float x1, float y1);

	void push();
	void pop();
	void rotate(float r);
	void scale(float x, float y);
	void translate(float x, float y);

	Graphics(jade::Window * window);
	~Graphics();
}; // Graphics

} // graphics
} // loveprint

#endif