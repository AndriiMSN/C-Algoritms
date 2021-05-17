
#include <iostream>
using namespace std;

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int binarySearch(int a[], int item, int low, int high)
{
	if (high <= low) {
		return (item > a[low]) ? (low + 1) : low;
	}

	int mid = (low + high) / 2;

	if (item == a[mid]) {
		return mid + 1;
	}

	if (item > a[mid]) {
		return binarySearch(a, item, mid + 1, high);
	}
	return binarySearch(a, item, low, mid - 1);
}

void binarySelectionSort(int arr[], int n)
{
	int i, loc, j, k, selected;

	for (i = 1; i < n; ++i)
	{
		j = i - 1;
		selected = arr[i];

		loc = binarySearch(arr, selected, 0, j);

		while (j >= loc)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = selected;
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
	binarySelectionSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	system("pause>0");
	return 0;
}

