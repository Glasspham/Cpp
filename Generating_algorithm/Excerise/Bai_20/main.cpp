#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, k, a[16], ok;
void ktao()
{
    for(int i = 1; i <= n; i++)
        a[i] = 0;
}

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if(i == 0) ok = 0;
    else a[i] = 1;
}

int main()
{
    cin >> n;
    int w[n + 1];
    for(int i = 1; i <= n; i++)
        cin >> w[i];
    ok = 1;
    ktao();
    ll ans = 1e12;
    while (ok)
    {
        ll sum1 = 0, sum2 = 0;
        for(int i = 1; i <= n; i++)
        {
            if(a[i] == 0) sum1 += w[i];
            else sum2 += w[i];
        }
        ans = min(ans, abs(sum1 - sum2));
        sinh();
    }
    cout << ans << endl;
}