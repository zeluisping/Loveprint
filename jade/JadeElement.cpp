#include "JadeElement.h"

namespace loveprint
{
namespace jade
{

ObjectPropertyBody(JadeElement, graphics::Color, Background);
ObjectPropertyBody(JadeElement, int32, Width);
ObjectPropertyBody(JadeElement, int32, Height);

JadeElement::JadeElement()
{
	setBackground(graphics::Color(255, 255, 255, 255));
}

JadeElement::~JadeElement()
{
}

} // jade
} // loveprint