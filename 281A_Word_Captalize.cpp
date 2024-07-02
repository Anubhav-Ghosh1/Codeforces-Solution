#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    if (str.length() >= 1)
    {
        char ch = toupper(str[0]);
        str[0] = ch;
    }
    cout << str;
    return 0;
}