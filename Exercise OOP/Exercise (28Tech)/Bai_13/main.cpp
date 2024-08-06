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

    friend bool operator < (NhanVien a, NhanVien b){
        string ngay1 = a.ns, ngay2 = b.ns;
        int ng1 = stoi(ngay1.substr(3, 2)), t1 = stoi(ngay1.substr(0, 2)), n1 = stoi(ngay1.substr(6));
        int ng2 = stoi(ngay2.substr(3, 2)), t2 = stoi(ngay2.substr(0, 2)), n2 = stoi(ngay2.substr(6));
        if (n1 != n2) return n1 < n2;
        if (t1 != t2) return t1 < t2;
        return ng1 < ng2;
    }
};

int NhanVien::cnt = 0;

void sapxep(NhanVien a[], int n){
    sort(a, a + n);
}

int main(){
    int n; cin >> n;
    NhanVien a[50];
    for(int i = 0; i < n; ++i) cin >> a[i];
    sapxep(a,n);
    for(int i = 0; i < n; ++i) cout << a[i] << endl;
}