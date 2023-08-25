// Write a code for bubble sort
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {6, 9, 4, 1, 8, 5, 3, 2, 7, 0};
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}