#include <cmath>

// 1 способ - стандартное разветвление с логическими операциями
bool Resh1(float x, float y)
{
    if ((x * x + y * y <= 1) && (x <= 0) && ((x - 1) * (x - 1) + y * y >= 2))
        return true;
    else
        return false;
}

// 2 способ - вложенные разветвления только с помощью операций отношения
bool Resh2(float x, float y)
{
    if (x * x + y * y <= 1)
    {
        if (x <= 0)
        {
            if ((x - 1) * (x - 1) + y * y >= 2)
                return true;
        }
    }
    return false;
}

// 3 способ - только сложное логическое выражение
bool Resh3(float x, float y)
{
    return ((x * x + y * y <= 1) && (x <= 0) && ((x - 1) * (x - 1) + y * y >= 2));
}