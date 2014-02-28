#pragma once

/**********************************
* Vectry (http://github.com/Teivaz/vectry)
* Simple vector math library for any purposes
*
* Created by Teivaz (http://github.com/Teivaz)
* This document is licensed under the GPLv2
*/

#ifdef VECTRY_EXPLICIT
#define vexplicit explicit
#else
#define vexplicit 
#endif

#ifdef VECTRY_INLINE
#define vinline inline
#else
#define vinline 
#endif

#include "CVec2.h"
#include "CVec3.h"
#include "CVec4.h"
#include "CMat3.h"
//#include "CMat4.h"

namespace vectry
{
    typedef CVec2<float>    vec2f;
    typedef CVec2<double>   vec2d;
    typedef CVec2<int>      vec2i;

    typedef CVec3<float>    vec3f;
    typedef CVec3<double>   vec3d;
    typedef CVec3<int>      vec3i;

    typedef CVec4<float>	vec4f;
    typedef CVec4<double>	vec4d;
    typedef CVec4<int>	    vec4i;
    
    typedef CMat3<float>    mat3f;
    typedef CMat3<double>   mat3d;
    typedef CMat3<int>      mat3i;
    
    //typedef CMat4<float>	mat4f;
    //typedef CMat4<double>	mat4d;
    //typedef CMat4<int>	mat4i;
}
