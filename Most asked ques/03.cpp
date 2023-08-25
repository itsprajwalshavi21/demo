// GCD of two numbers
#include <bits/stdc++.h>
using namespace std;

int gcd1(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    // cout << a << endl;
    return a;
}

int gcd2(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd2(a, b) << endl;
    return 0;
}