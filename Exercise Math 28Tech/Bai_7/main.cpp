#include<bits/stdc++.h>
using namespace std;

long long GCD(int a, int b)
{
    if(b == 0)
        return a;
    return GCD(b,a % b);
}

int main()
{
    int a, b; cin >> a >> b;
    if(GCD(a,b) == 1)
        cout << "YES \n";
    else
        cout << "NO \n";
}