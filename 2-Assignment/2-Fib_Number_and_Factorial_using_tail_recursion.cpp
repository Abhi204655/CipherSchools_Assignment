#include <bits/stdc++.h>
using namespace std;

long factorial(int n, int res)
{
    if (n <= 1)
    {
        return res;
    }
    return factorial(n - 1, res * n);
}

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int fibTail(int n, int a = 0, int b = 1)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;

    return fibTail(n - 1, b, a + b);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n, 1) << endl;
    cout << fib(n) << endl;
    cout << fibTail(n) << endl;
    return 0;
}