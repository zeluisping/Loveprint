#include "JadeHead.h"

// std
#include <functional>

// jade
#include "Window.h"
#include "graphics/Graphics.h"

namespace loveprint
{
namespace jade
{

void JadeHead::draw(const Window * window)
{
	graphics::Graphics g = *window->getGraphics();

	std::function<void(const Control *)> dc;
	dc = [&] (const Control * e) {
		e->draw(g);
	};

	std::function<void(const Panel *)> dp;
	dp = [&] (const Panel * p) {
		p->draw(g);

		for (auto it = p->getChildren().begin(); it != p->getChildren().end(); it++) {
			Panel * panel = (*it)->cast<Panel>();

			if (panel) {
				dp(panel);
			} else {
				dc(*it);
			}
		}
	};

	dp(window);
}

} // jade
} // loveprint