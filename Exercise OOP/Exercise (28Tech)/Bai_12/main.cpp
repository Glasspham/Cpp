#include<iostream>
using namespace std;

class NhanVien{
private:
    string ma, ten, gt, ns, dc, mst, nkhd;
public:
    NhanVien(){ ma = ten = gt = ns = dc = mst = nkhd = " "; }
    friend istream& operator >> (istream &in, NhanVien &nv){
        nv.ma = "00001";
        getline(in, nv.ten);
        in >> nv.gt >> nv.ns; 
        in.ignore();
        getline(in,nv.dc);
        in >> nv.mst >> nv.nkhd;
        return in;
    }

    friend ostream& operator << (ostream &out, NhanVien nv){
        out << nv.ma + " " + nv.ten + " " + nv.gt + " " + nv.ns + " " + nv.dc + " " + nv.mst + " " + nv.nkhd;
        return out;
    }
};

int main(){
    NhanVien a;
    cin >> a; cout << a;
}