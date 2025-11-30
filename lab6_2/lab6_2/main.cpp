#include <iostream>
using namespace std;

void GetXZ(double&, double&);
void PutRN(double, int, const string&);
void PutError(const string&);
double Razv(double, double, int&);
double Razm(double, double, int&);
double minMy(double, double);
double maxMy(double, double);

int main()
{
    double x, z, r;
    int n; // Номер ветки

    GetXZ(x, z); // Ввод исходных данных

    int choice; // Вариант выбора решения
    cout << "\nКаким способом решать задачу?" << endl;
    cout << "1 - с вложенными разветвлениями без дополнительных функций max и min" << endl;
    cout << "2 - со своими функциями minMy и maxMy" << endl;
    cout << "Что выбираете (1 или 2)? ";
    cin >> choice;

    switch (choice) {
    case 1:
        r = Razv(x, z, n);
        PutRN(r, n, "Решение методом Razv (без вспомогательных функций)");
        break;
    case 2:
        r = Razm(x, z, n);
        PutRN(r, n, "Решение методом Razm (с вспомогательными функциями)");
        break;
    default:
        PutError("неверный выбор метода!");
        cout << endl;
        system("PAUSE");
        return 1;
    }

    system("PAUSE");
    return 0;
}