#include<bits/stdc++.h>
#include <string>
using namespace std;

class NhanVien{
private:
    string ten, gt, ns, dc, mst, nkhd;
    int ma;
public:
    static int cnt;
    NhanVien() : ma(0), ten(""), gt(""), ns(""), dc(""), mst(""), nkhd("") {}

    friend istream& operator >> (istream &in, NhanVien &nv){
        ++cnt;
        nv.ma = cnt;
        in.ignore();
        getline(in, nv.ten);
        in >> nv.gt >> nv.ns; 
        in.ignore();
        getline(in,nv.dc);
        in >> nv.mst >> nv.nkhd;
        return in;
    }

    friend ostream& operator << (ostream &out, NhanVien nv){
        out << setfill('0') << setw(5) << nv.ma 
        << " " + nv.ten + " " + nv.gt + " " + nv.ns + " " + nv.dc + " " + nv.mst + " " + nv.nkhd;
        return out;
    }
};

int NhanVien::cnt = 0;

int main(){
    int n; cin >> n;
    NhanVien a[50];
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cout << a[i] << endl;
}
