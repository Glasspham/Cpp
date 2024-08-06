#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int c[11][11], n, k, a[11];
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> c[i][j];
    for(int i = 1; i <= n; i++) a[i] = i;
    vector<vector<int>> v;
    do
    {
        int sum = 0;
        for(int i = 1; i <= n; i++)
            sum += c[i][a[i]];
        if(sum == k)
        {
            vector<int> temp(a + 1, a + n + 1);
            v.push_back(temp);
        }
    } while (next_permutation(a + 1, a + n + 1));
    cout << v.size() << endl;
    for(vector<int> it : v)
        {
            for(int x : it)
                cout << x << ' ';
            cout << endl;
        }
}