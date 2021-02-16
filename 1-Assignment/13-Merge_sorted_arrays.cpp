#include <bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3)
{
    int i = 0, j = 0, k = 0;
    int n1 = arr1.size();
    int n2 = arr1.size();

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    while (i < n1)
        arr3[k++] = arr1[i++];

    while (j < n2)
        arr3[k++] = arr2[j++];
}

int main()
{
    vector<int> arr1 = {1, 3, 5, 7};
    int n1 = arr1.size();
    vector<int> arr2 = {2, 4, 6, 8};
    int n2 = arr2.size();

    vector<int> arr3(n1 + n2);
    mergeArrays(arr1, arr2, arr3);

    for (int i = 0; i < n1 + n2; i++)
        cout << arr3[i] << " ";

    return 0;
}
