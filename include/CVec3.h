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

namespace vectry
{
    template<typename T>
    class CVec3
    {
    public:
        T x, y, z;

        // Constructors
        vexplicit vinline CVec3();
        vexplicit vinline CVec3(const CVec3& vec);
        vexplicit vinline CVec3(const CVec2<T>& vec, T v);
        vexplicit vinline CVec3(T v, const CVec2<T>& vec);
        vexplicit vinline CVec3(T _x, T _y, T _z);
        vexplicit vinline CVec3(T value);
        vinline ~CVec3();

        vinline CVec3&  operator =  (const CVec3& vec);
        vinline CVec3   operator +  (const CVec3& value) const;
        vinline CVec3   operator +  (T value) const;
        vinline CVec3&  operator += (const CVec3& value);
        vinline CVec3&  operator += (T value);
        vinline CVec3   operator -  (const CVec3& value) const;
        vinline CVec3   operator -  (T value) const;
        vinline CVec3   operator -  () const;
        vinline CVec3&  operator -= (const CVec3& value);
        vinline CVec3&  operator -= (T value);
        vinline CVec3   operator *  (T value) const;
        vinline CVec3&  operator *= (T value);
        vinline CVec3   operator /  (T value) const;
        vinline bool    operator == (const CVec3& value) const;

        vinline T       Dot(const CVec3& vec) const;
        vinline CVec3   Cross(const CVec3& vec) const;
        vinline T       SqLength() const;
        vinline T       Length() const;
        vinline T       Normalize();
    };

    template<typename T> 
    vinline CVec3<T> abs(const CVec3<T>& vec);

    template<typename T>
    vinline CVec3<T> operator / (T i, CVec3<T> v);

// Implementation
#include "CVec3.inl"
}
