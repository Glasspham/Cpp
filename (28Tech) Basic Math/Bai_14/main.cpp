#include<bits/stdc++.h>
#define ll long long
using namespace std;

int x,y,d;
void Extended(int a, int b)
{
    if(b == 0)
    {
        x = 1;
        y = 0;
        d = a;
    }
    else
    {
        Extended(b, a % b);
        int tmp = x;
        x = y;
        y = tmp - a / b * y;
    }
}

void Inverse(int a, int m)
{
    Extended(a,m);
    if(d != 1)
        cout << "Khong ton tai! \n";
    else
        cout << (x % m + m) % m << endl;
}

ll PowMod(ll a, ll b, ll m)
{
    ll res = 1;
    a %= m;
    while (b)
    {
        if(b % 2 == 1)
        {
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return res;
}

void Inverse2(int a, int m)
{
    cout << PowMod(a, m - 2, m) << endl;
}

int main()
{
    int a, m; cin >> a >> m;
    Inverse(a,m);
    Inverse2(a,m);
}