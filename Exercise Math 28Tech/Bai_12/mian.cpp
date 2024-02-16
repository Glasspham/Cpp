#include<bits/stdc++.h>
using namespace std;

// Áp dụng cho những số cần kiểm tra là nhỏ chưa vượt qua long long
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return(s * s == x);
}

bool isFibonacci1(int &n)
{
    if(isPerfectSquare(5 * n * n - 4 ) || isPerfectSquare(5 * n * n + 4 ))
        return true;
    return false;
}

int isFibonacci2(long long &n)
{
    if(n == 1 || n == 0) return 1;
    long long f1 = 0, f2 = 1;
    for(int i = 2; i < 93; i++)
    {
        long long fn = f1 + f2;
        if(fn == n)
            return 1;
        f1 = f2;
        f2 = fn;
    }
    return 0;
}

// Tạo trước 1 mảng 100 phần tử
long long f[100];
int sieve()
{
    f[0] = 0; f[1] = 1;
    for(int i = 2; i <= 93; i++)
        f[i] = f[i - 1] + f[i - 2];
}


int main()
{
    sieve();
    
    int t; cin >> t;
    while (t--)
    {
        long long n; cin >> n;
        if(isFibonacci2(n))
            cout << "YES \n";
        else cout << "NO \n";

        bool find = true;
        for(long long x : f)
        {
            if(x == n)
            {
                cout << "YES \n";
                find = false;
            }
        }
        if(find) cout << "NO \n";
    }
}