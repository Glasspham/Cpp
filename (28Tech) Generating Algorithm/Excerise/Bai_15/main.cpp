#include<bits/stdc++.h>
using namespace std;

void sinh(string s)
{
    int i = s.length() - 2;
    while (i >= 0 && s[i] >= s[i + 1])
        --i;
    if(i == -1)
        cout << "BIGGEST \n";
    else
    {
        int j = s.length() - 1;
        while (s[i] >= s[j])
            --j;
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
        cout << s << endl;
    }  
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        cout << n << ' ';
        
        #if 0
        sinh(s);
        #endif

        #if 1
        if(next_permutation(s.begin(), s.end()))
            cout << s << endl;
        else
            cout << "BIGGEST \n";
        #endif
    }
        
}