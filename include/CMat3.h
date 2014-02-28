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

#include "CVec2.h"
#include "CVec3.h"

namespace vectry
{
    template<typename T>
    class CMat3
    {
    public:
        T a1, a2, a3;
        T b1, b2, b3;
        T c1, c2, c3;

        // Constructors
        template<typename R>
        vexplicit vinline CMat3(const CMat3<R>&);
        vexplicit vinline CMat3();
        vexplicit vinline CMat3(T value);
        vexplicit vinline CMat3(T values[9]);
        vexplicit vinline CMat3(const CVec3<T>& row1,
                                const CVec3<T>& row2,
                                const CVec3<T>& row3);
        vexplicit vinline CMat3(T row1col1, T row1col2, T row1col3,
                                T row2col1, T row2col2, T row2col3,
                                T row3col1, T row3col2, T row3col3);
        vinline CMat3(const CMat3& mat);
        vinline ~CMat3();

        vinline CMat3&   operator =  (const CMat3& mat);
        vinline CMat3    operator +  (const CMat3& mat) const;
        vinline CMat3    operator +  (T value) const;
        vinline CMat3&   operator += (const CMat3& mat);
        vinline CMat3&   operator += (T value);
        vinline CMat3    operator -  () const;
        vinline CMat3    operator +  () const;
        vinline CMat3    operator -  (const CMat3& mat) const;
        vinline CMat3    operator -  (T value) const;
        vinline CMat3&   operator -= (const CMat3& mat);
        vinline CMat3&   operator -= (T value);
        vinline CMat3    operator *  (const CMat3& mat) const;
        vinline CMat3    operator *  (T value) const;
        vinline CVec3<T> operator *  (const CVec3<T>& vec) const;
        vinline bool     operator == (const CMat3& mat) const;
        vinline bool     operator != (const CMat3& mat) const;

        vinline T        Det() const;
        vinline CMat3    Transpose() const;
        vinline void     SetIdentity();
        vinline void     SetScale(const CVec2<T>& scale);
        vinline void     SetTranslation(const CVec2<T>& pos);
        vinline void     SetRotatation(T rot);
        vinline T        GetRotationPart() const;
        vinline CVec2<T> GetRotationPartSinCos() const;
        vinline CVec2<T> GetTranslationPart() const;
        vinline CVec2<T> GetScalePart() const;
    };

    template<typename T>
	vinline CVec2<T> Transform(const CMat3<T>& transformation, const CVec2<T>& point);

	template<typename T>
	vinline CVec2<T> TransformOuter(const CMat3<T>& transformation, const CVec2<T>& point);

// Implementation
#include "CMat3.inl"
}
