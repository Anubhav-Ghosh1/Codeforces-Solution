#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int countLowerCase = 0;
    int countUpperCase = 0;
    for (int i = 0; i < str.length(); i++)
    {
        int ch = str[i];
        if (ch >= 97 && ch <= 122)
        {
            countLowerCase++;
        }
        else
        {
            countUpperCase++;
        }
    }
    if (countLowerCase < countUpperCase)
    {
        for (int i = 0; i < str.length(); i++)
        {
            char ch = toupper(str[i]);
            str[i] = ch;
        }
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            char ch = tolower(str[i]);
            str[i] = ch;
        }
    }
    cout << str << endl;
    return 0;
}