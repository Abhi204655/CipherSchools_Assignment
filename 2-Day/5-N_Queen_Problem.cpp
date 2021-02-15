#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> &mat, int i, int k)
{
    for (int row = 0; row < i; row++)
    {
        if (mat[row][k] == 1)
        {
            return false;
        }
    }
    int x = i;
    int y = k;

    while (x >= 0 && y >= 0)
    {
        if (mat[x][k] == 1)
        {
            return false;
        }
        x--;
        y--;
    }

    x = i;
    y = k;

    while (x >= 0 && y < mat.size())
    {
        if (mat[x][k] == 1)
        {
            return false;
        }
        x--;
        y++;
    }
    return true;
}

bool placeQueen(vector<vector<int>> &mat, int i)
{

    if (i == mat.size())
    {
        for (int row = 0; row < mat.size(); row++)
        {
            for (int col = 0; col < mat[0].size(); col++)
            {
                cout << mat[row][col] << " ";
            }
            cout << endl;
        }
        return true;
    }

    for (int k = 0; k < mat[0].size(); k++)
    {
        if (isSafe(mat, i, k))
        {
            mat[i][k] = 1;
            bool placed = placeQueen(mat, i + 1);
            if (placed)
            {
                return true;
            }
            mat[i][k] = 0;
        }
    }
    return false;
}

int main()
{
    int n = 6;
    vector<vector<int>> mat(n, vector<int>(n, 0));
    placeQueen(mat, 0);
    return 0;
}