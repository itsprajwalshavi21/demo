// Write a code to check if two Strings are Anagram or not
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2)
{
    map<char, int> mp;
    for (int i = 0; i < s1.size(); i++)
    {
        mp[s1[i]]++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        mp[s2[i]]--;
    }
    for (auto &x : mp)
    {
        if (x.second != 0)
        {
            return false;
        }
    }
    return true;
}

bool isAnagram2(string s1, string s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    int charCount[26] = {0};
    for (int i = 0; i < s1.size(); i++)
    {

        charCount[tolower(s1[i]) - 'a']++;
        charCount[tolower(s2[i]) - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (charCount[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    cout << (isAnagram2(s1, s2) ? "Yes" : "No") << endl;
    return 0;
}