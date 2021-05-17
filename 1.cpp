#include<math.h>
#include<stdio.h>
#include <locale.h>
#include <iostream>
using namespace std;
double iter(double x, double eps);

int main()
{
    setlocale(LC_ALL, "Russian");
    double Xn, Xk, dX, eps;
    cout << "Введите границы отрезка" << endl;

    do {
        do {
            cout << "Введите х начальное: |x| > 1\t";
            cin >> Xn;
            if (fabs(Xn) < 1) {
                cout << "|x| < 1";
            }
        } while (fabs(Xn) < 1);
        cout << "Введите х конечное: ";
        cin >> Xk;

        if (Xn > Xk) {
            cout << "Неверно введены границы. Повторите ввод!" << endl;
        }

    } while (Xn > Xk);

    do {
        cout << "Введите eps: 0 < eps < 1\t";
        cin >> eps;
        if (0 > eps || eps > 1) {
            cout << "0 > eps || eps > 1" << endl;
        }
    } while (0 > eps || eps > 1);

    cout << "Введите dX:\t";
    cin >> dX;

    for (double x = Xn; x <= Xk + dX; x += dX) {
        printf("| f(%f)= ", x);
        iter(x, eps);
        printf("log((x + 1) / (x - 1) = %f \n",log((x + 1) / (x - 1)));
    }
    printf("------------------------------------\n");
    return 0;
}

double iter(double x, double eps)
{
    const int MaxIter = 1000;
    double ch = 2 / x;
    double y = ch;
    int n = 0;
    while(fabs(ch) > eps)
    {
        ch *= (2 * n + 1) / ((2 * n + 3) * x * x);
        y += ch;
        n++;
        if (n > MaxIter)
        {
            printf("Ряд расходится\n");
            return 0;
        }
    }
    cout << y << " | " << n << " |";
}