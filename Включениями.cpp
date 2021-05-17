#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
	int i, key, j;

	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}


void printArray(int arr[], int size)
{
	int i;
	cout << "{ ";
	for (i = 0; i < size; i++) {
		if (i == size - 1) {
			cout << arr[i];
		}
		else {
			cout << arr[i] << ", ";
		}
	}
	cout << " }";
}


int main()
{
	int arr[] = { 64, 25, 12, 22, 11, -27, 158, 25, 0, 35 };
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);
	printArray(arr, n);
	system("pause>0");
	return 0;
}
