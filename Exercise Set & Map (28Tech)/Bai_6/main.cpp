#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;

    #if 0 // Set
    while (t--)
    {
        string s; cin >> s;
        set<char> m;
        for(char i : s)
            m.insert(tolower(i));
        if(m.size() == 26) cout << "YES \n";
        else cout << "NO \n";
    }
    #endif

    #if 0 // Map
    while (t--)
    {
        string s; cin >> s;
        map<char,bool> m;
        for(char i : s)
            m.insert({tolower(i),true});
        if(m.size() == 26) cout << "YES \n";
        else cout << "NO \n";
    }
    #endif

    #if 0 // No using Map and Set
    while (t--)
    {
        string s; cin >> s;
        int a[26] = {0};
        for(char i : s)
            a[tolower(i) - 'a'] = 1;
        int count(0);
        for(int i = 0; i < 26; i++)
            count += a[i];
        if(count == 26) cout << "YES \n";
        else cout << "NO \n";
    }
    #endif
    
    return 0;
}