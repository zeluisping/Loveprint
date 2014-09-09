#ifndef LOVEPRINT_JADE_THICKNESS_H
#define LOVEPRINT_JADE_THICKNESS_H

namespace loveprint
{
namespace jade
{

struct Thickness
{
	float left;
	float top;
	float right;
	float bottom;

	Thickness()
		: left(0)
		, top(0)
		, right(0)
		, bottom(0)
	{
	}
	Thickness(float uniform)
		: left(uniform)
		, top(uniform)
		, right(uniform)
		, bottom(uniform)
	{
	}
	Thickness(float left, float top, float right, float bottom)
		: left(left)
		, top(top)
		, right(right)
		, bottom(bottom)
	{
	}
}; // Margin

} // jade
} // loveprint

#endif // LOVEPRINT_JADE_THICKNESS_H