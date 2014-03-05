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

#include "CVec4.h"

namespace vectry
{
    template<typename T>
    class CMat4
    {
    public:
        T a1, a2, a3, a4;
        T b1, b2, b3, b4;
        T c1, c2, c3, c4;
		T d1, d2, d3, d4;

        // Constructors
        template<typename R>
        vexplicit vinline CMat4(const CMat4<R>&);
        vexplicit vinline CMat4();
        vexplicit vinline CMat4(T value);
        vexplicit vinline CMat4(T values[16]);
        vexplicit vinline CMat4(const CVec4<T>& row1,
                                const CVec4<T>& row2,
								const CVec4<T>& row3,
								const CVec4<T>& row4);
        vexplicit vinline CMat4(T row1col1, T row1col2, T row1col3,	row1col4,
                                T row2col1, T row2col2, T row2col3,	row2col4,
								T row3col1, T row3col2, T row3col3,	row3col4,
								T row4col1, T row4col2, T row4col3, row4col4);
        vinline CMat4(const CMat4& mat);
        vinline ~CMat4();

        vinline CMat4&   operator =  (const CMat4& mat);
        vinline CMat4    operator +  (const CMat4& mat) const;
        vinline CMat4    operator +  (T value) const;
        vinline CMat4&   operator += (const CMat4& mat);
        vinline CMat4&   operator += (T value);
        vinline CMat4    operator -  () const;
        vinline CMat4    operator +  () const;
        vinline CMat4    operator -  (const CMat4& mat) const;
        vinline CMat4    operator -  (T value) const;
        vinline CMat4&   operator -= (const CMat4& mat);
        vinline CMat4&   operator -= (T value);
        vinline CMat4    operator *  (const CMat4& mat) const;
        vinline CMat4    operator *  (T value) const;
        vinline CVec4<T> operator *  (const CVec4<T>& vec) const;
        vinline bool     operator == (const CMat4& mat) const;
        vinline bool     operator != (const CMat4& mat) const;

        vinline T        Det() const;
        vinline CMat4    Transpose() const;
        vinline void     SetIdentity();
        vinline void     SetScale(const CVec3<T>& scale);
        vinline void     SetTranslation(const CVec3<T>& pos);
        //vinline void     SetRotatation(T rot);
        //vinline T        GetRotationPart() const;
        //vinline CVec2<T> GetRotationPartSinCos() const;
        vinline CVec3<T> GetTranslationPart() const;
        vinline CVec3<T> GetScalePart() const;
    };

    template<typename T>
	vinline CVec3<T> Transform(const CMat4<T>& transformation, const CVec3<T>& point);

	template<typename T>
	vinline CVec3<T> TransformOuter(const CMat4<T>& transformation, const CVec3<T>& point);

// Implementation
#include "CMat4.inl"
}
