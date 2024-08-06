#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

class SinhVien{
private:
    string name, id, birth, classes;
    double gpa;
public:
    SinhVien();
    SinhVien(string, string, string, double);

    friend void nhap(SinhVien&);
    friend void in(SinhVien);

    void xuly(){
        if(birth[1] == '/')
            birth = "0" + birth;
        if(birth[4] == '/')
            birth.insert(3,"0");
    }
};

SinhVien::SinhVien():name(""),id(""),birth(""),classes(""),gpa(0.0){}
SinhVien::SinhVien(string name, string birth, string classes, double gpa){
    this->name = name;
    this->birth = birth;
    this->classes = classes;
    this->gpa = gpa;
}

void nhap(SinhVien &sv){
    sv.id = "B20DCCN001";
    getline(cin, sv.name);
    cin >> sv.classes;
    cin >> sv.birth;
    sv.xuly();
    cin >> sv.gpa;
}

void in(SinhVien sv){
    cout << sv.id + " " + sv.name + " " + sv.classes + " " + sv.birth + " " << fixed << setprecision(2) << sv.gpa << endl;
}

int main(){
    SinhVien a;
    nhap(a);
    in(a);
}
