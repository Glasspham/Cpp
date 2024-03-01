#include<bits/stdc++.h>
using namespace std;

int n, k, a[16], ok;
void ktao()
{
    for (int i = 1; i < n; i++)
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

bool cmp()
{
    int cnt(0), dem(0);
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == 0) cnt ++;
        else cnt = 0;
        if(cnt > k) return false;
        if(cnt == k) dem++;
    }
    return dem == 1;
}

int main()
{
    cin >> n >> k;
    #if 0
    int res = 0;
    ktao();
    ok = 1;
    while (ok)
    {
        if(cmp())
            res++;
        sinh();
    }
    cout << res << endl;

    ktao();
    ok = 1;
    while (ok)
    {
        if(cmp())
        {
            for(int i =  1; i <= n; i++)    
            {
                if(a[i] == 0) 
                    cout << "A";
                else
                    cout << "B";
            }
            cout << endl;
        }
        sinh();
    }
    #endif

    #if 1
    vector<vector<int>> v;
    ktao();
    ok = 1;
    while (ok)
    {
        if(cmp())
        {
            vector<int> tmp(a + 1, a + n + 1);
            v.push_back(tmp);
        }
        sinh();
    }
    cout << v.size() << endl;
    for(vector<int> it : v)
    {
        for(int x : it)
        {
            if(x == 0) cout << "A";
            else cout << "B";
        }
        cout << endl;
    }
    #endif
    return 0;
}