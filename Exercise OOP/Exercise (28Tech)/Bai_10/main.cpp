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
    DoanhNghiep a[n];
    for(DoanhNghiep &x : a)
        cin >> x;
    sort(a, a + n, cmp);
    for(DoanhNghiep x : a)
        cout << x;
}