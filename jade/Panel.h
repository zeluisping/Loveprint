#ifndef LOVEPRINT_JADE_PANEL_H
#define LOVEPRINT_JADE_PANEL_H

#include "Control.h"
#include <vector>

namespace loveprint
{
namespace jade
{

class Panel : public Control
{
	std::vector<Control> _children;

public:
	inline const std::vector<Control> & children() const {
		return _children;
	}

	Panel();
	virtual ~Panel();
}; // Panel

} // jade
} // loveprint

#endif // LOVEPRINT_JADE_PANEL_H