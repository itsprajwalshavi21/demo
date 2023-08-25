#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    if(n == 4)
    {
        return 0;
    }
    int count = 0;
    while(n != 4)
    {
        if(n % 2 != 0)
        {
            n = (n * 3) + 1;
            count++;
        }
        else
        {
            n = n / 2;
            count++;
        }
        if(n == 4)
        {
            return count;
        }
        cout << n << " " << count << endl;
    }
    return count;
}





int main()
{
    // int a = 20, b = 10, c = 23, d;
    // // int result = 2;
    // // result += (++a + 3 == b++) ? ++b : a++;
    // c += a > b ? a : b;
    cout << fun(5) << endl;
    return 0;
}

int m = grid.size();
    if (m == 0)
        return 0;
    int n = grid[0].size();
    if (n == 0)
        return 0;
    vector<vector<int>> vis(m, vector<int>(n, 0));
    int count = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!vis[i][j] && grid[i][j] == 'O') {
                count++;
                // bfs(grid, vis, i, j);
                dfs(grid,vis,i,j);
            }
        }
    }
    return count;