#include<iostream>
using namespace std;
#define ll long long
inline ll GCD(ll a,ll b){while(b){ll tmp=a%b;a=b;b=tmp;}return a;}
inline ll LCM(ll a,ll b){return a*b/GCD(a,b);}

class PhanSo{
private:
    ll ts, ms;
public:
    PhanSo():ts(0),ms(1){}
    PhanSo(ll ts, ll ms):ts(ts),ms(ms){}

    friend istream& operator >> (istream& in, PhanSo& p){in >> p.ts >> p.ms; return in;}
    friend ostream& operator << (ostream& out, PhanSo p){out << p.ts << '/' << p.ms; return out;}

    void rutgon(){
        ll tmp = GCD(ts, ms);
        ts /= tmp;
        ms /= tmp;
    }

    friend PhanSo operator + (PhanSo a, PhanSo b){
        PhanSo tong(1,1);
        tong.ts = a.ts * b.ms + b.ts * a.ms;
        tong.ms = a.ms * b.ms;
        tong.rutgon();
        return tong;
    }
};

int main(){
    PhanSo p(1,1),q(1,1);
    cin >> p >> q;
    cout << p + q;
}