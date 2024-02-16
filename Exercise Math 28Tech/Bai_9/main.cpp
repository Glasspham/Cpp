#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll GCD1(ll a, ll b) // Tốn thời gian khi chạy có số lớn
{
    while (a != b)
    {
        if(a > b)
            a -= b;
        else 
            b -= a;
    }
    return a;
}

ll GCD2(ll a, ll b) // Áp dụng cho số lớn
{
    while (b != 0)
    {
        #if 0
        ll temp = b;
        b = a % b;
        a = temp;
        #endif

        #if 1
        ll temp = a % b;
        a = b;
        b = temp;
        #endif
    }
    return a;  
}

ll GCD3(ll a, ll b) // Dùng đệ quy(recursion) biểu diễn cách 2
{
    if(b == 0) return a;
    return GCD3(b, a % b);
}

ll LCM(ll a, ll b)
{
    return a * b / GCD3(a,b);
}

int main()
{
    int a,b; cin >> a >> b;
    cout << "GCD(" << a << ',' << b << ") = " << GCD3(a,b) << endl;
    cout << "LCM(" << a << ',' << b << ") = " << LCM(a,b) << endl;
}