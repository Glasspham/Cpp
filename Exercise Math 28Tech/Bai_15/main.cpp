#include<bits/stdc++.h>
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
#if 0 // Bài 1
int ToHop(int n, int k)
{
    if(k == 0 || k == n)
        return 1;
    return ToHop(n - 1, k - 1) + ToHop(n - 1, k);
}

// Tạo sẵn 1 sàn chứa 10e6 trường hợp cho bài toán nhiều test case 1 lúc
int C[1000][1000];
void seive()
{
    for (int i = 0; i < 1000; i++) // n
    {
        for (int j = 0; j < 1000; j++) // k
        {
            if(j == 0 || j == i)
                C[i][j] = 1;
            else
            {
                C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
                C[i][j] %= MOD;
            }
        }
    }
}

int main()
{
    int t; cin >> t;
    seive();
    while (t--)
    {
        int n,k; cin >> n >> k;
        while (n < k)
        {
            cout << "Nhap sai n >= k, nhap lai: ";
            cin >> n >> k;
        }
        cout << ToHop(n,k) % MOD << endl;
        cout << C[n][k] << endl;
    }
}
#endif

#if 1 // Bài 2
int x,y,d;
void Extended(ll a, ll b)
{
    if (b == 0) 
    {
        x = 1;
        y = 0;
        d = a;
        return;
    }
    Extended(b, a % b);
    ll x1 = y;
    ll y1 = x - (a / b) * y;
    x = x1;
    y = y1;
}

int Inverse(int a, int m)
{
    Extended(a,m);
    return (x % m + m) % m;
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

ll Inverse2(int a, int m)
{
    return PowMod(a, m - 2, m);
}

// Tạo 1 sàng giai thừa đã MOD bớt rồi
ll f[1000001];

int main()
{
    int n,k; cin >> n >> k;
    f[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        f[i] = i * f[i - 1];
        f[i] %= MOD;
    }
    cout << f[n] % MOD * Inverse(f[k] * f[n - k] % MOD, MOD) % MOD << endl;
    cout << f[n] % MOD * Inverse2(f[k] * f[n - k] % MOD, MOD) % MOD << endl;
}
#endif