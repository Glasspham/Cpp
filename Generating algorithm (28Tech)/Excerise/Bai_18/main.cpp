#include<bits/stdc++.h>
using namespace std;

int n, k, a[16], ok;
void ktao()
{
    for(int i = 1; i <= n; i++)
        a[i] = 'A';
}

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 'H')
    {
        a[i] = 'A';
        i--;
    }
    if(i == 0) ok = 0;
    else a[i] = 'H';
}

bool check()
{
    if(a[1] == 'A' || a[n] == 'H')
        return false;
    for(int i = 1; i <= n - 1; i++)
        if(a[i] == 'H' && 'H' == a[i + 1])
            return false;
    return true;
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
                   cout << (char)a[i];
                cout << endl;
            }
            sinh();
        }
    }
}