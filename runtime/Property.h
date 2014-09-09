#ifndef LOVEPRINT_RUNTIME_PROPERTY_H
#define LOVEPRINT_RUNTIME_PROPERTY_H

#include "Type.h"


#define ObjectBoolProperty(ownerclass, propname) \
	private: \
		bool propv_##propname; \
	\
	public: \
		static const loveprint::runtime::Property<ownerclass, bool> propname##Property; \
		\
		virtual bool is##propname() const { \
			return propname##Property.get(this); \
		} \
		\
		virtual void set##propname(bool value) { \
			propname##Property.set(this, value); \
		} \
	private:

#define ObjectBoolPropertyBody(ownerclass, propname) \
	const loveprint::runtime::Property<ownerclass, bool> ownerclass::propname##Property = loveprint::runtime::Property<ownerclass, bool>(&ownerclass::propv_##propname);


#define ObjectProperty(owner, type, name) \
	private: \
		type propv_##name; \
	\
	public: \
		static const loveprint::runtime::Property<owner, type> name##Property; \
		\
		virtual type get##name() const { \
			return name##Property.get(this); \
		} \
		\
		virtual void set##name(type value) { \
			name##Property.set(this, value); \
		} \
	private:

#define ObjectPropertyBody(ownerclass, proptype, propname) \
	const loveprint::runtime::Property<ownerclass, proptype> ownerclass::propname##Property = loveprint::runtime::Property<ownerclass, proptype>(&ownerclass::propv_##propname);

#define ObjectUserProperty(owner, type, name) \
	private: \
		type propv_##name; \
	public: \
		static const loveprint::runtime::Property<owner, type> name##Property; \
	private:

#define ObjectUserPropertyBody(owner, type, name) \
	const loveprint::runtime::Property<owner, type> owner::name##Property = loveprint::runtime::Property<owner, type>(&owner::propv_##name);


namespace loveprint
{
namespace runtime
{

template<class owner, typename T>
class Property final
{
	T owner:: * member;

public:
	inline size_t size() const {
		return sizeof(T);
	}

	void set(owner * owner, T value) const {
		owner->*member = value;
	}
	T get(const owner * owner) const {
		return owner->*member;
	}

	Property(T owner:: * offset)
		: member(offset)
	{
	}
	virtual ~Property() { }
}; // Property<owner, T>

} // runtime
} // loveprint

#endif // LOVEPRINT_RUNTIME_PROPERTY_H