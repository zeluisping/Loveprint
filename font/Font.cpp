#include "Font.h"

namespace loveprint
{
namespace font
{

const Glyph * Font::getGlyph(uint32 c)
{
	auto it = glyphs.find(c);

	if (it != glyphs.end()) {
		return it->second;
	}

	Glyph * g = rasterizer->getGlyph(c, _size);

	glyphs[c] = g;

	return g;
}

Font::Font(uint32 size)
	: _size(size)
{
}

Font::Font(uint32 size, Rasterizer * rasterizer)
	: _size(size)
	, rasterizer(rasterizer)
{
}

Font::~Font()
{
	delete rasterizer;
}

} // font
} // loveprint