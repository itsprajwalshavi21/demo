#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> v)
{
    int row = v.size();
    int col = v[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void fun(vector<vector<int>> v)
{
    int row = v.size();
    int col = v[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            /* code */
            v[i][j] -= (v[i][j] % 5);
        }
    }
    print(v);
}

int main()
{
    vector<vector<int>> v;
    int row;
    int col;
    int val;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        vector<int> temp;
        for (int j = 0; j < col; j++)
        {
            cin >> val;
            temp.push_back(val);
        }
        v.push_back(temp);
    }
    fun(v);
    return 0;
}