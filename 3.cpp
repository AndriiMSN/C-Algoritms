#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int i, j, m, n;
	int **matrix;
	cout << "Enter m:\t";
	cin >> m;
	cout << "Enter n:\t";
	cin >> n;

	matrix = new int* [m];
	for (i = 0; i < m; i++) {
		matrix[i] = new int[n];
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("A[%i,%i] = ", i, j);
			scanf_s("%i", &matrix[i][j]);
		}
	}

	std::vector< int > maxArr;
	maxArr.push_back(matrix[0][0]);

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++){
			bool u = true;
		for (int k = 0; k < maxArr.size(); k++)
		{
			if (matrix[i][j] == maxArr[k]) {
				u = false;
			}
		}
		if (u) {
			maxArr.push_back(matrix[i][j]);
		}
	}
}
for (int i = 0; i < maxArr.size(); i++)
{
	printf("B[%i] = %i\n", i, maxArr[i]);
}

int max = maxArr[0];
for (int i = 0; i < maxArr.size(); i++)
{
	if (maxArr[i] > max)
	{
		max = maxArr[i];
	}
}

printf("Max element = %i", max);

return 0;
}