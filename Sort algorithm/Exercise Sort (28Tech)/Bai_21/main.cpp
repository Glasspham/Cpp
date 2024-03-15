#include<bits/stdc++.h>
using namespace std;

int a[1000001];

int first_pos(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == x)
        { 
            res = mid;
            r = mid - 1;
        }
        else if (a[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return res;
}

int last_pos(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == x)
        {
            res = mid;
            l = mid + 1;
        }
        else if(a[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return res;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        int cnt = 0;
        for(int i = 0; i < n; i++)
            cin >> a[i];

        #if 0 // Using 2 loop for
        for(int i = 0; i < n - 1; i++)
            for(int j = i + 1; j < n; j++)
                if(a[i] + a[j] == k)
                    cnt ++;
        cout << cnt << endl; 
        #endif

        #if 0 // Using map
        map<int,int> freq;
        for(int i = 0; i < n; i++)
            freq[a[i]]++;
        for(int i = 0; i < n; i++)
        {
            cnt += freq[k - a[i]];
            if(a[i] * 2 == k)
                cnt--;
        }
        cout << cnt / 2 << endl;
        #endif 

        #if 0 // Using Binary Search
        sort(a, a + n);
        for(int i = 0; i < n - 1; i++)
        {
            int l = first_pos(a, i + 1, n - 1, k - a[i]);
            int r = last_pos(a, i + 1, n - 1, k - a[i]);
            if(l != -1)
                cnt += r - l + 1;
        }
        cout << cnt << endl;
        #endif
    }
    return 0;
}