// Write a code to check if the given string is a palindrome or not
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;j--;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    cout << (isPalindrome(s) ? "Yes" : "No") << endl;
    return 0;
}