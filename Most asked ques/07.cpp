// Write a code to calculate the frequency of characters in a string
#include <bits/stdc++.h>
using namespace std;

void calcFreq(string s)
{
    map <char,int> mp;
    for(auto &x : s)
    {
        mp[x]++;
    }
    cout << "Frequency of:" << endl;
    for(auto &x: mp)
    {
        cout << x.first << " is: " << x.second << endl;
    }
}

int main()
{
    string s;
    cin >> s;
    calcFreq(s);
    return 0;
}