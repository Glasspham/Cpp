#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll GCD(ll a, ll b)
{
    if(b == 0)
        return a;
    return GCD(b,a % b);
}

ll count(ll n)
{
    int res(0);
    for(int i = 1; i < n; i ++)
        if(GCD(n,i) == 1)
            res++;
    return res;
}

ll PhimhamEuler(ll n)
{
    ll res = n;
    for(int i = 2; i * i < n; i++)
    {
        if(n % i == 0)
        {
            while (n % i == 0) n /= i;
            res -= res / i;
        }
    }
    if(n != 1)
        res -= res / n;
    return res;
}

int main()
{
    ll n; cin >> n;
    cout << PhimhamEuler(n);
}