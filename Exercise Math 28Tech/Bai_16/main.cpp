#include<bits/stdc++.h>
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;

ll fibonacci[1000001];
void sieve()
{
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (int i = 2; i <= 1000000; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        fibonacci[i] %= MOD;
    }
}

void nhan(ll a[2][2], ll b[2][2])
{
    ll res[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                res[i][j]  += a[i][k] * b[k][j] % MOD;
            }
        }
    }
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            a[i][j] = res[i][j];
}

void Pow(ll n)
{
    ll res[2][2] = {{1, 0}, {0, 1}};
    ll a[2][2] = {{1, 1}, {1, 0}};
    while (n)
    {
        if(n % 2 == 1)
            nhan(res, a);
        nhan(a, a);
        n /= 2;
    }
    cout << res[0][1] << endl;
}

int main()
{
    sieve();
    ll n; cin >> n;
    // cout << fibonacci[n] << endl;
    Pow(n);
}