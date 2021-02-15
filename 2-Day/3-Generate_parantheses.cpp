#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    int cnt = 0;
    for (auto x : s)
    {
        if (cnt < 0)
        {
            return false;
        }
        if (x == '(')
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    return cnt == 0;
}

void generate(int left, int right, string s)
{
    if (left > right)
    {
        return;
    }

    if (left == 0 && right == 0)
    {
        cout << s << endl;
        return;
    }
    if (left > 0)
    {
        generate(left - 1, right, s + "(");
    }
    if (right > 0)
    {
        generate(left, right - 1, s + ")");
    }
}

int main()
{
    int left = 5;
    int right = 5;
    string s = "";
    generate(left, right, s);

    // if (isValid("()(())"))
    // {
    //     cout << "Is valid" << endl;
    // }
    // else
    // {
    //     cout << "Not valid" << endl;
    // }
    return 0;
}