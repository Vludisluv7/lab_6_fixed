#include <cmath>


bool Resh1(float x, float y)
{
    if ((x * x + y * y <= 1) && (x <= 0) && ((x - 1) * (x - 1) + y * y >= 2))
        return true;
    else
        return false;
}


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

bool Resh3(float x, float y)
{
    return ((x * x + y * y <= 1) && (x <= 0) && ((x - 1) * (x - 1) + y * y >= 2));

}
