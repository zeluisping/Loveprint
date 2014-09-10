#ifndef LOVEPRINT_RUNTIME_OBJECT_H
#define LOVEPRINT_RUNTIME_OBJECT_H

// runtime
#include "Type.h"

// loveprint
#include "types.h"

#define ObjectMeta(class, parent) \
	public: \
		static loveprint::runtime::Type * classtype() { \
			static loveprint::runtime::Type type = loveprint::runtime::Type(#class, parent::classtype()); \
			return &type; \
				} \
		\
		virtual loveprint::runtime::Type * type() const { \
			return class::classtype(); \
				} \
	private:
// ObjectMeta

namespace loveprint
{
namespace runtime
{

class Object
{
public:
	static Type * classtype() {
		static Type type = Type("loveprint::runtime::Object", nullptr);
		return &type;
	}

	virtual Type * type() const {
		return Object::classtype();
	}

	virtual const char * tostring() const {
		return this->type()->name();
	}

	bool isParentOf(const Object & o) const {
		return type()->isParentOf(o.type());
	}

	bool isChildOf(const Object & o) const {
		return type()->isChildOf(o.type());
	}

	template<class T>
	T * cast() {
		if (T::classtype()->isParentOf(this->type())) {
			return (T *) this;
		}
		
		return nullptr;
	}

	Object() { }
	virtual ~Object() { }
}; // Object

} // runtime
} // loveprint

#endif // LOVEPRINT_RUNTIME_OBJECT_H