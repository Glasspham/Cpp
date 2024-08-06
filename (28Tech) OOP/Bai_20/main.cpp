#include<bits/stdc++.h>
using namespace std;

string Chuan(string bm){
    stringstream ss(bm);
    string res, token;
    while(ss >> token)
        res += toupper(token[0]);
    return res;
}

string getname(string name){
    stringstream ss(name);
    string res, token;
    while(ss >> token)
        res = token;
    return res;
}

class GiangVien{
private:
    string ten, bm, ma;
    static int cnt;
public:
    GiangVien(){}
    friend istream& operator >> (istream &in, GiangVien &gv){
        ++cnt;
        string tmp = to_string(cnt);
        if(tmp.length() < 2) tmp = "0" + tmp;
        gv.ma = "GV" + tmp;
        getline(in, gv.ten);
        getline(in, gv.bm);
        gv.bm = Chuan(gv.bm);
        return in;
    }

    friend ostream& operator << (ostream &out, GiangVien gv){
        out << gv.ma + " " + gv.ten + " " + gv.bm;
        return out;
    }

    string getName(){ return ten; }
};

int GiangVien::cnt = 0;

bool Tim(string name, string word){
    for(char &c : name) c = tolower(c);
    for(char &c : word) c = tolower(c);
    return name.find(word) != string::npos;
}

int main(){
    GiangVien ds[50];
    int n; cin >> n;
    cin.ignore();
    for(int i = 0; i < n; ++i)
        cin >> ds[i];

    int t; cin >> t; cin.ignore();
    while (t--){
        string s; cin >> s;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        for(int i = 0; i < n; ++i)
            if(Tim(ds[i].getName(), s))
                cout << ds[i] << endl;
    }
    return 0;
}