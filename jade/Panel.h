#ifndef LOVEPRINT_JADE_PANEL_H
#define LOVEPRINT_JADE_PANEL_H

// std
#include <vector>

// jade
#include "Control.h"

namespace loveprint
{
namespace jade
{

class Panel : public Control
{
	ObjectMeta(loveprint::jade::Panel, loveprint::jade::Control);

	ObjectUserProperty(loveprint::jade::Panel, std::vector<loveprint::jade::Control *>, Children);

public:
	const std::vector<loveprint::jade::Control *> & getChildren() const
	{
		return propv_Children;
	}
	virtual std::vector<loveprint::jade::Control *> * getChildren() {
		return &propv_Children;
	}

	Panel(JadeElement * parent);
	virtual ~Panel();
}; // Panel

} // jade
} // loveprint

#endif // LOVEPRINT_JADE_PANEL_H