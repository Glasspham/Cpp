#include<bits/stdc++.h>
using namespace std;

string chuanHoa(string bm){
    stringstream ss(bm);
    string res = "", token;
    while(ss >> token)
        res += toupper(token[0]);
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
        gv.bm = chuanHoa(gv.bm);
        return in;
    }

    friend ostream& operator << (ostream &out, GiangVien gv){
        out << gv.ma + " " + gv.ten + " " + gv.bm;
        return out;
    }

    string getBoMon(){ return bm; }
};

int GiangVien::cnt = 0;

int main(){
    int n; cin >> n;
    cin.ignore();
    map<string, vector<GiangVien>> chua;
    for(int i = 0; i < n; ++i){
        GiangVien tmp; cin >> tmp;
        chua[tmp.getBoMon()].push_back(tmp);
    }
    int t; cin >> t; cin.ignore();
    while(t--){
        string res; getline(cin, res);
        res = chuanHoa(res);
        cout << "DANH SACH GIANG VIEN BO MON " << res << ":\n";
        for(GiangVien x : chua[res])
            cout << x << endl;
    }
    return 0;
}