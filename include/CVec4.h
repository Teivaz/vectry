#pragma once

/**********************************
* Vectry (http://github.com/Teivaz/vectry)
* Simple vector math library for any purposes
*
* Created by Teivaz (http://github.com/Teivaz)
* This document is licensed under the GPLv2
*/

#ifndef vexplicit 
#define vexplicit 
#endif
#ifndef vinline
#define vinline inline
#endif

#include "CVec3.h"

namespace vectry
{
    template<typename T>
    class CVec4
    {
    public:
        T x, y, z, w;

        // Constructors
        template<typename R>
        vexplicit vinline CVec4(const CVec4<R>& vec);
        vexplicit vinline CVec4();
        vexplicit vinline CVec4(const CVec3<T>& vec, T v);
        vexplicit vinline CVec4(T v, const CVec3<T>& vec);
        vexplicit vinline CVec4(T _x, T _y, T _z, T _w);
        vexplicit vinline CVec4(T value);
        vinline CVec4(const CVec4& vec);
        vinline ~CVec4();

        vinline CVec4&  operator =  (const CVec4& vec);
        vinline CVec4   operator +  (const CVec4& value) const;
        vinline CVec4   operator +  (T value) const;
        vinline CVec4&  operator += (const CVec4& value);
        vinline CVec4&  operator += (T value);
        vinline CVec4   operator -  (const CVec4& value) const;
        vinline CVec4   operator -  (T value) const;
        vinline CVec4   operator -  () const;
        vinline CVec4&  operator -= (const CVec4& value);
        vinline CVec4&  operator -= (T value);
        vinline CVec4   operator *  (T value) const;
        vinline CVec4&  operator *= (T value);
        vinline CVec4   operator /  (T value) const;
        vinline bool    operator == (const CVec4& value) const;
        vinline bool    operator != (const CVec4& value) const;

        vinline T       Dot(const CVec4& vec) const;
        vinline CVec4   Cross(const CVec4& vec) const;
        vinline T       SqLength() const;
        vinline T       Length() const;
        vinline T       Normalize();
    };

    template<typename T> 
    vinline CVec4<T> abs(const CVec4<T>& vec);

    template<typename T>
    vinline CVec4<T> operator / (T i, CVec4<T> v);

// Implementation
#include "CVec4.inl"
}
