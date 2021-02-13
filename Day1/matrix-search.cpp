#include <bits/stdc++.h>
using namespace std;

bool findKey(vector<vector<int>> &mat, int key)
{
    int n = mat.size();
    int m = mat[0].size();
    int i = 0;
    int j = m - 1;

    while (i < n && j >= 0)
    {
        if (mat[i][j] == key)
        {
            return true;
        }
        if (mat[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> mat{{10, 20, 30, 40},
                            {25, 27, 31, 46},
                            {45, 47, 51, 55},
                            {50, 53, 54, 56}};

    int key;
    cin >> key;

    if (findKey(mat, key))
    {
        cout << "The element is present in the matrix.";
    }
    else
    {
        cout << "The element is not present in the matrix.";
    }

    return 0;
}