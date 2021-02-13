#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

void sort012(vector<int> &ar)
{
    int n = ar.size();
    int low = 0, mid = 0, high = n - 1;

    while (mid < high)
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
    vector<int> ar = {0, 2, 1, 1, 2, 1, 0, 0, 2, 1, 0, 1, 2, 0, 0, 1, 2};
    sort012(ar);

    for (auto x : ar)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}