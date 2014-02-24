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
    class CVec2
    {
    public:
        T x, y;

        vexplicit vinline CVec2();
        vexplicit vinline CVec2(T _x, T _y);
        vexplicit vinline CVec2(T value);
        vinline CVec2(const CVec2& vec);
        vinline ~CVec2();

        vinline CVec2&  operator =  (const CVec2& vec);
        vinline CVec2   operator +  (const CVec2& value) const;
        vinline CVec2   operator +  (T value);
        vinline CVec2&  operator += (const CVec2& value);
        vinline CVec2&  operator += (T value);
        vinline CVec2   operator -  (const CVec2& value) const;
        vinline CVec2   operator -  (T value) const;
        vinline CVec2   operator -  () const;
        vinline CVec2&  operator -= (const CVec2& value);
        vinline CVec2&  operator -= (T value);
        vinline CVec2   operator *  (T value) const;
        vinline CVec2&  operator *= (T value);
        vinline CVec2   operator /  (T value) const;
        vinline bool    operator == (const CVec2& value) const;

        vinline T       Dot(const CVec2& vec) const;
        vinline T       SqLength() const;
        vinline T       Length() const;
        vinline T       Normalize();

        vinline void    SwapElemtns();
        vinline void    TurnRight90();
        vinline void    TurnLeft90();
		
        vinline CVec2   GetLeftNormal() const;
        vinline CVec2   GetRightNomal() const;
    };

    template<typename T>
    CVec2<T> abs(const CVec2<T>& vec);

    template<typename T>
    CVec2<T> operator / (T i, CVec2<T> v);

// Implementation
#include "CVec2.inl"
}
