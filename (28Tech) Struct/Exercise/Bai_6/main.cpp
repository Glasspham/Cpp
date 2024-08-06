#include<iostream>
using namespace std;

// Bài 6. Cấu trúc nhân viên
struct NhanVien{
    string manhanvien = "00001";
    string ten, gt, ns, dc, mst, ndkhd;

};

void nhap(NhanVien &x){
    cout << "Ho & ten: ";
    getline(cin,x.ten);

    cout << "Gioi tinh: ";
    cin >> x.gt;

    cout << "Ngay-thang-nam sinh: ";
    cin >> x.ns;
    cin.ignore();

    cout << "Dia chi : ";
    getline(cin,x.dc);

    cout << "Ma so thue: ";
    cin >> x.mst;

    cout << "Ngay-thang-nam dang ky hop dong: ";
    cin >> x.ndkhd;
}

void xulyDate(string &s){
    if(s[1] == '/')
        s = "0" + s;
    if(s[4] == '/')
        s.insert(3,"0");
}

void in(NhanVien x){
    xulyDate(x.ns);
    xulyDate(x.ndkhd);
    cout << x.manhanvien << ' ' << x.ten << ' ' << x.gt << ' ' << x.ns << ' ' << x.dc << ' ' << x.mst << ' ' << x.ndkhd << endl;
}

int main(){
    NhanVien A;
    nhap(A);
    in(A);
}