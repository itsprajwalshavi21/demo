// Perfect number: Number == Sum of factors
#include <bits/stdc++.h>
using namespace std;

bool isPerfectNum(int n)
{
    int sum = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            sum += i;
            /*
            inner if condition is to add n / i to sum
            */
            if(i != n / i)
            {
                sum += n / i;
            }
        }
    }
    return (n == sum);
}

int main()
{
    int n;
    cin >> n;
    cout << isPerfectNum(n) << endl;
    return 0;
}