#include <bits/stdc++.h>
using namespace std;

int findResult(vector<int> &ar, int index, int res, bool min)
{
    if (index == ar.size())
    {
        return res;
    }
    if (min)
    {
        if (ar[index] < res)
        {
            findResult(ar, index + 1, ar[index], min);
        }
        else
        {
            findResult(ar, index + 1, res, min);
        }
    }
    else
    {
        if (ar[index] > res)
        {
            findResult(ar, index + 1, ar[index], min);
        }
        else
        {
            findResult(ar, index + 1, res, min);
        }
    }
}

int main()
{
    vector<int> ar = {5, 7, -4, 8, 1, -3};

    int ans = findResult(ar, 0, INT_MAX, true);
    int ans2 = findResult(ar, 0, INT_MIN, false);
    cout << "Minimum number is : " << ans << endl;
    cout << "Maximum number is : " << ans2 << endl;
    return 0;
}