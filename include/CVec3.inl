
/**********************************
* Vectry (http://github.com/Teivaz/vectry)
* Simple vector math library for any purposes
*
* Created by Teivaz (http://github.com/Teivaz)
* This document is licensed under the GPLv2
*/

// vec()
template<typename T> 
vinline CVec3<T>::CVec3()
    : x(0)
    , y(0)
    , z(0)
{}

// vec(vec)
template<typename T> 
vinline CVec3<T>::CVec3(const CVec3& vec)
    : x(vec.x)
    , y(vec.y)
    , z(vec.z)
{}

// vec3(vec2, i)
template<typename T>
vinline CVec3<T>::CVec3(const CVec2<T>& vec, T value)
    : x(vec.x)
    , y(vec.y)
    , z(value)
{}

// vec3(i, vec2)
template<typename T>
vinline CVec3<T>::CVec3(T value, const CVec2<T>& vec)
    : x(value)
    , y(vec.x)
    , z(vec.y)
{}

// vec(i, i, i)
template<typename T>
vinline CVec3<T>::CVec3(T _x, T _y, T _z)
    : x(_x)
    , y(_y)
    , z(_z)
{}

// vec(i)
template<typename T> 
vinline CVec3<T>::CVec3(T value)
: x(value)
, y(value)
, z(value)
{}

// vec = vec
template<typename T> 
vinline CVec3<T>& CVec3<T>::operator = (const CVec3& vec)
{
    x = vec.x;
    y = vec.y;
    z = vec.z;
    return *this;
}

template<typename T> 
vinline CVec3<T>::~CVec3()
{}

// vec + vec
template<typename T>
vinline CVec3<T> CVec3<T>::operator + (const CVec3& vec) const
{
    return CVec3(x + vec.x, y + vec.y, z + vec.z);
}

// vec + i
template<typename T> 
vinline CVec3<T> CVec3<T>::operator + (T value) const
{
    return CVec3(x + value, y + value, z + value);
}

// vec += vec
template<typename T> 
vinline CVec3<T>& CVec3<T>::operator += (const CVec3& vec)
{
    x += vec.x;
    y += vec.y;
    z += vec.z;
    return *this;
}

// vec += i
template<typename T> vinline
CVec3<T>& CVec3<T>::operator += (T value)
{
    x += value;
    y += value;
    z += value;
    return *this;
}

// vec - vec
template<typename T>
vinline CVec3<T> CVec3<T>::operator - (const CVec3& vec) const
{
    return CVec3(x - vec.x, y - vec.y, z - vec.z);
}

// vec - i
template<typename T> 
vinline CVec3<T> CVec3<T>::operator - (T value) const
{
    return CVec3(x - value, y - value, z - value);
}

// -vec
template<typename T> 
vinline CVec3<T> CVec3<T>::operator - () const
{
    return CVec3(-x, -y, -z);
}

// vec -= vec
template<typename T> 
vinline CVec3<T>&  CVec3<T>::operator -= (const CVec3& vec)
{
    x -= vec.x;
    y -= vec.y;
    z -= vec.z;
    return *this;
}

// vec -= i
template<typename T>
vinline CVec3<T>& CVec3<T>::operator -= (T value)
{
    x -= value;
    y -= value;
    z -= value;
    return *this;
}

// vec == vec
template<typename T>
vinline bool CVec3<T>::operator == (const CVec3& vec) const
{
    return (x == vec.x) && (y == vec.y) && (z == vec.z);
}

// vec != vec
template<typename T>
vinline bool CVec3<T>::operator != (const CVec3& vec) const
{
    return (x != vec.x) || (y != vec.y) || (z != vec.z);
}

// vec * i
template<typename T> 
vinline CVec3<T> CVec3<T>::operator * (T value) const
{
    return CVec3(x * value, y * value, z * value);
}

// vec *= i
template<typename T> 
vinline CVec3<T>& CVec3<T>::operator *= (T value)
{
    x *= value;
    y *= value;
    z *= value;
    return *this;
}

// vec / i
template<typename T> 
vinline CVec3<T> CVec3<T>::operator / (T value) const
{
    return CVec3(x / value, y / value, z / value);
}

template<typename T> 
vinline T CVec3<T>::Dot(const CVec3& vec) const
{
    return x*vec.x + y*vec.y + z*vec.z;
}

template<typename T>
vinline CVec3<T> CVec3<T>::Cross(const CVec3& vec) const
{
    return CVec3(y*vec.z - z*vec.y,
                 z*vec.x - x*vec.z,
                 x*vec.y - y*vec.x);
}

template<typename T> 
vinline T CVec3<T>::SqLength() const
{
    return x*x + y*y + z*z;
}

template<typename T> 
vinline T CVec3<T>::Length() const
{
    return sqrt(SqLength());
}

template<typename T> 
vinline T CVec3<T>::Normalize()
{
    T l = Length();
    x /= l;
    y /= l;
    x /= l;
    return l;
}

template<typename T> 
vinline CVec3<T> abs(const CVec3<T>& vec)
{
    return CVec3<T>(abs(vec.x), abs(vec.y), abs(vec.z));
}

// i / vec
template<typename T> 
vinline CVec3<T> operator / (T value, CVec3<T> vec)
{
    return CVec3<T>(value / vec.x, value / vec.y, value / vec.z);
}
