// Viết chương trình nhập và tính tổng, hiệu, tích, thương của 2 phân số.
#include<iostream>
using namespace std;

struct PhanSo // Khai báo biến
{
    int TS;
    int MS;
};

void Nhap(PhanSo &x)
{
    cout << "Nhap tu so: "; cin >> x.TS;
    do
    {
        cout << "Nhap mau so: ";
        cin >> x.MS;
        if(x.MS == 0)
            cout << "Mau so phai khac 0!";
    } while (x.MS == 0);
}

void Xuat(PhanSo x)
{
    if(x.TS % x.MS == 0)
        cout << x.TS / x.MS << '\n';
    else
        cout << x.TS << '/' << x.MS << '\n';
}

void Tong(PhanSo x1, PhanSo x2)
{
    cout << "Tong 2 phan so la: " << endl;
    float Tu, Mau;
    Tu = x1.TS * x2.MS + x2.TS * x1.MS;
    Mau = x1.MS * x2.MS;
    cout << Tu << '/' << Mau << " ~ " << Tu / Mau << endl;
}

void Hieu(PhanSo x1, PhanSo x2)
{
    cout << "Hieu 2 phan so la: " << endl;
    float Tu, Mau;
    Tu = x1.TS * x2.MS - x2.TS * x1.MS;
    Mau = x1.MS * x2.MS;
    cout << Tu << '/' << Mau << " ~ " << Tu / Mau << endl;
}

void Tich(PhanSo x1, PhanSo x2)
{
    cout << "Tich 2 phan so la: " << endl;
    float Tu, Mau;
    Tu = x1.TS * x2.TS;
    Mau = x1.MS * x2.MS;
    cout << Tu << '/' << Mau << " ~ " << Tu / Mau << endl;
}

void Thuong(PhanSo x1, PhanSo x2)
{
    cout << "Tich 2 phan so la: " << endl;
    float Tu, Mau;
    Tu = x1.TS * x2.MS;
    Mau = x1.MS * x2.TS;
    cout << Tu << '/' << Mau << " ~ " << Tu / Mau << endl;
}

int main()
{
    PhanSo ps1, ps2;
    cout << "Nhap phan so" << endl;
    cout << "Nhap phan so thu 1:";
    Nhap(ps1);
    cout << '\n';
    cout << "Nhap phan so thu 2:";
    Nhap(ps2);
    cout << endl;

    cout << "Phan so thu 1: "; Xuat(ps1);
    cout << '\n';
    cout << "Phan so thu 2: "; Xuat(ps2);
    cout << '\n';

    Tong(ps1,ps2);
    cout << '\n';
    Hieu(ps1,ps2);
    cout << '\n';
    Tich(ps1,ps2);
    cout << '\n';
    Thuong(ps1,ps2);
    cout << '\n';
    
    system("pause");
    return 0;
}