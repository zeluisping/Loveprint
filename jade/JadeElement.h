#ifndef LOVEPRINT_JADE_JADEELEMENT_H
#define LOVEPRINT_JADE_JADEELEMENT_H

// graphics
#include "graphics/Graphics.h"
#include "graphics/Color.h"

// runtime
#include "runtime/Object.h"
#include "runtime/Property.h"

namespace loveprint
{
namespace jade
{

class JadeElement : public runtime::Object
{
	ObjectProperty(JadeElement, graphics::Color, Background);

public:
	virtual void draw(graphics::Graphics & g) const = 0;

	JadeElement();
	virtual ~JadeElement();
};

} // jade
} // loveprint

#endif // LOVEPRINT_JADE_JADEELEMENT_H