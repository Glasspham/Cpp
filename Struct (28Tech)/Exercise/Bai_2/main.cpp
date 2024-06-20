#include<iostream>
using namespace std;
typedef long long ll;
inline ll GCD(ll a, ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}

struct PS{
    int ts,ms;
};

void nhap(PS &x){
    cin >> x.ts >> x.ms;
}

void rutgon(PS &x){
    ll temp = GCD(x.ts,x.ms);
    x.ts /= temp;
    x.ms /= temp;
}

PS tong(PS q, PS p){
    PS result;
    result.ts = q.ts * p.ms + q.ms * p.ts;
    result.ms = q.ms * p.ms;
    rutgon(result);
    return result;
}

void in(PS x){
    cout << x.ts << '/' << x.ms << endl;
}

int main(){
    PS q, p;
    nhap(q);
    rutgon(q);
    nhap(p);
    rutgon(p);

    cout << "Phan so thu nhat: ";
    in(q);
    cout << "Phan so thu hai: ";
    in(p);

    PS result = tong(q,p);
    if(result.ms == 1)
        cout << "Tong cua 2 phan so la: " << result.ts << endl;
    else
        cout << "Tong cua 2 phan so la: " << result.ts << '/' << result.ms << endl;

    return 0;
}