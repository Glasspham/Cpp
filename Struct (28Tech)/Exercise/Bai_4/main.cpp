#include<iostream>
#include<iomanip>
using namespace std;

struct ThiSinh{
    string name;
    string date;
    int mark[3];
};

void nhap(ThiSinh &A){
    cout << "Nhap ten thi sinh: ";
    getline(cin,A.name);

    cout << "Nhap ngay/thang/nam sinh: ";
    getline(cin,A.date);

    cout << "Nhap diem 3 mon: " << endl;
    for(int i = 0; i < 3; i++){
        cout << "Diem mon " << i + 1 << ": ";
        cin >> A.mark[i];
    }
}

double DTB(ThiSinh A){
    int sum(0);
    for (int i = 0; i < 3; i++)
        sum += A.mark[i];
    return sum / 3;
}

void in(ThiSinh A){
    cout << "Name" << '\t' << "Date" << '\t' << "Medium score" << endl;
    cout << A.name << '\t' << A.date << '\t' << fixed << setprecision(1) << DTB(A) << endl;
}

int main(){
    ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}