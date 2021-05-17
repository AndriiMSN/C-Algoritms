#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <cmath>

void main()
{
    float a, b, c;
    scanf_s("%f %f %f", &a, &b, &c);
    if ((a + b + c) > 0) {
        a *= 2;
        b *= 2;
        c *= 2;
    }
    else {
        a = 0;
        b = 0;
        c = 0;
    }
    printf("%f %f %f", a, b, c);
    system("pause>0");
}
