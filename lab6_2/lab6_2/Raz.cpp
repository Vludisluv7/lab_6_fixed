#include <cmath>
#include <iostream>

using namespace std;

//нахождения минимума
double minMy(double a, double b)
{
    return (a < b) ? a : b;
}

//нахождения максимума
double maxMy(double a, double b)
{
    return (a > b) ? a : b;
}

// 1-й способ 
double Razv(double x, double z, int& n)
{
    double r;

    if (z < 0 && x < 0) {
        n = 1;

        // Вычисление min(x, z) вручную
        r = x;
        if (z < x) r = z;
    }
    else if (z > 0 && x > 0) {
        n = 2;

        // Вычисление max(x, корень третьей степени(x+z), cos(xz)) вручную
        double cube_root = cbrt(x + z);
        double cos_val = cos(x * z);

        r = x;
        if (cube_root > r) r = cube_root;
        if (cos_val > r) r = cos_val;
    }
    else {
        n = 3;
        r = x + z;
    }

    return r;
}

// 2-й способ 
double Razm(double x, double z, int& n)
{
    if (z < 0 && x < 0) {
        n = 1;
        return minMy(x, z);
    }
    else if (z > 0 && x > 0) {
        n = 2;
        return maxMy(x, maxMy(cbrt(x + z), cos(x * z)));
    }
    else {
        n = 3;
        return x + z;
    }
}