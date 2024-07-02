#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int size;
        cin >> size;
        int rounds;
        cin >> rounds;
        string str;
        cin >> str;
        vector<int>v(7,0);
        for(int i = 0;i<size;i++)
        {
            int index = str[i] - 'A';
            // cout << index << " ";
            v[index]++;
        }
        // 1=2
        // 2=2
        // 3=3
        // 4=2
        // 5=0
        // 6=1
        int count = 0;
        for(int i = 0;i<v.size();i++)
        {
            if(v[i] < rounds)
            {
                // cout << "index" << i+1 << endl;
                count += (abs(v[i]-rounds));
            }
        }
        cout << endl;
        cout << count << endl;
    }
  return 0;
}