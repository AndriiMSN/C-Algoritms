// C++ program for Merge Sort
#include <iostream>
using namespace std;


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
	cout << " }\n";
}

void twoWayMerge(int arr1[], int s1, int arr2[], int s2) {
	int i = 0;
	int j = 0;
	int k = 0;

	const int n = s1 + s2;
	int* arr3 = new int[n];

	while (i < s1 && j < s2) {
		if (arr1[i] <= arr2[j]) {
			arr3[k] = arr1[i];
			i++;
		}
		else {
			arr3[k] = arr2[j];
			j++;
		}
		k++;
	}
	while (i < s1) {
		arr3[k] = arr1[i];
		i++;
		k++;
	}

	while (j < s2) {
		arr3[k] = arr2[j];
		j++;
		k++;
	}

	printArray(arr3, n);
}



int main()
{
	int arr1[] = { 0, 12, 50 };
	int arr1_size = sizeof(arr1) / sizeof(arr1[0]);

	int arr2[] = { -7, 1, 25, 28,50 };
	int arr2_size = sizeof(arr2) / sizeof(arr2[0]);

	cout << "Array1 \n";
	printArray(arr1, arr1_size);
	cout << "Array2 \n";
	printArray(arr2, arr2_size);

	cout << "Merged Array \n";
	twoWayMerge(arr1, arr1_size, arr2, arr2_size);

	system("pause>0");
	return 0;
}

