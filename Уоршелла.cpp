#include <iostream>
#define MaxNodes 5
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int m[MaxNodes][MaxNodes] = {
		{
			0,
			1,
			0,
			0,
			0,
		},
		{
			0,
			0,
			1,
			0,
			0,
		},
		{
			1,
			0,
			0,
			1,
			0,
		},
		{
			0,
			0,
			0,
			0,
			0,
		},
		{
			1,
			0,
			1,
			0,
			0,
		},
	};
	int s[MaxNodes][MaxNodes];

	for (int i = 0; i < MaxNodes; i++)
	{
		for (int j = 0; j < MaxNodes; j++)
		{
			s[i][j] = m[i][j];
		}
	}

	for (int k = 0; k < MaxNodes; k++)
	{
		for (int i = 0; i < MaxNodes; i++)
		{
			if (s[i][k] == 1)
			{
				for (int j = 0; j < MaxNodes; j++)
				{
					s[i][j] = (s[i][j] || s[k][j]);
				}
			}
		}
		cout << "Матрица достижимости:" << k << endl;
		for (int i = 0; i < MaxNodes; i++)
		{
			for (int j = 0; j < MaxNodes; j++)
			{
				cout << s[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}