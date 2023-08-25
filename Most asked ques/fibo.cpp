#include <bits/stdc++.h>
using namespace std;

void printFib(vector <int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int fibonacci(int n)
{
    vector <int> v(n,0);
    if(n == 1)
    {
        return 0;
    }
    else if(n == 2)
    {
        return 1;
    }
    else
    {
        v[0] = 0;
        v[1] = 1;
        for (int i = 2; i < n; i++)
        {
            v[i] = v[i - 1] + v[i - 2];
        }
    }
    printFib(v);
    return v[n - 1];
}



int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Nth fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}
