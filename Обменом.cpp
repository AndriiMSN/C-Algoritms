﻿#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

      
        if (swapped == false)
            break;
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
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    system("pause>0");
    return 0;
}