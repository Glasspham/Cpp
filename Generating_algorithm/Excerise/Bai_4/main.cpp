#include<bits/stdc++.h>
using namespace std;

int n, a[11], ok;
#if 0
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
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        ktao();
        ok = 1;
        while (ok)
        {
            for(int i = 1; i <= n; i++)
            {
                if(a[i] == 1)
                    cout << 'B';
                else
                    cout << 'A';
            }  
            cout << ' ';
            sinh(); 
        } 
        cout << endl;
    }
    return 0;
}
#endif

#if 1 
void ktao()
{
    for(int i = 1; i <= n; i++)
        a[i] = 'A';
}

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 'B')
    {
        a[i] = 'A';
        i--;
    }
    if(i == 0) ok = 0;
    else a[i] = 'B';
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        ktao();
        ok = 1;
        while (ok)
        {
            for(int i = 1; i <= n; i++)
                cout << char(a[i]);
            cout << ' ';
            sinh(); 
        } 
        cout << endl;
    }
    return 0;
}
#endif