#include <iostream>
using namespace std;

//функция ввода
void GetXY(float& x, float& y)
{
    setlocale(LC_ALL, "rus");
    cout << "Введите координаты точки x, y: ";
    cin >> x >> y;
}

//функция вывода
void Put(bool b, float x, float y)
{
    setlocale(LC_ALL, "rus");
    cout << "Точка с координатами (" << x << ", " << y << ")" << endl;
    if (b)
        cout << "попала в заданную область" << endl;
    else
        cout << "не попала в заданную область" << endl;
}