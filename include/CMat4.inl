
/**********************************
* Vectry (http://github.com/Teivaz/vectry)
* Simple vector math library for any purposes
*
* Created by Teivaz (http://github.com/Teivaz)
* This document is licensed under the GPLv2
*/

// mat<float> = mat<double>
template<typename T>
template<typename R>
vexplicit vinline CMat4<T>::CMat4(const CMat4<R>& mat)
    : a1(static_cast<T>(mat.a1)), a2(static_cast<T>(mat.a2)), a3(static_cast<T>(mat.a3)), a4(static_cast<T>(mat.a4))
    , b1(static_cast<T>(mat.b1)), b2(static_cast<T>(mat.b2)), b3(static_cast<T>(mat.b3)), b4(static_cast<T>(mat.b4))
	, c1(static_cast<T>(mat.c1)), c2(static_cast<T>(mat.c2)), c3(static_cast<T>(mat.c3)), c4(static_cast<T>(mat.c4))
	, d1(static_cast<T>(mat.d1)), d2(static_cast<T>(mat.d2)), d3(static_cast<T>(mat.d3)), d4(static_cast<T>(mat.d4))
{}

// mat()
template<typename T> 
vinline CMat4<T>::CMat4()
	: a1(static_cast<T>(0)), a2(static_cast<T>(0)), a3(static_cast<T>(0)), a4(static_cast<T>(0))
	, b1(static_cast<T>(0)), b2(static_cast<T>(0)), b3(static_cast<T>(0)), b4(static_cast<T>(0))
	, c1(static_cast<T>(0)), c2(static_cast<T>(0)), c3(static_cast<T>(0)), c4(static_cast<T>(0))
	, d1(static_cast<T>(0)), d2(static_cast<T>(0)), d3(static_cast<T>(0)), d4(static_cast<T>(0))
{}

// mat(i)
template<typename T> 
vinline CMat4<T>::CMat4(T value)
    : a1(value), a2(value), a3(value), a4(value)
    , b1(value), b2(value), b3(value), b4(value)
	, c1(value), c2(value), c3(value), c4(value)
	, d1(value), d2(value), d3(value), d4(value)
{}

// mat(i[16])
template<typename T>
vinline CMat4<T>::CMat4(T values[16])
	: a1(values[0]),  a2(values[1]),  a3(values[2]),  a4(values[3])
	, b1(values[4]),  b2(values[5]),  b3(values[6]),  b4(values[7])
	, c1(values[8]),  c2(values[9]),  c3(values[10]), c4(values[11])
	, d1(values[12]), d2(values[13]), d3(values[14]), d4(values[15])
{}

// mat(vec4, vec4, vec4, vec4)
template<typename T> 
vinline CMat4<T>::CMat4(const CVec4<T>& row1,
                        const CVec4<T>& row2,
                        const CVec4<T>& row3,
						const CVec4<T>& row4)
    : a1(row1.x), a2(row1.y), a3(row1.z), a4(row1.w)
    , b1(row2.x), b2(row2.y), b3(row2.z), b4(row2.w)
	, c1(row3.x), c2(row3.y), c3(row3.z), c4(row3.w)
	, d1(row4.x), d2(row4.y), d3(row4.2), d4(row4.w)
{}

// mat(i, i, i, i, i, i, i, i, i);
template<typename T>
vinline CMat4<T>::CMat4(T row1col1, T row1col2, T row1col3, T row1col4,
						T row2col1, T row2col2, T row2col3, T row2col4,
                        T row3col1, T row3col2, T row3col3, T row3col4,
						T row4col1, T row4col2, T row4col3, T row4col4)
    : a1(row1col1), a2(row1col2), a3(row1col3), a4(row1col4)
    , b1(row2col1), b2(row2col2), b3(row2col3), b4(row2col4)
	, c1(row3col1), c2(row3col2), c3(row3col3), c4(row3col4)
	, d1(row4col1), d2(row4col2), d3(row4col3), d4(row4col4)
{}

// mat(mat)
template<typename T> 
vinline CMat4<T>::CMat4(const CMat4& mat)
    : a1(mat.a1), a2(mat.a2), a3(mat.a3), a4(mat.a4)
    , b1(mat.b1), b2(mat.b2), b3(mat.b3), b4(mat.b4)
	, c1(mat.c1), c2(mat.c2), c3(mat.c3), c4(mat.c4)
	, d1(mat.d1), d2(mat.d2), d3(mat.d3), d4(mat.d4)
{}

// mat = mat
template<typename T> 
vinline CMat4<T>& CMat4<T>::operator = (const CMat4& mat)
{
    a1 = mat.a1; a2 = mat.a2; a3 = mat.a3; a4 = mat.a4;
    b1 = mat.b1; b2 = mat.b2; b3 = mat.b3; b4 = mat.b4;
	c1 = mat.c1; c2 = mat.c2; c3 = mat.c3; c4 = mat.c4;
	d1 = mat.d1; d2 = mat.d2; d3 = mat.d3; d4 = mat.d4;
    return *this;
}

template<typename T> 
vinline CMat4<T>::~CMat4()
{}

// mat + mat
template<typename T>
vinline CMat4<T> CMat4<T>::operator + (const CMat4& mat) const
{
    return CMat4(
        a1 + mat.a1, a2 + mat.a2, a3 + mat.a3, a4 + mat.a4,
        b1 + mat.b1, b2 + mat.b2, b3 + mat.b3, b4 + mat.b4,
        c1 + mat.c1, c2 + mat.c2, c3 + mat.c3, c4 + mat.c4,
		d1 + mat.d1, d2 + mat.d2, d3 + mat.d3, d4 + mat.d4);
}

// mat + i
template<typename T> 
vinline CMat4<T> CMat4<T>::operator + (T value) const
{
    return CMat4(
        a1 + value, a2 + value, a3 + value, a4 + value,
        b1 + value, b2 + value, b3 + value, b4 + value,
		c1 + value, c2 + value, c3 + value, c4 + value,
		d1 + value, d2 + value, d3 + value, d4 + value);
}

// mat += mat
template<typename T> 
vinline CMat4<T>& CMat4<T>::operator += (const CMat4& mat)
{
    a1 += mat.a1; a2 += mat.a2; a3 += mat.a3; a4 += mat.a4;
    b1 += mat.b1; b2 += mat.b2; b3 += mat.b3; b4 += mat.b4;
	c1 += mat.c1; c2 += mat.c2; c3 += mat.c3; c4 += mat.c4;
	d1 += mat.d1; d2 += mat.d2; d3 += mat.d3; d4 += mat.d4;
    return *this;
}

// mat += i
template<typename T> vinline
CMat4<T>& CMat4<T>::operator += (T value)
{
	a1 += value; a2 += value; a3 += value; a4 += value;
	b1 += value; b2 += value; b3 += value; b4 += value;
	c1 += value; c2 += value; c3 += value; c4 += value;
	d1 += value; d2 += value; d3 += value; d4 += value;
    return *this;
}

// -mat
template<typename T> 
vinline CMat4<T> CMat4<T>::operator - () const
{
    return CMat4() - *this;
}

// +mat
template<typename T>
vinline CMat4<T> CMat4<T>::operator + () const
{
    return *this;
}

// mat - mat
template<typename T>
vinline CMat4<T> CMat4<T>::operator - (const CMat4& mat) const
{
    return CMat4(
        a1 - mat.a1, a2 - mat.a2, a3 - mat.a3, a4 - mat.a4,
        b1 - mat.b1, b2 - mat.b2, b3 - mat.b3, b4 - mat.b4,
		c1 - mat.c1, c2 - mat.c2, c3 - mat.c3, c4 - mat.c4,
		d1 - mat.d1, d2 - mat.d2, d3 - mat.d3, d4 - mat.d4);
}

// mat - i
template<typename T> 
vinline CMat4<T> CMat4<T>::operator - (T value) const
{
    return CMat4(
        a1 - value, a2 - value, a3 - value, a4 - value,
        b1 - value, b2 - value, b3 - value, b4 - value,
		c1 - value, c2 - value, c3 - value, c4 - value,
		d1 - value, d2 - value, d3 - value, d4 - value);
}

// mat -= mat
template<typename T> 
vinline CMat4<T>&  CMat4<T>::operator -= (const CMat4& mat)
{
    a1 -= mat.a1; a2 -= mat.a2; a3 -= mat.a3; a4 -= mat.a4;
    b1 -= mat.b1; b2 -= mat.b2; b3 -= mat.b3; b4 -= mat.b4;
	c1 -= mat.c1; c2 -= mat.c2; c3 -= mat.c3; c4 -= mat.c4;
	d1 -= mat.d1; d2 -= mat.d2; d3 -= mat.d3; d4 -= mat.d4;
    return *this;
}

// mat -= i
template<typename T>
vinline CMat4<T>& CMat4<T>::operator -= (T value)
{
	a1 -= value; a2 -= value; a3 -= value; a4 -= value;
	b1 -= value; b2 -= value; b3 -= value; b4 -= value;
	c1 -= value; c2 -= value; c3 -= value; c4 -= value;
	d1 -= value; d2 -= value; d3 -= value; d4 -= value;
    return *this;
}

// mat == mat
template<typename T>
vinline bool CMat4<T>::operator == (const CMat4& mat) const
{
    return (
		(a1 == mat.a1) && (a2 == mat.a2) && (a3 == mat.a3) && (a4 == mat.a4) &&
		(b1 == mat.b1) && (b2 == mat.b2) && (b3 == mat.b3) && (b4 == mat.b4) &&
		(c1 == mat.c1) && (c2 == mat.c2) && (c3 == mat.c3) && (c4 == mat.c4) &&
		(d1 == mat.d1) && (d2 == mat.d2) && (d3 == mat.d3) && (d4 == mat.d4));
}

// mat != mat
template<typename T>
vinline bool CMat4<T>::operator != (const CMat4& value) const
{
    return !(value == *this);
}

// mat * i
template<typename T> 
vinline CMat4<T> CMat4<T>::operator * (T value) const
{
    a1 *= value; a2 *= value; a3 *= value;
    b1 *= value; b2 *= value; b3 *= value;
    c1 *= value; c2 *= value; c3 *= value;
    return *this;
}

// mat * mat
template<typename T> 
vinline CMat4<T> CMat4<T>::operator * (const CMat4& mat) const
{
    return CMat4(
        ((a1*mat.a1) + (a2*mat.b1) + (a3*mat.c1) + (a4*mat.d1)),
					((a1*mat.a2) + (a2*mat.b2) + (a3*mat.c2) + (a4*mat.d2)),
								((a1*mat.a3) + (a2*mat.b3) + (a3*mat.c3) + (a4*mat.d3)),
											((a1*mat.a4) + (a2*mat.b4) + (a3*mat.c4) + (a4*mat.d4)),

        ((b1*mat.a1) + (b2*mat.b1) + (b3*mat.c1) + (b1*mat.d1)),
					((b1*mat.a2) + (b2*mat.b2) + (b3*mat.c2) + (b4*mat.d2)),
								((b1*mat.a3) + (b2*mat.b3) + (b3*mat.c3) + (b4*mat.d3)),
											((b1*mat.a4) + (b2*mat.b4) + (b3*mat.c4) + (b4*mat.d4)),

        ((c1*mat.a1) + (c2*mat.b1) + (c3*mat.c1) + (c4*mat.d1)),
					((c1*mat.a2) + (c2*mat.b2) + (c3*mat.c2) + (c4*mat.d2)),
								((c1*mat.a3) + (c2*mat.b3) + (c3*mat.c3) + (c4*mat.d3)),
											((c1*mat.a4) + (c2*mat.b4) + (c3*mat.c4) + (c4*mat.d4)),

		((c1*mat.a1) + (c2*mat.b1) + (c3*mat.c1) + (c4*mat.d1)),
					((c1*mat.a2) + (c2*mat.b2) + (c3*mat.c2) + (c4*mat.d2)),
								((c1*mat.a2) + (c2*mat.b2) + (c3*mat.c2) + (c4*mat.d2)),
											((c1*mat.a4) + (c2*mat.b4) + (c3*mat.c4) + (c4*mat.d4)));
}

// mat * vec3
template<typename T>
vinline CVec4<T> CMat4<T>::operator * (const CVec4<T>& vec) const
{
    return CVec3<T>(
        (a1*vec.x + a2*vec.y + a3*vec.z + a4*vec.w),
        (b1*vec.x + b2*vec.y + b3*vec.z + b4*vec.w),
		(c1*vec.x + c2*vec.y + c3*vec.z + c4*vec.w),
		(d1*vec.x + d2*vec.y + d3*vec.z + d4*vec.w));
}

template<typename T> 
vinline T CMat4<T>::Det() const
{
//    return a1*b2*c3*d4 + a2*b3*c1 + a3*b1*c2 - a3*b2*c1 - a2*b1*c3 - a1*b3*c2;
}

template<typename T>
vinline CMat4<T> CMat4<T>::Transpose() const
{
    return CMat4<T>(
        a1, b1, c1, d1,
        a2, b2, c2, d2,
		a3, b3, c3, d3,
		a4, b4, c4, d4);
}

template<typename T>
vinline void CMat4<T>::SetIdentity()
{
	a1 = static_cast<T>(1); a2 = static_cast<T>(0); a3 = static_cast<T>(0); a4 = static_cast<T>(0);
	b1 = static_cast<T>(0); b2 = static_cast<T>(1); b3 = static_cast<T>(0); b4 = static_cast<T>(0);
	c1 = static_cast<T>(0); c2 = static_cast<T>(0); c3 = static_cast<T>(1); c4 = static_cast<T>(0);
	d1 = static_cast<T>(0); d2 = static_cast<T>(0); d3 = static_cast<T>(0); d4 = static_cast<T>(1);
}

template<typename T>
vinline void CMat4<T>::SetScale(const CVec3<T>& scale)
{
	a1 = scale.x;           a2 = static_cast<T>(0); a3 = static_cast<T>(0); a4 = static_cast<T>(0);
	b1 = static_cast<T>(0); b2 = scale.y;           b3 = static_cast<T>(0); b4 = static_cast<T>(0);
	c1 = static_cast<T>(0); c2 = static_cast<T>(0); c3 = scale.z;			c4 = static_cast<T>(0);
	d1 = static_cast<T>(0); d2 = static_cast<T>(0); d3 = static_cast<T>(0); d4 = static_cast<T>(1);
}

template<typename T>
vinline void CMat4<T>::SetTranslation(const CVec3<T>& pos)
{
    a1 = static_cast<T>(1); a2 = static_cast<T>(0); a3 = static_cast<T>(0); a4 = pos.x;
    b1 = static_cast<T>(0); b2 = static_cast<T>(1); b3 = static_cast<T>(0); b4 = pos.y;
	c1 = static_cast<T>(0); c2 = static_cast<T>(0); c3 = static_cast<T>(1); c4 = pos.z;
	d1 = static_cast<T>(0); d2 = static_cast<T>(0); d3 = static_cast<T>(0); d4 = static_cast<T>(1);
}

//template<typename T>
//vinline void CMat4<T>::SetRotatation(T rot)
//{
//    T cosRot = cos(rot), sinRot = sin(rot);
//    a1 = cosRot;            a2 = -sinRot;           a3 = static_cast<T>(0);
//    b1 = sinRot;            b2 = cosRot;            b3 = static_cast<T>(0);
//    c1 = static_cast<T>(0); c2 = static_cast<T>(0); c3 = static_cast<T>(1);
//}

//template<typename T>
//vinline T CMat4<T>::GetRotationPart() const
//{
////#error not implemented yet
//}
//
//template<typename T>
//vinline CVec2<T> CMat4<T>::GetRotationPartSinCos() const
//{
////#error not implemented yet
//}

template<typename T>
vinline CVec3<T> CMat4<T>::GetTranslationPart() const
{
    return CVec3<T>(a4, b4, c4);
}

//template<typename T>
//vinline CVec3<T> CMat4<T>::GetScalePart() const
//{
//    T x = sqrt(a1 * a1 + a2 * a2);
//    T y = sqrt(b1 * b1 + b2 * b2);
//    (a1 > 0) ? x : x = -x;
//    (a2 > 0) ? y : y = -y;
//    return CVec2<T>(x, y);
//}

template<typename T>
vinline CVec2<T> Transform(const CMat4<T>& transformation, const CVec3<T>& point)
{
    T x = transformation.a1 * point.x + transformation.a2 * point.y + transformation.a3 * point.z + transformation.a4;
	T y = transformation.b1 * point.x + transformation.b2 * point.y + transformation.b3 * point.z + transformation.b4;
	T z = transformation.c1 * point.x + transformation.c2 * point.y + transformation.c3 * point.z + transformation.c4;
    return CVec3<T>(x, y, z);
}

template<typename T>
vinline CVec2<T> TransformOuter(const CMat4<T>& transformation, const CVec3<T>& point)
{
	T x = transformation.a1 * point.x + transformation.a2 * point.y + transformation.a3 * point.z;
	T y = transformation.b1 * point.x + transformation.b2 * point.y + transformation.b3 * point.z;
	T z = transformation.c1 * point.x + transformation.c2 * point.y + transformation.c3 * point.z;
	return CVec3<T>(x, y, z);
}
