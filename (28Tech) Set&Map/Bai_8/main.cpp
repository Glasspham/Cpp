#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    cin.ignore();
    while (t--)
    {
        string s; getline(cin,s);
        stringstream ss(s);
        map<string,int> a;
        string word;
        while (ss >> word)
            a[word]++;
        string res; int fre(0);
        for(auto i : a)
            if(i.second > fre)
            {
                fre = i.second;
                res = i.first;
            }
        cout << res;
    }
    
    return 0;
}