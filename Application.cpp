#include "Application.h"
#include "jade/Window.h"
#include "graphics/Graphics.h"
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
		wnd.Show();

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
			g.setWireframe(false);
			g.rectangle(graphics::DRAW_LINE, g.getWidth() / 2 - 100, g.getHeight() / 2 - 15, 200, 30);
			g.circle(graphics::DRAW_FILL, 350, 50, 25);
			g.arc(graphics::DRAW_FILL, 50, 50, 25, 45, -90);
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
}