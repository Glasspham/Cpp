#include<iostream>
using namespace std;
typedef long long ll;
inline ll GCD(ll a, ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}

struct PS{
    ll ts,ms;
};

void nhap(PS &p){
    cin >> p.ts >> p.ms;
}

void rutgon(PS &p){
    ll value = GCD(p.ts, p.ms);
    p.ts /= value;
    p.ms /= value;
}

void in(PS p){
    cout << p.ts << '/' << p.ms << endl;
}

int main(){
    PS p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}