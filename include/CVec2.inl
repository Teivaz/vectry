
/**********************************
* Vectry (http://github.com/Teivaz/vectry)
* Simple vector math library for any purposes
*
* Created by Teivaz (http://github.com/Teivaz)
* This document is licensed under the GPLv2
*/

template<typename T>
vinline CVec2<T>::CVec2()
    : x(0)
    , y(0)
{}

template<typename T>
vinline CVec2<T>::CVec2(const CVec2& vec)
    : x(vec.x)
    , y(vec.y)
{}

template<typename T>
vinline CVec2<T>::CVec2(T _x, T _y)
    : x(_x)
    , y(_y)
{}

template<typename T>
vinline CVec2<T>::CVec2(T value)
    : x(value)
    , y(value)
{}

template<typename T>
vinline CVec2<T>& CVec2<T>::operator =(const CVec2& vec)
{
    x = vec.x;
    y = vec.y;
    return *this;
}

template<typename T>
vinline CVec2<T>::~CVec2()
{}

template<typename T>
vinline CVec2<T> CVec2<T>::operator +(const CVec2& vec) const
{
    return CVec2(x + vec.x, y + vec.y);
}

template<typename T>
vinline CVec2<T> CVec2<T>::operator +(T value)
{
    return CVec2(x + value, y + value);
}

template<typename T>
vinline CVec2<T>& CVec2<T>::operator +=(const CVec2& vec)
{
    x += vec.x;
    y += vec.y;
    return *this;
}

template<typename T>
vinline CVec2<T>& CVec2<T>::operator +=(T value)
{
    x += value;
    y += value;
    return *this;
}

template<typename T>
vinline CVec2<T> CVec2<T>::operator -(const CVec2& vec) const
{
    return CVec2(x - vec.x, y - vec.y);
}

template<typename T>
vinline CVec2<T> CVec2<T>::operator -(T value) const
{
    return CVec2(x - value, y - value);
}

template<typename T>
vinline CVec2<T> CVec2<T>::operator -() const
{
    return CVec2(-x, -y);
}

template<typename T>
vinline CVec2<T>&  CVec2<T>::operator -= (const CVec2& vec)
{
    x -= vec.x;
    y -= vec.y;
    return *this;
}

template<typename T>
vinline CVec2<T>& CVec2<T>::operator -=(T value)
{
    x -= value;
    y -= value;
    return *this;
}

template<typename T>
vinline bool CVec2<T>::operator ==(const CVec2& vec) const
{
    return (x == vec.x) && (y == vec.y);
}

template<typename T>
vinline CVec2<T> CVec2<T>::operator *(T value) const
{
    return CVec2(x * value, y * value);
}

template<typename T>
vinline CVec2<T>& CVec2<T>::operator *=(T value)
{
    x *= value;
    y *= value;
    return *this;
}

template<typename T>
vinline CVec2<T> CVec2<T>::operator /(T value) const
{
    return CVec2(x / value, y / value);
}

template<typename T>
vinline T CVec2<T>::Dot(const CVec2& vec) const
{
    return x*vec.x + y*vec.y;
}

template<typename T>
vinline T CVec2<T>::SqLength() const
{
    return x*x + y*y;
}

template<typename T>
vinline T CVec2<T>::Length() const
{
    return sqrt(x*x + y*y);
}

template<typename T>
vinline T CVec2<T>::Normalize()
{
    T l = Length();
    x /= l;
    y /= l;
    return l;
}

template<typename T>
vinline void CVec2<T>::SwapElemtns()
{
    float t = x;
    x = y;
    y = t;
}

template<typename T>
vinline void CVec2<T>::TurnRight90()
{
    SwapElemtns();
    y *= -1;
}

template<typename T>
vinline void CVec2<T>::TurnLeft90()
{
    SwapElemtns();
    x *= -1;
}

template<typename T>
vinline CVec2<T> CVec2<T>::GetLeftNormal() const
{
    CVec2 norm(*this);
    norm.SwapElemtns();
    norm.x *= -1;
    norm.Normalize();
    return norm;
}

template<typename T>
vinline CVec2<T> CVec2<T>::GetRightNomal() const
{
    CVec2 norm(*this);
    norm.SwapElemtns();
    norm.y *= -1;
    norm.Normalize();
    return norm;
}

template<typename T>
vinline CVec2<T> abs(const CVec2<T>& vec)
{
    return CVec2<T>(::abs(vec.x), ::abs(vec.y));
}

template<typename T>
vinline CVec2<T> operator / (T value, CVec2<T> vec)
{
    return CVec2<T>(value / vec.x, value / vec.y);
}
