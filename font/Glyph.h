#ifndef LOVEPRINT_FONT_GLYPH_H
#define LOVEPRINT_FONT_GLYPH_H

#include "types.h"

namespace loveprint
{
namespace font
{

struct Glyph
{
	uint32 code;
	int32 width;
	bool isgeometry;
	union
	{
		float * geometry;
		void * image;
	};

	Glyph()
		: code(0)
		, isgeometry(false)
		, geometry(nullptr)
		, image(nullptr) // same size but w/e
	{
	}
}; // Glyph

} // font
} // loveprint

#endif // LOVEPRINT_FONT_GLYPH_H