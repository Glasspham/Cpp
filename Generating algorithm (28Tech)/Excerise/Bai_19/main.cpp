#include<bits/stdc++.h>
using namespace std;

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

bool check()
{
    int l = 1, r = n;
    while (l < r)
    {
        if(a[l] != a[r])
            return false;
        l++, r--;
    }
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        ok = 1;
        ktao();
        while (ok)
        {
            if(check())
            {
                for (int i = 1; i <= n; i++)
                   cout << a[i];
                cout << ' ';
            }
            sinh();
        }
    }
}