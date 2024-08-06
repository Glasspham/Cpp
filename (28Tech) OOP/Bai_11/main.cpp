#include<iostream>
#include<algorithm>
using namespace std;

class DoanhNghiep{
private:
    string ma, ten;
    int soluong;
public:
    DoanhNghiep(){}
    DoanhNghiep(string ma, string ten, int soluong){
        this->ma = ma;
        this->ten = ten;
        this->soluong = soluong;
    }

    friend istream& operator >> (istream& in, DoanhNghiep &dn){
        in >> dn.ma;
        in.ignore(); getline(in, dn.ten);
        in >> dn.soluong;
        return in;
    }

    friend ostream& operator << (ostream& out, DoanhNghiep &dn){
        out << dn.ma + " " + dn.ten + " " << dn.soluong << endl;
        return out;
    }

    int getSoLuong(){ return soluong; }
    string getMa(){ return ma; }
};

bool cmp(DoanhNghiep a, DoanhNghiep b){
    if(a.getSoLuong() == b.getSoLuong())
        return a.getMa() < b.getMa();
    return a.getSoLuong() > b.getSoLuong();
}

int main(){
    int n; cin >> n;
    DoanhNghiep dn[n];
    for(DoanhNghiep &x : dn)
        cin >> x;
    sort(dn, dn + n, cmp);
    int t; cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;  
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << ":\n";
        for(DoanhNghiep x : dn)
            if(x.getSoLuong() <= b && x.getSoLuong() >= a)
                cout << x;
    }
}