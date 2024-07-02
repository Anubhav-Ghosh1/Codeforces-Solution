#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = ++n;
    bool flag = true;
    while (flag)
    {
        int value = temp;
        unordered_map<int, int> map;
        while (value != 0)
        {
            map[value % 10]++;
            value /= 10;
        }
        bool isAnswer = true;
        for (auto i : map)
        {
            if (i.second >= 2)
            {
                isAnswer = false;
                break;
            }
        }
        if (isAnswer)
        {
            cout << temp << endl;
            flag = false;

            break;
        }
        temp++;
    }
    return 0;
}