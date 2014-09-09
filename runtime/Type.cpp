#include "Type.h"

namespace loveprint
{
namespace runtime
{

const char * Type::name() const
{
	return _name;
}

const Type * Type::parenttype() const
{
	return _parenttype;
}

bool Type::isChildOf(const Type * type) const
{
	return _parenttype != nullptr && (_parenttype == type || _parenttype->isChildOf(type));
}

bool Type::isParentOf(const Type * type) const
{
	for (auto it = _children.begin(); it != _children.end(); it++) {
		if (*it == type || (*it)->isParentOf(type)) {
			return true;
		}
	}

	return false;
}

Type::Type(const char * name, Type * parenttype)
	: _name(name)
	, _parenttype(parenttype)
{
	if (parenttype) {
		parenttype->_children.push_back(this);
	}
}

Type::~Type()
{
}

} // runtime
} // loveprint