#define _USE_MATH_DEFINES
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>



void  main()

{
	double x, x0, d;

	const float eps = 0.0005;

	int a, b, n;

	a = 4;
	b = 7;
	x = (a + b) / 2;
	n = 0;

	do

	{
		x0 = x;
		if (x > 0) {
			int q = sqrt(x);
			x = 9, 7 * sin(q) + 0.76 * x - 6.95;
		}

		d = fabs(x - x0);
		n++;

	} while (d >= eps);

	printf("\n x= %f n= %i \n", x, n);
	system("pause>0");

}