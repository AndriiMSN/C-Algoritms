#include <iostream>
using namespace std;


void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void shackerSort(int arr[], int n)
{
	bool swapped = true;
	int start = 0;
	int end = n - 1;

	while (swapped)
	{

		swapped = false;

		for (int i = start; i < end; ++i)
		{
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				swapped = true;
			}
		}

		if (!swapped)
			break;

		swapped = false;
		--end;
		for (int i = end - 1; i >= start; --i)
		{
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				swapped = true;
			}
		}
		++start;
	}

	//**** Simple Shacker
	/*int left, right, i;
	left = 0;
	right = n - 1;
	while (left <= right) {
		for (i = right; i >= left; i--) {
			if (arr[i - 1] > arr[i]) {
				swap(arr[i - 1], arr[i]);
			}
		}
		left++;
		for (i = left; i <= right; i++) {
			if (arr[i - 1] > arr[i]) {
				swap(arr[i - 1], arr[i]);
			}
		}
		right--;
	} */
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

	shackerSort(arr, n);
	printArray(arr, n);
	system("pause>0");
	return 0;
}

