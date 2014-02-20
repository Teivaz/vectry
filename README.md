vectry
======

Simple vector math library for any purposes

======

This libraray is design for simple usage of vector math
in allpication involvin 2D and 3D graphics, or other vectors
of any desirable type.

Can be used fully or partially.

======

Example:

#define VECTRY_INLINE
#include "include/vectry.h"
using namespace vectry;

class Object
{
	vec2f m_position;
public:
	const vec2f& getPosition()
	{
		return m_position;
	}
	void setPosition(const vec2f& position)
	{
		m_position = position;
	}
	mat3f getTransformation()
	{
		mat3f transforamtion;
		transforamtion.SetTranslation(getPosition());
		return transforamtion;
	}
}
