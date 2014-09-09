#ifndef LOVEPRINT_JADE_WINDOW_H
#define LOVEPRINT_JADE_WINDOW_H

// jade
#include "JadeElement.h"


struct SDL_Window;

namespace loveprint
{
namespace graphics
{
class Graphics;
} // graphics


namespace jade
{

struct WindowState
{
	const char * title;

	WindowState()
	{
		title = nullptr;
	}
}; // WindowState

class Window : public JadeElement
{
	SDL_Window * _handle;
	graphics::Graphics * _graphics;
	WindowState state;

public:
	SDL_Window * getHandle() const;
	graphics::Graphics * getGraphics() const;

	void setTitle(const char * title);
	const char * getTitle() const;

	void Show();
	void Hide();

	virtual void draw(graphics::Graphics & g) const;

	Window();
	virtual ~Window();
}; // Window

} // jade
} // loveprint

#endif // LOVEPRINT_JADE_WINDOW_H