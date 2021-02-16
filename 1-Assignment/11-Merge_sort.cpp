#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &ar, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> L(n1, 0);
    vector<int> R(n2, 0);

    for (int i = 0; i < n1; i++)
    {
        L[i] = ar[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = ar[m + 1 + i];
    }
    
}

void mergeSort(vector<int> &ar, int l, int r)
{
    if (l >= r)
        return;
    int mid = l + (r - l) / 2;
    mergeSort(ar, 0, mid);
    mergeSort(ar, mid + 1, r);
    merge(ar, l, mid, r);
}

int main()
{
    vector<int> ar = {12, 11, 13, 5, 6, 7};

    int l = 0, r = ar.size();

    mergeSort(ar, l, r);

    return 0;
}