// Nth fibbonaci number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int f1 = 0;
    int f2 = 1;
    int f3;
    cin >> n;
    if (n == 1)
    {
        cout << "0" << endl;
    }
    else if (n == 2)
    {
        cout << "1" << endl;
    }
    else
    {
        n -= 2;
        while (n--)
        {
            f3 = f2 + f1;
            f1 = f2;
            f2 = f3;
        }
        cout << f3 << endl;
    }
    return 0;
}