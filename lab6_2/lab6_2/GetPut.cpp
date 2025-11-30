#include <iostream>
using namespace std;

// Функция ввода данных
void GetXZ(double& x, double& z)
{
    setlocale(LC_ALL, "rus");
    cout << "Ââåäèòå x è z: ";
    cin >> x >> z;
}
// Функция вывода результатов
void PutRN(double R, int N, const string& method)
{
    setlocale(LC_ALL, "rus");
    cout << "\n" << method << ":" << endl;
    cout << "Îòâåò R = " << R << endl;
    cout << "Íîìåð âåòêè ðàçâåòâëåíèÿ: " << N << endl;
}

// Функция вывода ошибки
void PutError(const string& message)
{
    setlocale(LC_ALL, "rus");
    cout << "Îøèáêà: " << message << endl;

}
