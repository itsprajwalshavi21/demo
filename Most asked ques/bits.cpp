#include <bits/stdc++.h>
using namespace std;

/*
5 0101
  1011
*/

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}

int updateBit(int n, int pos, int val)
{
    int mask = ~(1 << pos);
    n &= mask;
    return (n | (val << pos));
}

int main()
{
    // cout << getBit(5, 2) << endl;
    // cout << setBit(5, 1) << endl;
    // cout << clearBit(5, 2) << endl;
    cout << updateBit(5, 0, 0) << endl;
    return 0;
}