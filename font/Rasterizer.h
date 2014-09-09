#ifndef LOVEPRINT_FONT_RASTERIZER_H
#define LOVEPRINT_FONT_RASTERIZER_H

#include "types.h"
#include "Glyph.h"

namespace loveprint
{
namespace font
{

class Rasterizer
{
public:
	virtual Glyph * getGlyph(uint32 c, uint32 size) const = 0;

	Rasterizer() { }
	virtual ~Rasterizer() { }
}; // Rasterizer

} // font
} // loveprint

#endif // LOVEPRINT_FONT_RASTERIZER_H