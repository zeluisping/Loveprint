#include "Graphics.h"
#include "jade/Window.h"
#include "libraries/libopengl.h"
#include "libraries/libsdl.h"

namespace loveprint
{
namespace graphics
{

void Graphics::clear()
{
	glClear(GL_COLOR_BUFFER_BIT);
}

void Graphics::flush()
{
	SDL_GL_SwapWindow(_wnd->getHandle());
}

int Graphics::getWidth() const
{
	return 800;
}

int Graphics::getHeight() const
{
	return 600;
}

void Graphics::setScissor(int x, int y, int w, int h)
{
	Viewport vp(x, y, w, h);

	if (state.scissorbox == vp) return;

	glScissor(x, y, w, h);
	glEnable(GL_SCISSOR_TEST);
	state.scissorbox = vp;
	state.scissor = true;
}

void Graphics::setScissor()
{
	if (state.scissor == false) return;

	glDisable(GL_SCISSOR_TEST);
	state.scissorbox = Viewport(0, 0, getWidth(), getHeight());
	state.scissor = false;
}

void Graphics::getScissor(int & x, int & y, int & w, int & h) const
{
	x = state.scissorbox.x;
	y = state.scissorbox.y;
	w = state.scissorbox.w;
	h = state.scissorbox.h;
}

void Graphics::setColor(const Color & c)
{
	if (state.color == c) return;

	glColor4ub(c.r, c.g, c.b, c.a);
	state.color = c;
}

Color Graphics::getColor() const
{
	return state.color;
}

void Graphics::setBackgroundColor(const Color & c)
{
	if (state.clearcolor == c) return;

	glClearColor(c.r / 255.0f, c.g / 255.0f, c.b / 255.0f, c.a / 255.0f);
	state.clearcolor = c;
}

Color Graphics::getBackgroundColor() const
{
	return state.clearcolor;
}

void Graphics::setWireframe(bool enable)
{
	if (state.wireframe == enable) return;

	glPolygonMode(GL_FRONT_AND_BACK, (enable ? GL_LINE : GL_FILL));
	state.wireframe = enable;
}

bool Graphics::isWireframe() const
{
	return state.wireframe;
}

void Graphics::rectangle(DrawMode mode, float x, float y, float w, float h)
{
	if (mode == DRAW_LINE) {
		glBegin(GL_LINES);
		glVertex2f(x + 0, y + 0);
		glVertex2f(x + 0, y + h);

		glVertex2f(x + 0, y + h);
		glVertex2f(x + w, y + h);

		glVertex2f(x + w, y + h);
		glVertex2f(x + w, y + 0);

		glVertex2f(x + w, y + 0);
		glVertex2f(x + 0, y + 0);
		glEnd();
	} else {
		glBegin(GL_QUADS);
		glVertex2f(x + 0, y + 0);
		glVertex2f(x + 0, y + h);
		glVertex2f(x + w, y + h);
		glVertex2f(x + w, y + 0);
		glEnd();
	}
}

void Graphics::circle(DrawMode mode, float x, float y, float radius, int points)
{
	if (mode == DRAW_LINE) {
		glBegin(GL_LINE_LOOP);
		for (float d = 360; d > 0; d -= 360.0f / points) {
			glVertex2f(x + cosf(d * (float) M_PI / 180) * radius, y + sinf(d * (float) M_PI / 180) * radius);
		}
		glEnd();
	} else {
		glBegin(GL_POLYGON);
		for (float d = 360; d > 0; d -= 360.0f / points) {
			glVertex2f(x + cosf(d * (float) M_PI / 180) * radius, y + sinf(d * (float) M_PI / 180) * radius);
		}
		glEnd();
	}
}

void Graphics::arc(DrawMode mode, float x, float y, float radius, float angle0, float angle1, int points)
{
	if (angle1 < angle0) {
		float t = angle0;
		angle0 = angle1;
		angle1 = t;
	}

	if (mode == DRAW_LINE) {
		glBegin(GL_LINE_LOOP);
		glVertex2f(x, y);
		for (float d = angle1; d >= angle0; d -= (angle1 - angle0) / points) {
			glVertex2f(x + cosf(d * (float) M_PI / 180) * radius, y + -sinf(d * (float) M_PI / 180) * radius);
		}
		glEnd();
	} else {
		glBegin(GL_POLYGON);
		glVertex2f(x, y);
		for (float d = angle0; d < angle1; d += (angle1 - angle0) / points) {
			glVertex2f(x + cosf(d * (float) M_PI / 180) * radius, y + -sinf(d * (float) M_PI / 180) * radius);
		}
		glEnd();
	}
}

void Graphics::line(float x0, float y0, float x1, float y1)
{
	glBegin(GL_LINES);
	glVertex2f(x0, y0);
	glVertex2f(x1, y1);
	glEnd();
}

void Graphics::push()
{
	glPushMatrix();
}

void Graphics::pop()
{
	glPopMatrix();
}

void Graphics::rotate(float r)
{
	glRotatef(r, 0, 0, 1);
}

void Graphics::scale(float x, float y)
{
	glScalef(x, y, 1);
}

void Graphics::translate(float x, float y)
{
	glTranslatef(x, y, 0);
}

Graphics::Graphics(jade::Window * window)
	: _wnd(window)
{
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 1);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
	SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
	SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);

	_context = SDL_GL_CreateContext(window->getHandle());
	SDL_GL_LoadLibrary(nullptr);
	initOpengl();

	glEnable(GL_CULL_FACE);
	glFrontFace(GL_CCW);
	glCullFace(GL_BACK);
	//glEnable(GL_TEXTURE_2D);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glDisable(GL_DEPTH_TEST);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glOrtho(0, getWidth(), getHeight(), 0, -1, 1);
}

Graphics::~Graphics()
{
}

} // graphics
} // loveprint