#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string reverseStr = str;
    reverse(reverseStr.begin(),reverseStr.end());
    string str2;
    cin >> str2;
    for(int i = 0;i<str.length();i++)
    {
        if(reverseStr[i] != str2[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}