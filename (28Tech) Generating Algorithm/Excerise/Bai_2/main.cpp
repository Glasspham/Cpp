#include<bits/stdc++.h>
using namespace std;

int n, k, x[1005];
void next()
{
    int i = k;
    while (i >= 1 && x[i] == n - k + i)
        i--;
    if(i == 0)
    {
        for (int j = 1; j <= k; j++)
            cout << j << ' ';
    }
    else
    {
        x[i]++;
        for (int j = i + 1; j <= k; j++) 
            x[j] = x[j - 1] + 1;
        for (int j = 1; j <= k; j++)
            cout << x[j] << ' ';
    }       
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for(int j = 1; j <= k; j++) 
            cin >> x[j];
        next();
        cout << endl;
    }
    return 0;
}