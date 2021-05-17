#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
using namespace std;


void main()
{
	float a, b, x, y;
	printf("Enter a, b, x \t");
	scanf_s("%f %f %f", &a, &b, &x);

	if (x >= a) {
		if (x == 0) {
			cout << "x can't be equal 0 in this case" << endl;
		}
		else {
			y = a * pow(x, 2) + b / x;
			printf("y =  %f", y);
		};
	}
	else {

		if (cos(a + x) == 0) {
			cout << "Tangens is undefinden, cos equal 0 in this case" << endl;
		}
		else {
			y = tan(a + x);
			printf("y =  %f", y);
		}
	};
	system("pause>0");
}
