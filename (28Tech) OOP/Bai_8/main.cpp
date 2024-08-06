#include<iostream>
#include<algorithm>
#include<map>
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

int main(){
    map<int,vector<SinhVien>> list;
    int n; cin >> n;
    for(int i = 0; i < n; ++i){
        SinhVien tmp; cin >> tmp;
        list[stoi(tmp.getId().substr(1,2))].push_back(tmp);
    }

    int t; cin >> t;
    while(t--){
        int year; cin >> year;
        cout << "DANH SACH SINH VIEN KHOA " << year << ":\n";
        for(SinhVien x : list[year % 100])
            cout << x;
    }
}
