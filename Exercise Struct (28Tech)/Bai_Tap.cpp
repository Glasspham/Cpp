#include<iostream>
#include <iomanip> 
#include<math.h>
#include <iomanip>
#include<algorithm>
#include<map>
#include<fstream>
#include<vector>
using namespace std;
typedef long long ll;
#define PI 3.141592653589793238
#define all(a) a.begin(),a.end()
#define fi first
#define se second
#define mp make_pair
inline ll GCD(ll a, ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll LCM(ll a, ll b){return  (a * b / GCD(a,b));}

#if 0 // Bài 1. Rút gọn phân số
struct PS
{
    ll ts,ms;
};

void nhap(PS &p)
{
    cin >> p.ts >> p.ms;
}

void rutgon(PS &p)
{
    ll value = GCD(p.ts, p.ms);
    p.ts /= value;
    p.ms /= value;
}

void in(PS p)
{
    cout << p.ts << '/' << p.ms << endl;
}

int main()
{
    struct PS p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}
#endif

#if 0 // Bài 2. Tính tổng 2 phân số
struct PS
{
    int ts,ms;
};

void nhap(PS &x)
{
    cin >> x.ts >> x.ms;
}

void rutgon(PS &x)
{
    ll temp = GCD(x.ts,x.ms);
    x.ts /= temp;
    x.ms /= temp;
}

PS tong(PS q, PS p)
{
    PS result;
    result.ts = q.ts * p.ms + q.ms * p.ts;
    result.ms = q.ms * p.ms;
    rutgon(result);
    return result;
}

void in(PS x)
{
    cout << x.ts << '/' << x.ms << endl;
}

int main()
{
    PS q, p;
    nhap(q);
    rutgon(q);
    nhap(p);
    rutgon(p);

    cout << "Phan so thu nhat: ";
    in(q);
    cout << "Phan so thu hai: ";
    in(p);

    PS result = tong(q,p);
    if(result.ms == 1)
        cout << "Tong cua 2 phan so la: " << result.ts << endl;
    else
        cout << "Tong cua 2 phan so la: " << result.ts << '/' << result.ms << endl;

    return 0;
}
#endif

#if 0 // Bài 3. Cấu trúc điểm trong tọa độ Oxy
struct point
{
    double x,y;
};

void input(point &a)
{
    cin >> a.x >> a.y;
}

double distance(point &a, point &b)
{
    return sqrt(pow((b.x - a.x),2) + pow((b.y - a.y),2));
}

int main()
{
    point A,B;
    int t;
    cin >> t;
    while (t--)
    {
        input(A);
        input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl; // Từ thư viện <iomanip>
    }
    return 0;
}

#endif

#if 0 // Bài 4. Cấu trúc thí sinh
struct ThiSinh
{
    string name;
    string date;
    int mark[3];
};

void nhap(ThiSinh &A)
{
    cout << "Nhap ten thi sinh: ";
    getline(cin,A.name);

    cout << "Nhap ngay/thang/nam sinh: ";
    getline(cin,A.date);

    cout << "Nhap diem 3 mon: " << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << "Diem mon " << i + 1 << ": ";
        cin >> A.mark[i];
    }
}

double DTB(ThiSinh A)
{
    int sum(0);
    for (int i = 0; i < 3; i++)
        sum += A.mark[i];
    return sum / 3;
}

void in(ThiSinh A)
{
    cout << "Name" << '\t' << "Date" << '\t' << "Medium score" << endl;
    cout << A.name << '\t' << A.date << '\t' << fixed << setprecision(1) << DTB(A) << endl;
}

int main()
{
    ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
#endif

#if 0 // Bài 5. Cấu trúc sinh viên
struct SinhVien
{
    string name;
    string date;
    string classroom;
    double GPA;
};

void nhap(SinhVien &a)
{
    cout << "Nhap ten thi sinh: ";
    getline(cin,a.name);

    cout << "Nhap ngay/thang/nam sinh: ";
    cin >> a.date;
    if(a.date[1] == '/')
        a.date = "0" + a.date;
    if(a.date[4] == '/')
            a.date.insert(3,"0");

    cout << "Nhap ten lop hoc: ";
    cin >> a.classroom;

    cout << "Nhap diem GPA: ";
    cin >> a.GPA;
}

void in(SinhVien a)
{
    cout << "MSSV" << "\t\t" << "name" << "\t\t" << "classroom"  << "\t" << "date" << "\t\t" << "GPA" << endl;
    cout << "B20DCCN001" << '\t' << a.name << '\t' << a.classroom << "\t\t" << a.date << '\t' << a.GPA << endl;
}

int main()
{
    SinhVien A;
    nhap(A);
    in(A);
    return 0;
}
#endif

#if 0 // Bài 6. Cấu trúc nhân viên
struct NhanVien
{
    string manhanvien = "00001";
    string ten, gt, ns, dc, mst, ndkhd;

};

void nhap(NhanVien &x)
{
    cout << "Ho & ten: ";
    getline(cin,x.ten);

    cout << "Gioi tinh: ";
    cin >> x.gt;

    cout << "Ngay-thang-nam sinh: ";
    cin >> x.ns;
    cin.ignore();

    cout << "Dia chi : ";
    getline(cin,x.dc);

    cout << "Ma so thue: ";
    cin >> x.mst;

    cout << "Ngay-thang-nam dang ky hop dong: ";
    cin >> x.ndkhd;
}

void xulyDate(string &s)
{
    if(s[1] == '/')
        s = "0" + s;
    if(s[4] == '/')
        s.insert(3,"0");
}

void in(NhanVien x)
{
    xulyDate(x.ns);
    xulyDate(x.ndkhd);
    cout << x.manhanvien << ' ' << x.ten << ' ' << x.gt << ' ' << x.ns << ' ' << x.dc << ' ' << x.mst << ' ' << x.ndkhd << endl;
}

int main()
{
    NhanVien A;
    nhap(A);
    in(A);
}
#endif

#if 0 // Bài 7. Danh sách nhân viên
struct NhanVien
{
    string ma, ten, gt, ns, dc, mst, ndkhd;

};

void nhap(NhanVien &x)
{
    cout << "STT: ";
    cin >> x.ma;
    cin.ignore();
    
    cout << "Ho & ten: ";
    getline(cin,x.ten);

    cout << "Gioi tinh: ";
    cin >> x.gt;

    cout << "Ngay-thang-nam sinh: ";
    cin >> x.ns;
    cin.ignore();

    cout << "Dia chi : ";
    getline(cin,x.dc);

    cout << "Ma so thue: ";
    cin >> x.mst;

    cout << "Ngay-thang-nam dang ky hop dong: ";
    cin >> x.ndkhd;
}

void xulySTT(string &x)
{
    while(x.size() < 5)
    {
        x = "0" + x;
    }
}

void xulyDate(string &s)
{
    if(s[1] == '/')
        s = "0" + s;
    if(s[4] == '/')
        s.insert(3,"0");
}

void inds(NhanVien ds[], int N)
{
   cout << setw(10) << "STT" << setw(20) << "Ho & ten" << setw(10) << "Gioi tinh"
              << setw(15) << "Ngay sinh" << setw(20) << "Dia chi" << setw(15) << "Ma so thue"
              << setw(25) << "Ngay dang ky hop dong" << endl;
    cout << setfill('-') << setw(120) << "" << setfill(' ') << endl;

    for (int i = 0; i < N; i++)
    {
        xulySTT(ds[i].ma);
        xulyDate(ds[i].ns);
        xulyDate(ds[i].ndkhd);

        cout << setw(10) << ds[i].ma << setw(20) << ds[i].ten << setw(10) << ds[i].gt
                  << setw(15) << ds[i].ns << setw(20) << ds[i].dc << setw(15) << ds[i].mst
                  << setw(25) << ds[i].ndkhd << endl;
    }
}

int main()
{
    NhanVien ds[50];
    int N,i;
    cout << "So luong nhan vien: ";
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cout << "Thong tin nguoi thu " << i + 1 << endl;
        nhap(ds[i]);
    }
        
    inds(ds,N);
    return 0;
}
#endif

#if 1 // Bài 8. Diện tích hình tròn ngoại tiếp tam giác
struct point
{
    double x,y;
    double distance(point p){
        return sqrt(pow((p.x - x),2) + pow((p.y - y),2));
    }     
};

void solve(point A, point B, point C)
{
    double x1 = A.distance(B), x2 = A.distance(C), x3 = B.distance(C);
    if(x1 <= 0 || x2 <= 0 || x3 <= 0 || x1 + x2 < x3 || x1 + x3 < x2 || x2 + x3 < x1)
        cout << "INVALID \n";
    else
    {
        double p = (x1 + x2 + x3)/2;
        double S = sqrt(p * (p - x1) * (p - x2) * (p - x3));
        double r = (x1 * x2 * x3)/(4 * S);
        cout << "Dien tich hinh tron ngoai tiep tam giac la: " << fixed << setprecision(3) << PI * r * r << endl;
    }      
}

int main()
{
    int t;
    cout << "So lan test: ";
    cin >> t;
    while (t--)
    {
        point A,B,C;
        cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
        solve(A,B,C);
    }
    return 0;
}
#endif

// Bài 9. Số thuận nghịch giảm dần
#if 0 
bool check(string s)
{
    if(s.size() < 2) return false;
    string t = s;
    reverse(all(s)); // Từ thư viện <algorithm>
    return t == s;
}

bool cmp(pair<string, int> a, pair<string, int> b)
{
    return (a.fi.size() != b.fi.size() ? a.fi.size() > b.fi.size() : a > b);
}

int main()
{
    ifstream ifile("E:\\Project Visual Studio Code\\C++\\Exercise Struct\\Text.txt");
#if 0 // Cách 1 khó hiểu
    auto cmp = [](const string a, const string b)
    {
        return (a.size() != b.size() ? a.size() > b.size() : a > b);
    };
    map<string, int, decltype(cmp)> mp(cmp); // Từ thư viện <map>
    string s;
    while (ifile >> s)
        if(check(s)) 
            mp[s]++;
    for(auto it : mp)
        cout << it.fi << " " << it.se << endl;
#endif

#if 0 // Cách 2 dễ tiếp cận
    map<string, int> mp;
    string s;
    while (ifile >> s)
        if(check(s)) 
            mp[s]++;
    vector<pair<string, int>> v;
    for(auto it : mp)
        v.push_back(it);
    sort(all(v),cmp);
    for(auto it : v)
        cout << it.fi << " " << it.se << endl;
#endif

return 0;
}
#endif

#if 0 // Bài 10. Cấu trúc tuổi, tìm người già nhất, trẻ nhất.
struct person
{
    string ten,ns;
};

bool cmp(person a, person b)
{
    string s = a.ns, t = b.ns;
    int d1 = (s[0] - '0') * 10 + (s[1] - '0'), m1 = (s[3] - '0') * 10 + (s[4] - '0'), y1 = (stoi(s.substr(6)));
    int d2 = (t[0] - '0') * 10 + (t[1] - '0'), m2 = (t[3] - '0') * 10 + (t[4] - '0'), y2 = (stoi(t.substr(6)));
    if(y1 != y2) return y1 < y2;
    if(m1 != m2) return m1 < m2;
    return d1 < d2;
}

int main()
{
    ifstream ifile("E:\\Project Visual Studio Code\\C++\\Exercise Struct\\Text1.txt");
    int n; ifile >> n;
    person a[n];
    for(int i = 0; i < n; i++)
        ifile >> a[i].ten >> a[i].ns;

    sort(a, a + n, cmp);
    cout << a[n-1].ten << endl << a[0].ten << endl;
}
#endif

