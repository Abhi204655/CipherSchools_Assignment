#include <bits/stdc++.h>
using namespace std;

int getFirstPosition(vector<int> &ar, int key, int l, int r)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (ar[mid] == key && (mid == 0 || ar[mid - 1] != key))
        {
            return mid;
        }
        else if (ar[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}

int getLastPosition(vector<int> &ar, int key, int l, int r)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (ar[mid] == key && (mid == r || ar[mid + 1] != key))
        {
            return mid;
        }
        else if (ar[mid] > key)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> ar(n, 0);
        for (auto &x : ar)
            cin >> x;
        int firstPosition = getFirstPosition(ar, x, 0, n - 1);
        int lastPosition = getLastPosition(ar, x, 0, n - 1);
        if (firstPosition == -1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << firstPosition << " " << lastPosition << endl;
        }
    }
}