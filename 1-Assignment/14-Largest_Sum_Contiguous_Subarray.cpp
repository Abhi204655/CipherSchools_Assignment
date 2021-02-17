#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int> &ar)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
    int size = ar.size();
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + ar[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main()
{
    vector<int> ar = {-2, -3, 4, -1, -2, 1, 5, -3};
    int res = maxSubArraySum(ar);
    cout << res;
    return 0;
}