#include<iostream>
#include<algorithm>
using namespace std;

#if 0 // Số phức
struct sophuc
{
    int a,b; // a + bi
    // kieu_tra_ve operator (+,-,*,/)(danh sach tham so)
    #if 1 // Cách 1
    sophuc operator+ (const sophuc other)
    {
        sophuc tong;
        tong.a = a + other.a;
        tong.b = b + other.b;
        return tong;
    }
    #endif

    #if 0 // Cách 2
    friend sophuc operator+ (const sophuc x, const sophuc y)
    {
        sophuc tong;
        tong.a = x.a + y.a;
        tong.b = x.b + y.b;
        return tong;
    }
    #endif

    // Giúp nhập giá trị số phức bằng cin >>
    // insertion >>
    friend istream& operator >> (istream& in, sophuc &x)
    {
        in >> x.a >> x.b;
        return in;
    }

    // Giúp xuất giá trị số phức bằng cout <<
    // extraction <<
    friend ostream& operator << (ostream& out, sophuc x)
    {
        out << x.a << ' ' << x.b;
        return out;
    }

    // So sánh 2 số phức
    #if 0 // Cách 1 SS ==
    bool operator == (const sophuc other)
    {
        return a == other.a && b == other.b;
    }
    #endif

    #if 1 // Cách 2 SS ==
    friend bool operator == (const sophuc &x, const sophuc &y)
    {
        return x.a == y.a && x.b == y.b;
    }
    #endif

    // SS <
    friend bool operator < (const sophuc &x, const sophuc &y)
    {
        return (x.a * x.a + x.b * x.b < y.a * y.a + y.b * y.b);
    }

};

int main() 
{ 
    // Tự nhập giá trị từ đầu
    #if 0
    sophuc M{1,2}, N{3,4};
    sophuc c = M + N;
    cout << c.a << " " << c.b << endl;
    #endif

    // Dùng cin và cout mới tạo để nhập
    #if 0
    sophuc M,N;
    cin >> M >> N;
    sophuc c = M + N;
    cout << c << endl;
    #endif
    
    // So sánh 2 số phức
    #if 0
    sophuc M,N;
    cin >> M >> N;

    if(M == N) cout << "Yes \n";
    else cout << "No \n";

    if(M < N) cout << "Yes \n";
    else cout << "No \n";
    #endif

    return 0;
}
#endif

#if 0 // Sắp xếp sinh viên theo GPA
struct SinhVien
{
    string MSSV, Ten;
    double GPA;

    bool operator < (const SinhVien other)
    {
        return GPA < other.GPA;
    }
};

int main()
{
    int n; 
    cout << "Nhap so luong sinh vien: " ;
    cin >> n;
    SinhVien ds[n];
    for (int  i = 0; i < n; i++)
    {
        cout << "Nhap MSSV: ";
        cin >> ds[i].MSSV;
        cin.ignore();

        cout << "Nhap ten SV: ";
        getline(cin,ds[i].Ten);
        
        cout << "Nhap GPA: ";
        cin >> ds[i].GPA;
    }

    sort(ds, ds + n);
    cout << "MSSV" << '\t' << "Ten" << '\t' << "GPA" << endl;
    for(SinhVien x : ds)
        cout << x.MSSV << '\t' << x.Ten << '\t' << x.GPA << endl;
}
#endif

#if 0 // Lòng 2 struct
struct Time{
    int giay,phut,gio;
};

struct ve{
    string ten;
    Time tg;
};

int main(){
    ve a;
    cout << "Nhap ten ve: ";
    getline(cin,a.ten);
    cout << "Nhap thoi gian bat dau coi: ";
    cin >> a.tg.gio >> a.tg.phut >> a.tg.giay;
    cout << "Ten ve phim" << '\t' << "thoi gian bat dau coi";
    cout << a.ten << " : " << a.tg.gio << ':' << a.tg.phut << ':' << a.tg.giay << endl;
}
#endif