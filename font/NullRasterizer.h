#ifndef LOVEPRINT_FONT_NULLRASTERIZER_H
#define LOVEPRINT_FONT_NULLRASTERIZER_H

#include "Rasterizer.h"

namespace loveprint
{
namespace font
{

class NullRasterizer : public Rasterizer
{
public:
	virtual Glyph * getGlyph(uint32 c, uint32 size) const;

	NullRasterizer();
	virtual ~NullRasterizer();
}; // NullRasterizer

} // font
} // loveprint

#endif // LOVEPRINT_FONT_NULLRASTERIZER_H