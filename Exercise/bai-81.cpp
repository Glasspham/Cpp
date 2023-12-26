// Viết chương trình so sánh 2 thời gian nhập vào và in ra kết quả
#include<iostream>
using namespace std;

struct Time // Khai báo biến
{
    int hour, minute, second;
};

void Nhap(Time &t)
{
    cout << "Nhap gio: ";  cin >> t.hour;
    cout << "Nhap phut: "; cin >> t.minute;
    cout << "Nhap giay: "; cin >> t.second;
}

void Xuat(Time &t)
{
    if(t.second > 59)
    {
        int i = t.second / 60;
        t.minute += i;
        t.second -= (60 * i);
    }
    if(t.minute > 59)
    {
        int i = t.minute / 60;
        t.hour += i;
        t.minute -= (60 * i);
    }
    cout << t.hour << ':' << t.minute << ':' << t.second << '\n';
    cout << "Quy thanh giay: " << t.hour * 3600 + t.minute * 60 + t.second << '\n';
}

void SoSanh(Time t1, Time t2)
{
    int sum_time1 = t1.hour * 3600 + t1.minute * 60 + t1.second;
    int sum_time2 = t2.hour * 3600 + t2.minute * 60 + t2.second;

    if(sum_time1 > sum_time2)
    {
        int hieutime = sum_time1 - sum_time2;
        int hour = hieutime / 3600;
        int minute = (hieutime - hour * 3600) / 60;
        int second =  hieutime - hour * 3600 - minute * 60;
        cout << "Thoi gian thu 1 nhieu hon thoi gian thu 2!" << endl;
        cout << "Do lech la: " << hour << ':' << minute << ':' << second << endl;
    }
        
    else if(sum_time1 < sum_time2)
    {
        int hieutime = sum_time2 - sum_time1;
        int hour = hieutime / 3600;
        int minute = (hieutime - hour * 3600) / 60;
        int second =  hieutime - hour * 3600 - minute * 60;
        cout << "Thoi gian thu 2 nhieu hon thoi gian thu 1!" << endl;
        cout << "Do lech la: " << hour << ':' << minute << ':' << second << endl;
    }
    else
        cout << "Thoi gian thu 2 bang thoi gian thu 1!" << endl;
}

int main()
{
    Time t1, t2;
    cout << "Nhap thoi gian" << endl;
    cout << "Nhap thoi gian thu 1:" << endl;
    Nhap(t1);
    cout << endl;
    cout << "Nhap thoi gian thu 2:" << endl;
    Nhap(t2);
    cout << endl;

    cout << "thoi gian thu 1: "; Xuat(t1);
    cout << endl;
    cout << "thoi gian thu 2: "; Xuat(t2);
    cout << endl;
    SoSanh(t1,t2);

    system("pause");
    return 0;
}