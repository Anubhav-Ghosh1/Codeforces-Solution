#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int height;
    cin >> height;
    int answer = 0;
    int a;
    for (int i = 0; i < size; i++)
    {
        cin >> a;
        answer += a > height ? 2 : 1;
    }
    cout << answer << endl;
    return 0;
}