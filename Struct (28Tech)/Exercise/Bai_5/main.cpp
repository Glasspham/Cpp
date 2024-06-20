#include<iostream>
using namespace std;

struct SinhVien{
    string name;
    string date;
    string classroom;
    double GPA;
};

void nhap(SinhVien &a){
    cout << "Nhap ten thi sinh: ";
    getline(cin,a.name);

    cout << "Nhap ngay/thang/nam sinh: ";
    cin >> a.date;
    if(a.date[1] == '/')
        a.date = "0" + a.date;
    if(a.date[4] == '/')
            a.date.insert(3,"0");

    cout << "Nhap ten lop hoc: ";
    cin >> a.classroom;

    cout << "Nhap diem GPA: ";
    cin >> a.GPA;
}

void in(SinhVien a){
    cout << "MSSV" << "\t\t" << "name" << "\t\t" << "classroom"  << "\t" << "date" << "\t\t" << "GPA" << endl;
    cout << "B20DCCN001" << '\t' << a.name << '\t' << a.classroom << "\t\t" << a.date << '\t' << a.GPA << endl;
}

int main(){
    SinhVien A;
    nhap(A);
    in(A);
    return 0;
}