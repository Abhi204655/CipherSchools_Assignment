#include <bits/stdc++.h>
using namespace std;

vector<int> findKey(vector<vector<int>> &mat, int key)
{
    int n = mat.size();
    int m = mat[0].size();
    int i = 0;
    int j = m - 1;

    while (i < n && j >= 0)
    {
        if (mat[i][j] == key)
        {
            return {i, j};
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
    return {};
}

int main()
{
    vector<vector<int>> mat{{10, 20, 30, 40},
                            {25, 27, 31, 46},
                            {45, 47, 51, 55},
                            {50, 53, 54, 56}};

    int key;
    cin >> key;

    vector<int> res = findKey(mat, key);

    if (res.size() > 0)
    {
        cout << "The element is present in the matrix : (" << res[0] + 1 << "," << res[1] + 1 << ")" << endl;
    }
    else
    {
        cout << "The element is not present in the matrix." << endl;
    }

    return 0;
}