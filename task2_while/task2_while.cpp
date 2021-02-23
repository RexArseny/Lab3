#include <iostream>
#include <cmath>
using namespace std;

double summ(int n)
{
    double result = 0;
    int i = 0;
    while (i < n)
    {
        result += pow(-1, i) * (i + 1) / (pow(i, 3) - pow(i, 2) + 1);
        i++;
    }
    return result;
}

double summ2(double eps)
{
    double result = 0;
    int i = 0;
    while (abs(pow(-1, i) * (i + 1) / (pow(i, 3) - pow(i, 2) + 1)) > eps)
    {
        result += pow(-1, i) * (i + 1) / (pow(i, 3) - pow(i, 2) + 1);
        i++;
    }
    return result;
}

void print(int n, int k)
{
    int c = 1;
    int i = 0;
    while (i < n)
    {
        if (i == c * k)
        {
            c++;
            continue;
        }
        else
        {
            cout << pow(-1, i) * (i + 1) / (pow(i, 3) - pow(i, 2) + 1) << endl;
        }
        i++;
    }
}

int findFirstElement(double eps)
{
    int i = 0;
    while (abs(pow(-1, i) * (i + 1) / (pow(i, 3) - pow(i, 2) + 1)) > eps)
    {
        i++;
    }
    return i++;
}

int findFirstNegativeElement(double eps)
{
    int i = 0;
    while ((abs(pow(-1, i) * (i + 1) / (pow(i, 3) - pow(i, 2) + 1)) > eps) and (pow(-1, i) * (i + 1) / (pow(i, 3) - pow(i, 2) + 1) < 0))
    {
        i++;
    }
    return i++;
}

int main()
{
    setlocale(LC_ALL, "ru");

    int a, n, k;
    double eps;
    bool b = 1;

    while (b == 1)
    {
        system("cls");
        cout << "Выберите один из вариантов ниже:" << endl;
        cout << "1. Задание 1" << endl;
        cout << "2. Задание 2" << endl;
        cout << "3. Задание 3" << endl;
        cout << "4. Задание 4" << endl;
        cout << "5. Задание 5" << endl;
        cout << "6. Выход" << endl;
        cin >> a;
        system("cls");
        switch (a)
        {
        case 1:
            cout << "Введите n" << endl;
            cin >> n;
            cout << summ(n) << endl;
            break;
        case 2:
            cout << "Введите eps" << endl;
            cin >> eps;
            cout << summ2(eps) << endl;
            break;
        case 3:
            cout << "Введите n и k" << endl;
            cin >> n;
            cin >> k;
            print(n, k);
            break;
        case 4:
            cout << "Введите eps" << endl;
            cin >> eps;
            cout << findFirstElement(eps) << endl;
            break;
        case 5:
            cout << "Введите eps" << endl;
            cin >> eps;
            cout << findFirstNegativeElement(eps) << endl;
            break;
        case 6:
            b = 0;
            break;
        default:
            cout << "Введено неверное значение. Повторите попытку.";
            break;
        }
        system("pause");
    }
}