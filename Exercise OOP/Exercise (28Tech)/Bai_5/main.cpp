#include<iostream>
#include<algorithm>
using namespace std;

class SinhVien{
private:
    string name, id, classes, email;
public:
    SinhVien();
    SinhVien(string, string, string, string);

    friend istream& operator >> (istream&, SinhVien&);
    friend ostream& operator << (ostream&, SinhVien);
    string getId(){ return classes; }
};

SinhVien::SinhVien():name(""),id(""),classes(""), email(""){}
SinhVien::SinhVien(string name, string birth, string classes, string email){
    this->name = name;
    this->classes = classes;
    this->email = email;
}

istream& operator >> (istream& in, SinhVien& sv){
    in >> sv.id;
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
    SinhVien a[100];
    int n; cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a + n, cmp);
    for(int i = 0; i < n; ++i)
        cout << a[i];
}
