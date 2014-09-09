#include "JadeElement.h"

namespace loveprint
{
namespace jade
{

ObjectPropertyBody(JadeElement, graphics::Color, Background);

JadeElement::JadeElement()
{
	setBackground(graphics::Color(255, 255, 255, 255));
}

JadeElement::~JadeElement()
{
}

} // jade
} // loveprint