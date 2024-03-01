#include<bits/stdc++.h>
using namespace std;

int n, x[1001];
void next()
{
    int i = n - 1;
    while (i >= 1 && x[i] > x[i + 1])
        i--;
    if(i == 0)
        for(int j = 1; j <= n; j++)
            cout << j << ' ';
    else
    {
        int j = n;
        while (x[i] > x[j])
            j--;
        swap(x[i], x[j]);
        int l = i + 1, r = n;
        while (l < r)
        {
            swap(x[l], x[r]);
            l++, r--;
        }   
        // reverse(x + i + 1, x + n + 1);
        for(int m = 1; m <= n; m++)
            cout << x[m] << ' ';    
    }
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        for(int j = 1; j <= n; j++)
            cin >> x[j];
        next();
        cout << endl;
    }
    return 0;
}