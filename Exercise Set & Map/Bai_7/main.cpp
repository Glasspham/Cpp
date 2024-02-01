#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    cin.ignore();
    #if 0 // Set
    while (t--)
    {
        string s; getline(cin,s);
        stringstream ss(s);
        set<string> a;
        string word;
        while (ss >> word)
            a.insert(word);
        cout << a.size() << endl;
    }
    #endif

    #if 0 // Map
    while (t--)
    {
        string s; getline(cin,s);
        stringstream ss(s);
        map<string,bool> a;
        string word;
        while (ss >> word)
            a.insert({word,true});
        cout << a.size() << endl;
    }
    #endif

    return 0;
}