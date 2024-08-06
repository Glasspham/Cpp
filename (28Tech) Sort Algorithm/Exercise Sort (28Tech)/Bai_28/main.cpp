#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        set<char> result;

        #if 0 // Array type string
        string a[n] = " ";
        for(string &i : a) cin >> i;      
        for(string i : a)
            for(int j = 0; j < i.length(); j++)
                result.insert(i[j]);
        #endif

        #if 0 // Type string 1
        cin.ignore();
        string a; getline(cin,a);
        for(int i = 0; i < a.length(); i++)
            if(a[i] != ' ')
                result.insert(a[i]);
        #endif

        #if 1 // Type string 2
        cin.ignore();
        string s; getline(cin,s);
        for(char i : s)
            if(isdigit(i)) // Check if it is a number
                result.insert(i);
        #endif

        for(char i : result)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}