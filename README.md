vectry
======

Simple vector math library for any purposes

======

This libraray is designed for simple vector math usage
in allpication involvin 2D graphics like applications 
using openGL, GLES, DirectX.

Can be used fully or partially.

======

Example:
<pre><code>
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
</code></pre>
