#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    int cnt(0);
    for(int i = 1; i <= sqrt(n); i ++)
    {
        if(n % i == 0)
        {
            if(i != n / i) // Giải quyết vấn đề khi nhập vào là 1 số chính phương
                cnt += 2;
            else    
                cnt++;
        }
    }
    return cnt;
}

int count2(int n)
{
    int res = 1;
    for(int i = 0; i <= sqrt(n); i++)
    {
        int cnt(0);
        while (n % i == 0)
        {
            ++cnt;
            n /= i;
        }
        res *= (cnt + 1);
    }
    if(n != 1)
        res *= 2;
    return res;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        cout << count(n) << endl;
    }
}