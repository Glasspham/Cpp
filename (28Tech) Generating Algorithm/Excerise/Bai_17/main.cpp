#include<bits/stdc++.h>
#define ll long long
using namespace std;

#if 0 // Cách 1
int main()
{
    int a[3] = {9,  90, 99};
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        for(int i = 0; i < 3; i++)
        {
            if(a[i] % n == 0)
            {
                if(a[i] == 9)
                { 
                    cout << "09" << endl;
                    break;
                }
                else
                {
                    cout << a[i] << endl;
                    break;
                }
            }
        }
    }
}
#endif

#if 1 // Cách 2
ll a[505];
vector<ll> res;
int ok;
void sinh(string &s)
{   
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '9')
    {
        s[i] = '0';
        --i;
    }
    if(i == -1)
        ok = 0;
    else
        s[i] = '9';  
}

int main()
{
    string s(13, '0');
    ok = 1;
    sinh(s);
    while (ok)
    {
        res.push_back(stoll(s));
        sinh(s);
    }
    for(int i = 1; i <= 500; i++)
        for(ll x : res)
            if(a[i] == 0 && x % i == 0)
                a[i] = x;
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}
#endif