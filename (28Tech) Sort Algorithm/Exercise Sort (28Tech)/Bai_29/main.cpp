#include<bits/stdc++.h>
using namespace std;
int a[1000001];
map<int,int> mp;

int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        #if 0
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        sort(a, a + n, [](int a, int b){
            if(mp[a] != mp[b])
                return mp[a] > mp[b];
            return a < b;
        });

        for(int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << endl;
        mp.clear();
        #endif

        #if 1
        map<int,int> mp1;
        for (int i = 0; i < n; i++)
        {
            int num; cin >> num;
            mp1[num]++;
        }
        vector<pair<int,int>> vec;
        for(auto it : mp1)
            vec.push_back(it);
        sort(begin(vec), end(vec), [](pair<int,int>a, pair<int,int> b){
            if(a.second != b.second) return a.second > b.second;
            return a.first < b.first;
        });
        for(pair<int,int> it : vec)
            for(int i = 0; i < it.second; i++)
                cout << it.first << ' ';
        cout << endl;
        #endif
    }
    return 0;
}