#define _USE_MATH_DEFINES
#include <conio.h>
#include <stdio.h>
#include <cmath>

void main()

{
    float x[20], y[20];

    int i;
    int n = 10;

    float a, t;

	printf("Enter a, t : \t");

    scanf_s("%f %f", &a, &t);

	printf("Enter array : \n");

    for (i = 1; i <= n; i++) 
    { 
		printf("x[%i] =  ", i);
		scanf_s("%f", &x[i]);
	}

    for (i = 1; i <= n; i++) {
        if (x[i]  >= 0) {
            y[i] = a * pow(t, 2) * (log(x[i]) / log(M_E));
            printf(" \n y[%i] = %f \n", i, y[i]);
        }
        else {
            printf("\n ln can't be equal negative value \n");
        }
       
    }
    system("pause>0");
}