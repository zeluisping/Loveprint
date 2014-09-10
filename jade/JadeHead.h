#ifndef LOVEPRINT_JADE_JADEHEAD_H
#define LOVEPRINT_JADE_JADEHEAD_H

// loveprint
#include "attributes.h"

namespace loveprint
{
namespace jade
{
class Window;

class JadeHead final
{
	ClassStaticAttrib(JadeHead);

public:
	static void draw(const Window * window);
};

} // jade
} // loveprint

#endif // LOVEPRINT_JADE_JADEHEAD_H