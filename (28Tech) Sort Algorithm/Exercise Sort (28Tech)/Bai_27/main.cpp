#include<bits/stdc++.h>
using namespace std;
#if 0 // Using sort()
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int tmp[n];
        for(int i = 0; i < n; i++)
            tmp[i] = a[i];
        sort(tmp, tmp + n);
        int l, r;
        for(int i = 0; i < n; i++)
        {
            if(a[i] != tmp[i])
            {
                l = i;
                break;
            }
        }
        for(int i = n - 1; i > 0; i--)
        {
            if(a[i] != tmp[i])
            {
                r = i;
                break;
            }
        }
        cout << l + 1<< ' ' << r + 1<< endl;
    }
    return 0;
}
#endif

#if 1 // Elemet_max&min
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int l, r;
        for (int i = 0; i < n - 1; i++)
            if(a[i] > a[i + 1])
            {
                l = i;
                break;
            }
        for (int i = n - 1; i > 0; i--)
            if(a[i] < a[i - 1])
            {
                r = i;
                break;
            }
        int value_min = *min_element(a + l, a + r + 1);
        int value_max = *max_element(a + l, a + r + 1);
        for(int i = 0; i < l; i++)
        {
            if(a[i] > value_min)
            {
                l = i;
                break;
            }
        }
        for(int i = n - 1; i > r; i--)
        {
            if(a[i] < value_max)
            {
                r = i;
                break;
            }
        }
        cout << l + 1<< ' ' << r + 1<< endl;
    }
    return 0;
}
#endif