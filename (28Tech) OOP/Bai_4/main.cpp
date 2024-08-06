#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

class SinhVien{
private:
    string name, id, birth, classes;
    float gpa;
public:
    SinhVien();
    SinhVien(string, string, string, float);

    friend istream& operator >> (istream&, SinhVien&);
    friend ostream& operator << (ostream&, SinhVien);

    void xuly(){
        if(birth[1] == '/')
            birth = "0" + birth;
        if(birth[4] == '/')
            birth.insert(3,"0");
    }
};

SinhVien::SinhVien():name(""),id(""),birth(""),classes(""),gpa(0.0){}
SinhVien::SinhVien(string name, string birth, string classes, float gpa){
    this->name = name;
    this->birth = birth;
    this->classes = classes;
    this->gpa = gpa;
}

istream& operator >> (istream& in, SinhVien& sv){
    sv.id = "B20DCCN001";
    getline(in,sv.name);
    in >> sv.classes >> sv.birth >> sv.gpa;
    sv.xuly();
    return in;
}


ostream& operator << (ostream& out, SinhVien sv){
    out << sv.id + " " + sv.name + " " + sv.classes + " " + sv.birth + " " << fixed << setprecision(2) << sv.gpa << endl;
    return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
}
