#include<iostream>
using namespace std;
#define ll long long
inline ll GCD(ll a, ll b){while(b){ll tmp=a%b;a=b;b=tmp;}return a;}

class PhanSo{
private:
    ll ms, ts;
public:
    PhanSo(){}
    PhanSo(ll ms, ll ts):ts(ts), ms(ms){}

    friend istream& operator >> (istream& in, PhanSo &p){
        in >> p.ts >> p.ms;
        return in;
    }

    friend ostream& operator << (ostream& out, PhanSo &p){
        out << p.ts << '/' << p.ms;
        return out;
    }

    void rutgon(){
        ll tmp = GCD(ts,ms);
        ts /= tmp;
        ms /= tmp;
    }
};

int main(){
    PhanSo p(1,1);
    cout << p;
    cin >> p;
    p.rutgon();
    cout << p;
}