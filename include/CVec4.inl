
/**********************************
* Vectry (http://github.com/Teivaz/vectry)
* Simple vector math library for any purposes
*
* Created by Teivaz (http://github.com/Teivaz)
* This document is licensed under the GPLv2
*/

template<typename T>
template<typename R>
vexplicit vinline CVec4<T>::CVec4(const CVec4<R>& vec)
    : x(static_cast<T>(vec.x))
    , y(static_cast<T>(vec.y))
    , z(static_cast<T>(vec.z))
    , w(static_cast<T>(vec.w))
{}

// vec()
template<typename T> 
vinline CVec4<T>::CVec4()
    : x(0)
    , y(0)
    , z(0)
	, w(0)
{}

// vec(vec)
template<typename T> 
vinline CVec4<T>::CVec4(const CVec4& vec)
    : x(vec.x)
    , y(vec.y)
    , z(vec.z)
	, w(vec.w)
{}

// vec4(vec3, i)
template<typename T>
vinline CVec4<T>::CVec4(const CVec3<T>& vec, T value)
    : x(vec.x)
    , y(vec.y)
    , z(vec.z)
    , w(value)
{}

// vec4(i, vec3)
template<typename T>
vinline CVec4<T>::CVec4(T value, const CVec3<T>& vec)
    : x(value)
    , y(vec.x)
    , z(vec.y)
    , w(vec.z)
{}

// vec(i, i, i, i)
template<typename T>
vinline CVec4<T>::CVec4(T _x, T _y, T _z, T _w)
    : x(_x)
    , y(_y)
    , z(_z)
	, w(_w)
{}

// vec(i)
template<typename T> 
vinline CVec4<T>::CVec4(T value)
    : x(value)
    , y(value)
    , z(value)
    , w(value)
{}

// vec = vec
template<typename T> 
vinline CVec4<T>& CVec4<T>::operator = (const CVec4& vec)
{
    x = vec.x;
    y = vec.y;
    z = vec.z;
	w = vec.w;
    return *this;
}

template<typename T> 
vinline CVec4<T>::~CVec4()
{}

// vec + vec
template<typename T>
vinline CVec4<T> CVec4<T>::operator + (const CVec4& vec) const
{
    return CVec4(x + vec.x, y + vec.y, z + vec.z, w + vec.w);
}

// vec + i
template<typename T> 
vinline CVec4<T> CVec4<T>::operator + (T value) const
{
    return CVec4(x + value, y + value, z + value, w + value);
}

// vec += vec
template<typename T> 
vinline CVec4<T>& CVec4<T>::operator += (const CVec4& vec)
{
    x += vec.x;
    y += vec.y;
    z += vec.z;
	w += vec.w;
    return *this;
}

// vec += i
template<typename T> vinline
CVec4<T>& CVec4<T>::operator += (T value)
{
    x += value;
    y += value;
    z += value;
	w += value;
    return *this;
}

// vec - vec
template<typename T>
vinline CVec4<T> CVec4<T>::operator - (const CVec4& vec) const
{
    return CVec4(x - vec.x, y - vec.y, z - vec.z, w - vec.w);
}

// vec - i
template<typename T> 
vinline CVec4<T> CVec4<T>::operator - (T value) const
{
    return CVec4(x - value, y - value, z - value, w - value);
}

// -vec
template<typename T> 
vinline CVec4<T> CVec4<T>::operator - () const
{
    return CVec4(-x, -y, -z, -w);
}

// vec -= vec
template<typename T> 
vinline CVec4<T>&  CVec4<T>::operator -= (const CVec4& vec)
{
    x -= vec.x;
    y -= vec.y;
    z -= vec.z;
	w -= vec.w;
    return *this;
}

// vec -= i
template<typename T>
vinline CVec4<T>& CVec4<T>::operator -= (T value)
{
    x -= value;
    y -= value;
    z -= value;
	w -= value;
    return *this;
}

// vec == vec
template<typename T>
vinline bool CVec4<T>::operator == (const CVec4& vec) const
{
    return (x == vec.x) && (y == vec.y) && (z == vec.z) && (w == vec.w);
}

// vec != vec
template<typename T>
vinline bool CVec4<T>::operator != (const CVec4& vec) const
{
    return (x != vec.x) || (y != vec.y) || (z != vec.z) || (w != vec.w);
}

// vec * i
template<typename T> 
vinline CVec4<T> CVec4<T>::operator * (T value) const
{
    return CVec4(x * value, y * value, z * value, w * value);
}

// vec *= i
template<typename T> 
vinline CVec4<T>& CVec4<T>::operator *= (T value)
{
    x *= value;
    y *= value;
    z *= value;
	w *= value;
    return *this;
}

// vec / i
template<typename T> 
vinline CVec4<T> CVec4<T>::operator / (T value) const
{
    return CVec4(x / value, y / value, z / value, w / value);
}

template<typename T> 
vinline T CVec4<T>::Dot(const CVec4& vec) const
{
    return (x * vec.x) + (y * vec.y) + (z * vec.z) + (w * vec.w);
}

template<typename T>
vinline CVec4<T> CVec4<T>::Cross(const CVec4& vec) const
{
    // return CVec4(y*vec.z - z*vec.y,
                 // z*vec.x - x*vec.z,
                 // x*vec.y - y*vec.x,);
}

template<typename T> 
vinline T CVec4<T>::SqLength() const
{
    return (x * x) + (y * y) + (z * z) + (w * w);
}

template<typename T> 
vinline T CVec4<T>::Length() const
{
    return sqrt(SqLength());
}

template<typename T> 
vinline T CVec4<T>::Normalize()
{
    T l = Length();
    x /= l;
    y /= l;
    x /= l;
	w /= l;
    return l;
}

template<typename T> 
vinline CVec4<T> abs(const CVec4<T>& vec)
{
    return CVec4<T>(abs(vec.x), abs(vec.y), abs(vec.z), abs(vec.w));
}

// i / vec
template<typename T> 
vinline CVec4<T> operator / (T value, CVec4<T> vec)
{
    return CVec4<T>(value / vec.x, value / vec.y, value / vec.z, value / vec.w);
}
