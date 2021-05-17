#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void main()
{
	int i, j, m, n;
	
	float** matrix;
	cout << "Enter m:\t";
	cin >> m;
	cout << "Enter n:\t";
	cin >> n;

	matrix = new float* [m];
	for (i = 0; i < m; i++) {
		matrix[i] = new float[n];
	}

	printf("type your matrix: \n");

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("A[%i,%i] = ", i, j);
			scanf_s("%f", &matrix[i][j]);
		}
	}

	float minPositive = -1;

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			float el = matrix[i][j];
			if ( (el > 0)) {
				if (minPositive == -1) {
					minPositive = el;
				}
				else if (el < minPositive) {
					minPositive = el;
				}
			}
		}
	}
	if (minPositive == -1) 
	{
		cout << "All elements are negative" << endl;
	}
	else {
		printf("Min positive = %f", minPositive);
	}
/*	
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << "A[" << i << "," << j << "] = " << matrix[i][j] << endl;
		}
	}
*/
	system("pause>0");
}
