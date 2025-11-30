#include <iostream>
using namespace std;

//функция ввода
void GetXY(float& x, float& y)
{
    setlocale(LC_ALL, "rus");
    cout << "Ââåäèòå êîîðäèíàòû òî÷êè x, y: ";
    cin >> x >> y;
}

//функция вывода
void Put(bool b, float x, float y)
{
    setlocale(LC_ALL, "rus");
    cout << "Òî÷êà ñ êîîðäèíàòàìè (" << x << ", " << y << ")" << endl;
    if (b)
        cout << "ïîïàëà â çàäàííóþ îáëàñòü" << endl;
    else
        cout << "íå ïîïàëà â çàäàííóþ îáëàñòü" << endl;

}
