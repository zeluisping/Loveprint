#ifndef LOVEPRINT_FONT_FONT_H
#define LOVEPRINT_FONT_FONT_H

#include "Glyph.h"
#include "Rasterizer.h"
#include <map>

namespace loveprint
{
namespace font
{
class Font final
{
	std::map<uint32, Glyph *> glyphs;
	uint32 _size;
	Rasterizer * rasterizer;

public:
	inline uint32 size() const {
		return _size;
	}

	const Glyph * getGlyph(uint32 c);

	Font(uint32 size);
	Font(uint32 size, Rasterizer * rasterizer);
	~Font();
}; // Font

} // font
} // loveprint

#endif // LOVEPRINT_FONT_FONT_H