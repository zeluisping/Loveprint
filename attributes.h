#ifndef LOVEPRINT_ATTRIBUTES_H
#define LOVEPRINT_ATTRIBUTES_H

#define NoAssignClassAttrib(class) \
	private: \
		void operator =(const class&); \
		class(const class&);
// NoAssignClassAttrib

#endif // LOVEPRINT_ATTRIBUTES_H