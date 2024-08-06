#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll pow1(ll a, ll b)
{
    ll res(1);
    while (b)
    {
        if(b % 2 == 1)
            res *= a;
        b /= 2;
        a *= a;
    }
    return res;
}

ll pow2(ll a, ll b)
{   
    if(b == 0) return 1;
    ll x = pow2(a,b/2);
    if(b % 2 == 1)
        return x * x * a;
    return x * x;
}

ll pow3(ll a, ll b)
{
    if(b == 1) return a;
    if(b % 2 == 1)
        return pow(a, b / 2) * pow(a, b / 2) * a;
    return pow(a, b / 2) * pow(a, b / 2);
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int a, b; cin >> a >> b;
        cout << pow3(a,b) << endl;
    }
    return 0;
}