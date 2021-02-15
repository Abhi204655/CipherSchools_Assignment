#include <bits/stdc++.h>
using namespace std;

#define isValid(i, j, n, m) (i >= 0 && j >= 0 && i < n && j < m)

void generate(vector<vector<int>> &mat, int i, int j, stack<int> path)
{
    int n = mat.size();
    int m = mat[0].size();
    if (i == n - 1 && j == m - 1)
    {
        // print the path
        path.push(mat[i][j]);
        string res = "";
        while (!path.empty())
        {
            int top = path.top();
            // cout << top << " ";
            res += to_string(top) + " ";
            path.pop();
        }
        // cout << endl;
        reverse(res.begin(), res.end());
        cout << res << endl;
        return;
    }
    path.push(mat[i][j]);

    if (isValid(i, j + 1, n, m))
    {
        generate(mat, i, j + 1, path);
    }
    if (isValid(i + 1, j, n, m))
    {
        generate(mat, i + 1, j, path);
    }

    path.pop();
}

int main()
{
    vector<vector<int>> mat{
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    stack<int> st;

    generate(mat, 0, 0, st);
    return 0;
}