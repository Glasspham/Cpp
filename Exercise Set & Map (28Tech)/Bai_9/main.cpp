#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    cin.ignore();
    #if 0 // Map
    while (t--)
    {
        string s; getline(cin,s);
        stringstream ss(s);
        map<string,int> a;
        string word;
        while (ss >> word)
        {
            a[word]++;
            if(a[word] == 2)
                break;
        }
        cout << word << endl;
    }
    #endif

    #if 1 // Set
    while (t--)
    {
        string s; getline(cin,s);
        stringstream ss(s);
        set<string> se;
        vector<string> a;
        string word;
        while (ss >> word)
            a.push_back(word);
        for(string i : a)
        {
            if(se.find(i) != se.end())
            {
                cout << i << endl; 
                break;
            }
            se.insert(i);
        }
    }
    #endif

    return 0;
}