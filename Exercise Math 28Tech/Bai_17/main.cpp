#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n;

    // S(n) = 1 + 2 +...+ n = n(n + 1)/2
    ll s = 1ll * (n * n + n) / 2;
    cout << s << endl;

    // S(n) = 1 + 2^2 + 3^2 +...+ n^2 = n(n+1)(2n+1)/6
    ll s1 = 1ll * n * (n + 1) * (2 * n + 1) / 6;
    cout << s1 << endl;

    // S(n) = 1 / (1 * 2) + 1 / (2 * 3) +...+ 1 / (n * (1 + n)) = 1 - (1 / (n + 1))
    double s2 = 1 - 1.0 / (n + 1);
    cout << fixed << setprecision(2) << s2 << endl;

    // S(n) = 2 + 4 + 6 +...+ 2n = n(n + 1)
    ll s3 = 1ll * (n * n + n);
    cout << s3 << endl;

    /* 
        S(n) = -1 + 2 - 3 + 4 - 5 + 6 +...+ ((-1)^n)n
        Chẵn S(n) = n / 2
        Lẻ S(n) = ((n - 1) / 2) - n
    */
    if(n % 2 == 0)
        cout << n / 2 << endl;
    else
        cout << (- n - 1) / 2 << endl;

    int a,b; cin >> a >> b;
    // Tìm số lớn nhất chia hết cho b và <= a
    cout << (int) a / b * b << endl;

    // Tìm số nhỏ chia hết cho b và >= a
    // Cách 1 
        if(a / b == 0)
            cout << a << endl;
        else
            cout << ((int) a / b + 1) * b << endl;   
    // Cách 2
    cout << (int)(a + b - 1) / b * b << endl;
}