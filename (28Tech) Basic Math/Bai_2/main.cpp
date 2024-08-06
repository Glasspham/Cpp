#include<bits/stdc++.h>
using namespace std;
#define ll long long

int prime[1000001];
void sieve()
{
    // Coi tất cả số từ 0 -> n là nguyên tố
    // prime[i] = 0
    // prime[i] = 1
    for(int i = 0; i <= 1000000; i++)
        prime[i] = 1;
    //Loại 0 và 1
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= 1000; i++)
    {
        // Nếu i là số nguyên tố
        if(prime[i])
        {
            // Duyệt tất cả các bội số của i và cho nó không là số nguyên tố
            for(int j = i * i; j <= 1000000; j += i)
                prime[j] = 0; // j không còn là số nguyên tố nữa
        }
    }
}

int main()
{
    sieve();
    ll n; cin >> n;
    for(int i = 0; i <= n; i++)
    {
        if(prime[i])
            cout << i << ' ';
    }
}