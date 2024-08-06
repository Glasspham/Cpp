#include<bits/stdc++.h>
using namespace std;
int n, a[11], tmp[11], ok;
void ktao()
{
    for(int i = 1; i <= n; i++)
    {
        a[i] = 0;
        tmp[i] = 0;
    }
}

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        --i;
    }
    if(i == 0)
        ok = 0;
    else a[i] = 1;
}

void gray()
{
    tmp[1] = a[1];
    for(int i = 2; i <= n; i++)
    {
        if(a[i] == a[i - 1])
            tmp[i] = 0;
        else tmp[i] = 1;
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
            for(int i = 1; i <= n; i++)
                cout << tmp[i];
            cout << ' ';    
            sinh();
            gray();
        }
        cout << endl;
    }
    return 0;
}