#include<bits/stdc++.h>
using namespace std;

void ChuanHoa(string &name){
    while(name[0] == ' ')
        name.erase(0,1);
    for(int i = 1; i < name.length() - 1; ++i)
        if(name[i] == ' ' && name[i + 1] == ' '){
            name.erase(i,1);
            --i;
        }
    while (name[name.length() - 1] == ' ') 
        name.erase(name.length() - 1, 1);
    
    if(islower(name[0]))
        name[0] = toupper(name[0]);
    for(int i = 1; i < name.length(); ++i){
        if(name[i - 1] == ' ')
            name[i] = toupper(name[i]);
        else name[i] = tolower(name[i]);
    }
}

string ChuanHoa2(string name){
    stringstream ss(name);
    string res = "", token;
    while(ss >> token){
        res += toupper(token[0]);
        for(int i = 1; i < token.length(); ++i) res += tolower(token[i]);
        res += " ";
    }
    res.erase(res.length() - 1);
    return res;
}

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
        sv.ten = ChuanHoa2(sv.ten);
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

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i = 0; i < N; ++i)
        cin >> ds[i];
    for(i = 0; i < N; ++i)
        cout << ds[i];
    return 0;
}