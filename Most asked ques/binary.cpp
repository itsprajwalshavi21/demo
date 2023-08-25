#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    while (n != 0)
    {
        cout << (n & 1) << endl;
        n = (n >> 1);
    }
    
    return 0;
}