#include "Panel.h"

namespace loveprint
{
namespace jade
{

ObjectUserPropertyBody(loveprint::jade::Panel, std::vector<loveprint::jade::Control *>, Children);

Panel::Panel(JadeElement * parent)
	: Control(parent)
{
}

Panel::~Panel()
{
}

} // jade
} // loveprint