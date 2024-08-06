#include<iostream>
#include<map>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n; cin >> n;
        #if 0 // Array
        int cnt[3] = {0}; // Phải khai báo 0 trước nếu không sẽ sai
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            cnt[x]++;
        }
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < cnt[i]; j++)
                cout << i << " ";
        #endif

        #if 0 // Map
        map<int,int> a;
        while(n--)
        {
            int x; cin >> x;
            a[x]++;
        }
        for(auto it : a)
            for(int i = 0; i < it.second; i++)
                cout << it.first << ' ';
        #endif
    }
}