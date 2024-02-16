#include<bits/stdc++.h>
using namespace std;

void InFibonacci(int &n)
{
    int f[n];
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i < n; i++)
        f[i] = f[i - 1] + f[i - 2];
    for(int x : f)
        cout << x << ' ';
}

void InFibonacci1(int &n)
{
    cout << "0 1 ";
    long long f1 = 0, f2 = 1;
    for(int i = 2; i < n; i++)
    {
        long long fn = f1 + f2;
        cout << fn << ' ';
        f1 = f2;
        f2 = fn;
    }
}

int Fibonacci(int n)
{
    if(n <= 1) return n;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
    int n; cin >> n;
    InFibonacci1(n);
    cout << endl;
    for(int i = 0; i < n; i++)
        cout << Fibonacci(i) << ' ';
}