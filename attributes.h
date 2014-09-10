#ifndef LOVEPRINT_ATTRIBUTES_H
#define LOVEPRINT_ATTRIBUTES_H

#define ClassNoAssignAttrib(class) \
	private: \
		void operator =(const class&); \
		class(const class&);
// ClassNoAssignAttrib

#define ClassStaticAttrib(class) \
	private: \
		void operator =(const class&); \
		class(const class&); \
		class();
// ClassStaticAttrib

#endif // LOVEPRINT_ATTRIBUTES_H