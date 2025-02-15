﻿
#include <iostream>
using namespace std;

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n - 1; i++)
	{
		min_idx = i;

		for (j = i + 1; j < n; j++) {

			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}


		swap(&arr[min_idx], &arr[i]);
	}
}


void printArray(int arr[], int size)
{
	int i;
	cout << "{ ";
	for (i = 0; i < size; i++) {
		if (i == size -1) {
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
	selectionSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	system("pause>0");
	return 0;
}

