#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		if (arr[mid] == x) {
			return mid;
		}

		if (arr[mid] > x) {
			return binarySearch(arr, l, mid - 1, x);
		}

		return binarySearch(arr, mid + 1, r, x);
	}

	return -1;
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

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, n);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << "\n" << x << "is not present in array"
		: cout << "\n" << x << " is present at index " << result;

	system("pause>0");
	return 0;
}
