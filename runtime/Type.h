#ifndef LOVEPRINT_RUNTIME_TYPE_H
#define LOVEPRINT_RUNTIME_TYPE_H

#include <vector>


namespace loveprint
{
namespace runtime
{

template<class owner, typename T>
class Property;

class Type final
{
private:
	const char * _name;
	const Type * _parenttype;
	std::vector<const Type *> _children;

public:
	const char * name() const;
	const Type * parenttype() const;
	bool isChildOf(const Type * type) const;
	bool isParentOf(const Type * type) const;

	Type(const char * name, Type * parenttype);
	~Type();
}; // Type

} // runtime
} // loveprint

#endif // LOVEPRINT_RUNTIME_TYPE_H