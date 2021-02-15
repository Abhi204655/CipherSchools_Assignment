#include <bits/stdc++.h>
using namespace std;

string getValue(char c)
{
    switch (c)
    {
    case '1':
        return "abc";
        break;
    case '2':
        return "def";
        break;
    case '3':
        return "ghi";
        break;
    case '4':
        return "jkl";
        break;
    case '5':
        return "mno";
        break;
    default:
        return "";
        break;
    }
}

vector<string> getCombinations(string input)
{

    if (input.length() == 0)
    {
        return {""};
    }

    string curValue = getValue(input[0]);
    vector<string> combinations = getCombinations(input.substr(1));

    vector<string> res;

    for (auto x : curValue)
    {
        for (auto y : combinations)
        {
            string output = x + y;
            res.emplace_back(output);
        }
    }
    return res;
}

int main()
{
    string input = "123";
    vector<string> res = getCombinations(input);

    for (auto x : res)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}