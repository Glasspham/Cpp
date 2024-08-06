#include<bits/stdc++.h>
using namespace std;

class SinhVien{
private:
    string ma, ten, lop, ns;
    float gpa;
public:
    static int cnt;
    SinhVien():ma(""),ten(""),lop(""),gpa(0){}
    friend istream& operator >> (istream &in, SinhVien &sv){
        ++cnt;
        string tmp = to_string(cnt);
        sv.ma = "B20DCCN" + string(3 - tmp.length(), '0') + tmp;
        in.ignore();
        getline(in, sv.ten);
        in >> sv.lop >> sv.ns >> sv.gpa;
        if(sv.ns[1] == '/') sv.ns = sv.ns.insert(0,"0");
        if(sv.ns[4] == '/') sv.ns = sv.ns.insert(3,"0");
        return in; 
    }

    friend ostream& operator << (ostream &out, SinhVien sv){
        out << sv.ma << " " + sv.ten + " " + sv.lop + " " << fixed << setprecision(2) << sv.gpa;
        return out;
    }
};

int SinhVien::cnt = 0;

int main(){
    SinhVien ds[50];
    int N; cin >> N;
    for(int i = 0; i < N; ++i) cin >> ds[i];
    for(int i = 0; i < N; ++i) cout << ds[i] << endl;
}