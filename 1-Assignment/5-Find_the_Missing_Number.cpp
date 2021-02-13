#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int> &array, int n)
{
    // Your code goes here
    int res = 0;
    for (int i = 0; i < n - 1; i++)
    {
        res = res ^ (i + 1) ^ array[i];
    }
    res ^= n;
    return res;
}

int main()
{
    vector<int> ar = {1, 2, 3, 5};
    int n = 5;
    int res = MissingNumber(ar, n);
    cout << res << endl;
    return 0;
}