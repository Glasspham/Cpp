#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n];
    for(int  &x : a) cin >> x;
    sort(a, a + n);
    int value_min = INT_MAX;
    for(int i = 0; i < n - 1; i++)
        value_min = min({a[i + 1] - a[i], value_min});
    cout << value_min << endl;
}