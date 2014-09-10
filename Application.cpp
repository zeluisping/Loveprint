#include "Application.h"

// jade
#include "jade/Window.h"
#include "jade/JadeHead.h"

// graphics
#include "graphics/Graphics.h"

// libraries
#include "libraries/libsdl.h"

namespace loveprint
{

void Application::Quit()
{
	_quit = true;
}

void Application::Run()
{
	jade::Window wnd = jade::Window();
	jade::Control c = jade::Control(wnd);
	c.setBackground(graphics::Color(255, 32, 64, 255));
	c.setWidth(120);
	c.setHeight(256);

	wnd.Show();
	wnd.getChildren()->push_back(&c);
	wnd.setBackground(graphics::Color(255, 255, 255, 255));
	wnd.getGraphics()->setColor(graphics::Color(0, 0, 0, 255));

	if (_running) return;

	SDL_Event e;

	_running = true;
	while (_quit == false) {
		while (SDL_PollEvent(&e)) {
			if (e.type == SDL_WINDOWEVENT) {
				if (e.window.event == SDL_WindowEventID::SDL_WINDOWEVENT_CLOSE) {
					_running = false;
					_quit = true;
					break;
				}
			}
		}

		graphics::Graphics g = *wnd.getGraphics();

		g.clear();
		//g.setWireframe(false);
		//g.rectangle(graphics::DRAW_LINE, g.getWidth() / 2 - 100, g.getHeight() / 2 - 15, 200, 30);
		//g.circle(graphics::DRAW_FILL, 350, 50, 25);
		//g.arc(graphics::DRAW_FILL, 50, 50, 25, 45, -90);
		jade::JadeHead::draw(&wnd);
		g.flush();
	}
}

Application::Application()
	: _quit(false)
	, _running(false)
{
}

Application::~Application()
{
}

} // loveprint