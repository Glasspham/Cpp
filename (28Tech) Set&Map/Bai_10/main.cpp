#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    cin.ignore();
    map<string,int> a;
    while (n--)
    {
        string s; getline(cin,s);
        
        #if 0 // Cách viết 1
        a[s]++;
        cout << s;
        if(a[s] >= 2)
            cout << a[s] - 1;
        cout << endl;
        #endif

        #if 0 // Cách viết 2
        if(a.find(s) == a.end())
            cout << s << endl;
        else
            cout << s << a[s] << endl;
        a[s]++;
        #endif
                
    }
    return 0;
}