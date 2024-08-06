#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class SinhVien{
private:
    string name, id, classes, email;
public:
    SinhVien();
    SinhVien(string, string, string, string);

    friend istream& operator >> (istream&, SinhVien&);
    friend ostream& operator << (ostream&, SinhVien);
    string getId(){ return id; }
};

SinhVien::SinhVien():name(""),id(""),classes(""), email(""){}
SinhVien::SinhVien(string name, string birth, string classes, string email){
    this->name = name;
    this->classes = classes;
    this->email = email;
}

istream& operator >> (istream& in, SinhVien& sv){
    in >> sv.id;
    if(sv.id == " ") return in;
    cin.ignore(); getline(in,sv.name);
    in >> sv.classes >> sv.email;
    return in;
}

ostream& operator << (ostream& out, SinhVien sv){
    out << sv.id + " " + sv.name + " " + sv.classes + " " + sv.email << endl;
    return out;
}

bool cmp(SinhVien a, SinhVien b){
    return a.getId() < b.getId();
}

int main(){
    vector<SinhVien> v;
    while (1){
        SinhVien tmp;
        cin >> tmp;
        if(tmp.getId() == " ") break;
        v.push_back(tmp);
    }
    sort(begin(v), end(v), cmp);
    for(SinhVien x : v)
        cout << x;
}
