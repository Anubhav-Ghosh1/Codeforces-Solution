#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    string str;
    cin >> str;

    int count = 0;
    for(int i = 1;i<size;i++)
    {
        if(str[i] == str[i-1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}