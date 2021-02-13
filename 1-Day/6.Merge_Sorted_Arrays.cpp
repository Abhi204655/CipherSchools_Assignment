#include <bits/stdc++.h>
using namespace std;
void mergeArray(vector<int> &ar1, vector<int> &ar2, int n, int m)
{
    int size = n + m - 1;
    n = n - 1;
    m = m - 1;
    cout << "size is : " << size << endl;
    while (size > 0 && n >= 0 && m >= 0)
    {
        if (ar1[n] > ar2[m])
        {
            ar1[size] = ar1[n];
            n--;
        }
        else
        {
            ar1[size] = ar2[m];
            m--;
        }
        size--;
    }
}
int main()
{
    vector<int> ar1 = {1, 3, 5, 0, 0, 0, 0};
    vector<int> ar2 = {2, 4, 6, 8};
    int n = 3;
    int m = 4;
    mergeArray(ar1, ar2, n, m);
    for (auto x : ar1)
        cout << x << " ";
    cout << endl;
    return 0;
}