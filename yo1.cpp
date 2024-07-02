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
        int faviouriteIndex;
        cin >> faviouriteIndex;
        int k;
        cin >> k;
        vector<int>v;
        for(int i = 0;i<size;i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int value = v[faviouriteIndex-1];
        // cout << "value " << value << endl;
        cout << endl << endl;
        sort(v.begin(),v.end(),greater<int>());
        
        int count = 0;
        for(int i = k;i<v.size();i++)
        {
            // cout << v[i] << " ";
            if(v[i] == value)
            {
                count++;
            }
        }
        cout << "count" << count << endl;
        // 4 3 3 3 2
        if(count == 0)
        {
            cout << "YES" << endl;
        }
        else if(count)
        {
            cout << "MAYBE" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // 1=2
        // 2=2
        // 3=3
        // 4=2
        // 5=0
        // 6=1
        
    }
  return 0;
}