#include<bits/stdc++.h>
using namespace std;

int n, k, a[41], ok;
set<int> se;

void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
        i--;
    if(i == 0)
        cout << k << endl;
    else
    {
        a[i]--;
        for(int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
        int cnt = 0;
        for(int j = 1; j <= k; j++)
            if(se.find(a[j]) == se.end())
                cnt++;
        cout << cnt << endl;
    } 
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for(int i = 1; i <= k; i++)
        {
            cin >> a[i];
            se.insert(a[i]);
        }
        sinh();
        se.clear();
    }
    return 0;
}