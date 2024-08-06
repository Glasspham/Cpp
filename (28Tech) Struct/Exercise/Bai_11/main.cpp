#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;

void chuanHoaTen(string &ten){
    while(ten[0] == ' ')
        ten.erase(0,1);
    for(int i = 1; i < ten.length(); ++i)
        if(ten[i] == ' ' && ten[i - 1] == ' '){
            ten.erase(i,1);
            --i;
        }
    if (ten[ten.length() - 1] == ' ') 
        ten.erase(ten.length() - 1);

    if(islower(ten[0])) ten[0] = toupper(ten[0]);
    for(int i = 1; i < ten.length() - 1; ++i){
        if(ten[i - 1] == ' ' && islower(ten[i]))
            ten[i] = toupper(ten[i]);
        else if(isupper(ten[i])) 
            ten[i] = tolower(ten[i]);
    }
}

void chuanHoaNgay(string &ngay){
    if(ngay[1] == '/')
        ngay = "0" + ngay;
    if(ngay[4] == '/')
        ngay.insert(3,"0");
}

struct SinhVien{
    string ma, ten, ns, lop;
    float gpa;

    void in(){
        cout << "------------------------------\n";
        cout << "Ma sinh vien: " << ma << endl;
        cout << "Ten sinh vien: " << ten << endl;
        chuanHoaTen(ten);
        cout << "Lop: " << lop << endl;
        cout << "Ngay sinh: " << ns << endl;
        chuanHoaNgay(ns);
        cout << "GPA: " << fixed << setprecision(2) << gpa << endl;
        cout << "------------------------------\n";
    }

    void Nhap(){
        cout << "Nhap ma sinh vien: "; cin >> ma;
        cin.ignore();
        cout << "Nhap ten sinh vien: "; getline(cin,ten);
        cout << "Nhap lop: "; cin >> lop;
        cout << "Nhap ngay sinh: "; cin >> ns;
        cout << "Nhap GPA: "; cin >> gpa;
    }
};

void inDanhSach(SinhVien ds[], int n){
    cout << "Thong tin danh sach sinh vien!\n";
    for(int i = 0; i < n; ++i)
        ds[i].in();
}

void timKiemMa(SinhVien ds[], int n){
    string matim;
    cout << "Nhap ma sinh vien can tim: "; cin >> matim;
    bool f = true;
    for(int i = 0; i < n; ++i)
        if(ds[i].ma.find(matim) != string::npos){
            ds[i].in();
            f = false;
        }
    if(f) cout << "Khong co ma sinh vien nay!\n";
}

void dsSVGPACao(SinhVien ds[], int n){
    #if 0 // Method 1
    float gpamax = -1;
    for(int i = 0; i < n; ++i)
        if(gpamax < ds[i].gpa)
            gpamax = ds[i].gpa;
    cout << "Danh sach sinh vien co diem cao nhat!\n";
    for(int i = 0; i < n; ++i)
        if(gpamax == ds[i].gpa)
            ds[i].in();
    #endif

    #if 1
    float gpamax = -1;
    vector<int>index;
    for(int i = 0; i < n; ++i){
        if(ds[i].gpa > gpamax){
            gpamax = ds[i].gpa;
            index.clear();
            index.push_back(i);
        }
        else if(gpamax == ds[i].gpa)
            index.push_back(i);
    }
    for(int idx : index)
        ds[idx].in();
    #endif
}

void lietKeDSSV(SinhVien ds[], int n){
    vector<SinhVien> lkds;
    for(int i = 0; i < n; ++i)
        if(ds[i].gpa >= 2.5)
            lkds.push_back(ds[i]);
    for(SinhVien x : lkds)
        x.in();
}

vector<string> doiThuTuTen(string name){
    stringstream ss(name);
    vector<string> v;
    string token, res = "";
    while (ss >> token)
        v.push_back(token);
    return v;
}

bool cmpTen(SinhVien a, SinhVien b){
    vector<string> v1 = doiThuTuTen(a.ten), v2 = doiThuTuTen(b.ten);
    if(v1.back() != v2.back()) return v1.back() < v2.back();
    int len1 = v1.size(), len2 = v2.size();
    for(int i = 0; i < min(len1,len2); ++i)
        if(v1[i] != v2[i]) return v1[i] < v2[i];
    return len1 < len2;
}

void SapXepTen(SinhVien ds[], int n){
    #if 0 // Method 1
    sort(ds, ds + n, cmpTen);
    #endif

    #if 1 // Method 2
    sort(ds, ds + n, [](SinhVien a, SinhVien b){
        vector<string> v1 = doiThuTuTen(a.ten), v2 = doiThuTuTen(b.ten);
        if(v1.back() != v2.back()) return v1.back() < v2.back();
        int len1 = v1.size(), len2 = v2.size();
        for(int i = 0; i < min(len1,len2); ++i)
            if(v1[i] != v2[i]) return v1[i] < v2[i];
        return len1 < len2;
    });
    #endif
}

bool cmpLop(SinhVien a, SinhVien b){
    if(a.lop != b.lop) return a.lop < b.lop;
    cmpTen(a,b);
}

void SapXepLop(SinhVien ds[], int n){
    #if 0 // Method 1
    sort(ds, ds + n, cmpLop);
    #endif

    #if 1 // Method 2
    sort(ds, ds + n, [](SinhVien a, SinhVien b){
        if(a.lop != b.lop) return a.lop < b.lop;
        cmpTen(a,b);
    });
    #endif
}

bool cmpGPA(SinhVien a, SinhVien b){
    if(a.lop != b.lop) return a.lop < b.lop;
    return a.gpa > b.gpa;
}

void SapXepGPA(SinhVien ds[], int n){
    #if 1 // Method 1
    sort(ds, ds + n, cmpGPA);
    #endif

    #if 0 // Method 2
    sort(ds, ds + n, [](SinhVien a, SinhVien b){
        if(a.lop != b.lop) return a.lop < b.lop;
        return a.gpa > b.gpa;
    });
    #endif
}

int main(){
    SinhVien a[1000];
    int n = 0;
    while(1){
        cout << "------------------MENU-------------------\n";
        cout << "1. Nhap thong tin sinh vien.\n";
        cout << "2. Hien thong tin danh sach sinh vien.\n";
        cout << "3. Tim kiem sinh vien theo ma.\n";
        cout << "4. Liet ke danh sach sinh vien GPAcao nhat.\n";
        cout << "5. Liet ke cac sinh vien co diem GPA >= 2.5.\n";
        cout << "6. Sap xep sinh vien theo ten.\n";
        cout << "7. Sap xep sinh vien theo lop(cung lop thi theo ten tang dan).\n";
        cout << "8. Sap xep sinh vien theo lop(cung lop thi theo GPA giam dan).\n";
        cout << "0. Thoat.\n";
        cout << "-----------------------------------------\n";
        cout << "Moi ban chon chuc nang: ";
        int chon; cin >> chon;
        if(chon == 0) break;
        switch(chon){
            case 1:
                a[n].Nhap();
                ++n;
                break;
            case 2: inDanhSach(a,n); break;
            case 3: timKiemMa(a,n); break;
            case 4: lietKeDSSV(a,n); break;
            case 5: lietKeDSSV(a,n); break;
            case 6: SapXepTen(a,n); break;
            case 7: SapXepLop(a,n); break;
            case 8: SapXepGPA(a,n); break;
        }
    }
}