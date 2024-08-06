#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n, greater<int>());
    int sum(0);
    for(int i = 0; i < n; i++)
    {
        if(a[i] > i)
            sum += (a[i] - i);
        else break;
    }
    cout << sum << endl;
}