#include "NullRasterizer.h"

namespace loveprint
{
namespace font
{

Glyph * NullRasterizer::getGlyph(uint32 c, uint32 size) const
{
	Glyph * g = nullptr;
	float * geo = nullptr;

	switch (c) {
		case 9: // Horizontal Tab
			g = new Glyph();
			g->code = c;
			g->isgeometry = true;
			g->width = size * 4;
			break;
		case 32: // Space
			g = new Glyph();
			g->code = c;
			g->isgeometry = true;
			g->width = size;
			break;
		case 33: // !
			g = new Glyph();
			g->code = c;
			g->isgeometry = true;
			/* We need to create the glyph geometry */
			break;
	}

	return g;
}

NullRasterizer::NullRasterizer()
{
}

NullRasterizer::~NullRasterizer()
{
}

} // font
} // loveprint