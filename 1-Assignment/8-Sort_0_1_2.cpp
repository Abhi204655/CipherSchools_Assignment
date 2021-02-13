#include <bits/stdc++.h>
using namespace std;

void sort012(vector<int> &ar)
{
    int n = ar.size();
    int low, mid, high;
    low = mid = 0;
    high = n - 1;

    while (mid <= high)
    {
        if (ar[mid] == 0)
        {
            swap(ar[mid], ar[low]);
            low++;
            mid++;
        }
        else if (ar[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(ar[mid], ar[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> ar = {0, 2, 1, 2, 0};
    sort012(ar);

    for (auto &x : ar)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}