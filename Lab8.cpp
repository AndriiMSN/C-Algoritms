#define _USE_MATH_DEFINES
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>



void  main()

{
	double x, x0, d;

	float eps = 0.00015;

	int a, b, n, k;

	a = 1;
	b = 3;
	k = 2;
	x = (a + b) / 2;
	n = 0;

	do

	{
		x0 = x;
		x = log(pow(M_E, (0.9 * x0))) / log(M_E) + 3.5;

		d = fabs(x - x0);
		if (n % k == 0) {
			printf("x= %f \n", x);
		}
		n++;

	} while (d >= eps);

	printf("\n x= %f n= %i \n", x, n);
	system("pause>0");

}