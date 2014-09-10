#include "Window.h"

// graphics
#include "graphics/Graphics.h"

// libraries
#include "libraries/libsdl.h"

namespace loveprint
{
namespace jade
{

SDL_Window * Window::getHandle() const
{
	return _handle;
}

graphics::Graphics * Window::getGraphics() const
{
	return _graphics;
}

void Window::setTitle(const char * title)
{
	if (strlen(state.title) == strlen(title) && memcmp(state.title, title, strlen(title)) == 0) return;

	SDL_SetWindowTitle(_handle, title);
	state.title = title;
}

const char * Window::getTitle() const
{
	return state.title;
}

void Window::setWidth(int32 value)
{
	if (getWidth() == value) return;

	SDL_SetWindowSize(_handle, value, getHeight());
	Window::WidthProperty.set(this, value);
}

void Window::setHeight(int32 value)
{
	if (getHeight() == value) return;

	SDL_SetWindowSize(_handle, getWidth(), value);
	Window::HeightProperty.set(this, value);
}

graphics::Color Window::getBackground() const
{
	return getGraphics()->getBackgroundColor();
}

void Window::setBackground(graphics::Color value)
{
	getGraphics()->setBackgroundColor(value);
}

void Window::Show()
{
	SDL_ShowWindow(_handle);
}

void Window::Hide()
{
	SDL_HideWindow(_handle);
}

void Window::draw(graphics::Graphics & g) const
{
	// nothing really, background is achieved through the clear colour
}

Window::Window()
	: Panel(nullptr)
{
	_handle = SDL_CreateWindow("", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_OPENGL | SDL_WINDOW_HIDDEN);
	_graphics = new graphics::Graphics(this);
}

Window::~Window()
{
	SDL_DestroyWindow(_handle);
	_handle = nullptr;
}

} // jade
} // loveprint