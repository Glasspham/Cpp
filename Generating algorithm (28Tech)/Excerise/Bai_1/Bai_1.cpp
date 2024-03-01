#include<bits/stdc++.h>
using namespace std;
#define Max 100

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string str; cin >> str;
        int n = str.length() - 1;
        while (n >= 0 && str[n] == '1')
        {
            str[n] = '0';
            n--;
        }
        if(n != -1)
            str[n] = '1';
        cout << str << endl;
    }
    
}