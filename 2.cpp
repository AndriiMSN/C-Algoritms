#include <iostream>
using namespace std;

int main()
{
	int *array;
	int n;
	cout << "N:\t";
	cin >> n;

	array = new int[n];
	for (int i = 0; i < n; i++)
	{
		printf("A[%i] = ", i);
		scanf_s("%i", &array[i]);
	}

	int min = array[0];
	int minIndex = 0;
	for (int i = 1; i < n; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
			minIndex = i;
		}
	}

	int max = array[0];
	int maxIndex = 0;
	for (int i = 1; i < n; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
			maxIndex = i;
		}
	}
	printf("min = %i\nmax = %i\n", min, max);
	printf("minIndex = %i\nmaxIndex = %i\n", minIndex, maxIndex);
	int diff = maxIndex - minIndex;
	int y = 1;
	if (diff > 0)
	{
		for (int i = minIndex + 1; i < maxIndex; i++)
		{
			printf("A[%i] = %i\n", i, array[i]);

			y = y * array[i];
		}
	}
	else
	{
		for (int i = minIndex - 1; i > maxIndex; i--)
		{
			printf("A[%i] = %i\n", i, array[i]);
			y = y * array[i];
		}
	}
	printf("y = %i", y);
	return 0;
}
