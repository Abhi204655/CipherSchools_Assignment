#include <bits/stdc++.h>
using namespace std;

void getPeakElements(vector<int> &ar, vector<int> &res, int start, int end)
{
    if (start >= end)
        return;

    int mid = start + (start - end) / 2;
    if(mid == 0){
        
    }
}

vector<int> getPeakElementsNaive(vector<int> &ar)
{
    vector<int> res;
    int n = ar.size();
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (ar[i] > ar[i + 1])
                res.push_back(ar[i]);
        }
        if (i == n - 1)
        {
            if (ar[i] > ar[i - 1])
                res.push_back(ar[i]);
        }
        if (ar[i] > ar[i - 1] && ar[i] > ar[i + 1])
        {
            res.push_back(ar[i]);
        }
    }
    return res;
}

int main()
{
    vector<int> ar = {10, 20, 15, 2, 23, 90, 67};
    // Naive Approach
    vector<int> res = getPeakElementsNaive(ar);
    for (auto x : res)
    {
        cout << x << " ";
    }
    cout << endl;

    //efficient approach
    vector<int> res2;
    int n = ar.size();
    getPeakElements(ar, res2, 0, n - 1);

    for (auto x : res2)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}