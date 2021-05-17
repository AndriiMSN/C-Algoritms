#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] == x) {
			return i;
		}
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
	int result = search(arr, n, x);
	(result == -1)
		? cout << "\n" << x << "is not present in array"
		: cout << "\n" << x << " is present at index " << result;

	system("pause>0");
	return 0;
}
