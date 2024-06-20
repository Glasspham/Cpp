#include<iostream>
#include <iomanip>
using namespace std;

// Bài 7. Danh sách nhân viên
struct NhanVien{
    string ma, ten, gt, ns, dc, mst, ndkhd;

};

void nhap(NhanVien &x){
    cout << "STT: ";
    cin >> x.ma;
    cin.ignore();
    
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

void xulySTT(string &x){
    while(x.size() < 5){
        x = "0" + x;
    }
}

void xulyDate(string &s){
    if(s[1] == '/')
        s = "0" + s;
    if(s[4] == '/')
        s.insert(3,"0");
}

void inds(NhanVien ds[], int N){
   cout << setw(10) << "STT" << setw(20) << "Ho & ten" << setw(10) << "Gioi tinh"
              << setw(15) << "Ngay sinh" << setw(20) << "Dia chi" << setw(15) << "Ma so thue"
              << setw(25) << "Ngay dang ky hop dong" << endl;
    cout << setfill('-') << setw(120) << "" << setfill(' ') << endl;

    for (int i = 0; i < N; i++){
        xulySTT(ds[i].ma);
        xulyDate(ds[i].ns);
        xulyDate(ds[i].ndkhd);

        cout << setw(10) << ds[i].ma << setw(20) << ds[i].ten << setw(10) << ds[i].gt
                  << setw(15) << ds[i].ns << setw(20) << ds[i].dc << setw(15) << ds[i].mst
                  << setw(25) << ds[i].ndkhd << endl;
    }
}

int main(){
    NhanVien ds[50];
    int N,i;
    cout << "So luong nhan vien: ";
    cin >> N;
    for (i = 0; i < N; i++){
        cout << "Thong tin nguoi thu " << i + 1 << endl;
        nhap(ds[i]);
    }
    inds(ds,N);
    return 0;
}