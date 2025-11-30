#include <iostream>
using namespace std;

void GetXY(float&, float&);
void Put(bool, float, float);
bool Resh1(float, float);
bool Resh2(float, float);
bool Resh3(float, float);

int main()
{
    float x, y;
    bool b, c, d; 

    GetXY(x, y); // Вызов функции ввода данных

    cout << "Решение 1-й функции:" << endl;
    b = Resh1(x, y); 
    Put(b, x, y); // Вызов функции вывода 

    cout << "Решение 2-й функции:" << endl;
    c = Resh2(x, y); 
    Put(c, x, y);

    cout << "Решение 3-й функции:" << endl;
    d = Resh3(x, y); 
    Put(d, x, y);

    system("PAUSE");
    return 0;
}