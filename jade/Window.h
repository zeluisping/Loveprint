#ifndef LOVEPRINT_JADE_WINDOW_H
#define LOVEPRINT_JADE_WINDOW_H

// jade
#include "Panel.h"


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

class Window : public Panel
{
	ObjectMeta(loveprint::jade::Window, loveprint::jade::Panel);

	SDL_Window * _handle;
	graphics::Graphics * _graphics;
	WindowState state;

public:
	SDL_Window * getHandle() const;
	graphics::Graphics * getGraphics() const;

	void setTitle(const char * title);
	const char * getTitle() const;

	virtual void setWidth(int32 value) override;
	virtual void setHeight(int32 value) override;

	virtual graphics::Color getBackground() const override;
	virtual void setBackground(graphics::Color value) override;

	void Show();
	void Hide();

	virtual void draw(graphics::Graphics & g) const;

	Window();
	virtual ~Window();
}; // Window

} // jade
} // loveprint

#endif // LOVEPRINT_JADE_WINDOW_H