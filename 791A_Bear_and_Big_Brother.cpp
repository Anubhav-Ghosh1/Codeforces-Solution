#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    int count = 0;
    while (a <= b)
    {
        count++;
        a *= 3;
        b *= 2;
    }
    cout << count << endl;
    return 0;
}