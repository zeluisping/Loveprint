#ifndef LOVEPRINT_JADE_CONTROL_H
#define LOVEPRINT_JADE_CONTROL_H

// jade
#include "JadeElement.h"
#include "Thickness.h"

namespace loveprint
{
namespace jade
{

enum VerticalAlignment
{
	VERTALIGN_STRETCH = 0,
	VERTALIGN_TOP,
	VERTALIGN_BOTTOM,
	VERTALIGN_CENTER,
	VERTALIGN_MAX_VALUE,
}; // VerticalAlignment

enum HorizontalAlignment
{
	HORZALIGN_STRETCH = 0,
	HORZALIGN_LEFT,
	HORZALIGN_RIGHT,
	HORZALIGN_CENTER,
	HORZALIGN_MAX_VALUE,
}; // HorizontalAlignment

class Control : public JadeElement
{
	ObjectMeta(loveprint::jade::Control, loveprint::jade::JadeElement);

	ObjectProperty(Control, VerticalAlignment, VerticalAlignment);
	ObjectProperty(Control, HorizontalAlignment, HorizontalAlignment);
	ObjectProperty(Control, Thickness, Margin);

	JadeElement * _parent;

public:
	bool myvar;

	inline JadeElement * parent() const {
		return _parent;
	}

	virtual void draw(graphics::Graphics & g) const;

	Control(JadeElement * parent);
	virtual ~Control();
}; // Control

} // jade
} // loveprint

#endif // LOVEPRINT_JADE_CONTROL_H