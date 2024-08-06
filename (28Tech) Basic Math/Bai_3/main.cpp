#include<bits/stdc++.h>
using namespace std;
#define ll long long

void pt1(ll n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        while(n % i == 0)
        {
            cout << i << ' ';
            n /= i;
        }
    }
    if(n != 1)
        cout << n << endl;
}

void pt2(ll n)
{
    for(int i = 2; i < sqrt(n); i++)
    {
        if(n % i == 0)
        {
            cout << i << ' ';
            while (n % i == 0)
                n /= i;
        }
    }
    if(n != 1)
        cout << n << endl;
}

void pt3(ll n)
{
    for(int i = 2; i < sqrt(n); i++)
    {
        if(n % i == 0)
        {
            cout << i;
            int cnt(0);
            while(n % i == 0)
            {
                cnt++;
                n /= i;
            }
            cout << '(' << cnt << ") ";
        }
    }
    if(n != 1)
        cout << n << "(1)" << endl;
}

void pt4(ll n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            cout << i;
            n /= i;
            if(n != 1)
                cout << "x";
        }
    }
    if(n != 1)
        cout << n << endl;
}

void pt5(ll n)
{
    cout << n << " = ";
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            int cnt(0);
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            cout << i << "^" << cnt;
            if(n != 1)
                cout << " * ";
        }
    }
    if(n != 1)
        cout << n << "^1";
}

int main()
{
    ll n; cin >> n;
    pt1(n); pt2(n); pt3(n); pt4(n); pt5(n);
    return 0;
}