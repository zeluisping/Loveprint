#ifndef LOVEPRINT_GRAPHICS_COLOR_H
#define LOVEPRINT_GRAPHICS_COLOR_H

namespace loveprint
{
namespace graphics
{

template<typename T>
struct ColorT
{
	T r;
	T g;
	T b;
	T a;

	ColorT<T> operator+=(const ColorT<T> &other);
	ColorT<T> operator*=(T s);
	ColorT<T> operator/=(T s);

	void set(T r_, T g_, T b_, T a_)
	{
		r = r_;
		g = g_;
		b = b_;
		a = a_;
	}

	ColorT()
		: r(0)
		, g(0)
		, b(0)
		, a(0)
	{
	}

	ColorT(T r_, T g_, T b_, T a_)
		: r(r_)
		, g(g_)
		, b(b_)
		, a(a_)
	{
	}
}; // ColorT

template<typename T>
ColorT<T> ColorT<T>::operator +=(const ColorT<T> & other)
{
	r += other.r;
	g += other.g;
	b += other.b;
	a += other.a;

	return *this;
}

template<typename T>
ColorT<T> ColorT<T>::operator *=(T s)
{
	r *= s;
	g *= s;
	b *= s;
	a *= s;

	return *this;
}

template<typename T>
ColorT<T> ColorT<T>::operator /=(T s)
{
	r /= s;
	g /= s;
	b /= s;
	a /= s;

	return *this;
}

template<typename T>
ColorT<T> operator +(const ColorT<T> & a, const ColorT<T> & b)
{
	ColorT<T> tmp(a);
	return tmp += b;
}

template<typename T>
ColorT<T> operator *(const ColorT<T> & a, T s)
{
	ColorT<T> tmp(a);
	return tmp *= s;
}

template<typename T>
ColorT<T> operator /(const ColorT<T> & a, T s)
{
	ColorT<T> tmp(a);
	return tmp /= s;
}

template<typename T>
bool operator ==(const ColorT<T> & a, const ColorT<T> & b)
{
	return a.r == b.r && a.g == b.g && a.b == b.b && a.a == b.a;
}

template<typename T>
bool operator != (const ColorT<T> & a, const ColorT<T> & b)
{
	return a.r != b.r || a.g != b.g || a.b != b.b || a.a != b.a;
}

typedef ColorT<unsigned char> Color;
typedef ColorT<float> Colorf;

} // graphics
} // loveprint

#endif // LOVEPRINT_GRAPHICS_COLOR_H