
#include <iostream>
#include <cmath>

int fact(const int& x) {
	if (x == 1) return 1;
	return fact(x - 1) * x;
}

void main()
{
	int Xmin, Xmax, n;
	float y;

	printf("Enter Xmin: \n");
	scanf_s("%i", &Xmin);

	printf("Enter Xmax: \n");
	scanf_s("%i", &Xmax);

	printf("Enter n: \n");
	scanf_s("%i", &n);

	int Dx = (Xmax - Xmin) / n;

	int x = Xmin;
	for (int i = 1; i <= n; i++)
	{
		y = pow(x, 2) / fact(i);
		printf("y[%i] = %f \n", i ,y);
		x += Dx;
	};

	system("pause>0");
}

