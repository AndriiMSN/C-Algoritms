#include <iostream>
#include <conio.h>
using namespace std;

// Повертаємо факторіал числа

int Factorial(int n)
{
    int i;

    int Result = 1;

    for (i = 1; i <= n; i++)
        Result *= i;

    return Result;
}

void main()

{
    int n;
    cout << "Enter number \t"; //Запросити значення

    cin >> n;
    system("pause");
    cin.get();

    cout << Factorial(n) << endl;
    system("pause>0");
}