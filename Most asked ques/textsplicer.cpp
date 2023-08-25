#include <bits/stdc++.h>
using namespace std;

vector<string> spliceText(string s)
{
    string temp = "";
    vector<string> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '/')
        {
            v.push_back(temp);
            // cout << temp << endl;
            temp = "";
        }
        else
        {
            temp += s[i];
        }
    }
    return v;
}

int main()
{
    string s;
    cin >> s;
    vector<string> v = spliceText(s);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}