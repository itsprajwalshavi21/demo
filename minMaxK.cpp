#include <bits/stdc++.h>
using namespace std;

template <class T>
void printArray(T v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void problemSelection(vector<int> A, int K)
{
    // Write your code here
    long long minA = 0;
    long long maxA = 0;
    vector<long long> v;
    sort(A.begin(), A.end());
    printArray(A);
    for (int i = 0; i < A.size() - K; i++)
    {
        minA += A[i];
        cout << minA << " ";
    }
    cout << endl;

    for (int i = A.size() - 1; i >= K; i--)
    {
        maxA += A[i];
        cout << maxA << " ";
    }
    cout << endl;
    v.push_back(minA);
    v.push_back(maxA);
    cout << "--------" << endl;

    printArray(v);
}

int main()
{
    int n = 20;
    int k = 7;
    vector<int> v = {3, 14, 15, 10, 2, 20, 12, 4, 4, 17, 14, 8, 1, 4, 9, 5, 16, 4, 3, 20};
    problemSelection(v, k);
    return 0;
}

/*
5
20 7
3 14 15 10 2 20 12 4 4 17 14 8 1 4 9 5 16 4 3 20
18 4
12 15 15 6 9 6 5 13 9 1 2 9 13 13 12 9 6 9
20 11
3 7 16 17 3 15 20 18 11 17 2 18 4 2 20 1 13 12 14 9
19 16
12 6 14 2 3 7 20 19 15 18 11 15 17 15 17 14 19 9 8
16 3
4 8 19 17 18 17 4 19 3 12 9 14 4 17 6 1

*/