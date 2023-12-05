#include "header.h"

#if 0 // bai 8
// Kiểm tra năm đó có phải năm nhuận không và phát triển thêm có thể tính trong 1 khoảng
int main()
{
    #if 1 // Xem năm đó có nhuận hay không 
    int nYear;
    cout << "Enter year: ";
    cin >> nYear;

    if(tinhnamnhuan(nYear) == true)
    {
        cout << nYear << " la nam nhuan!" << '\n';
    }
    else
    {
        cout << nYear << " khong phai la nam nhuan!" << '\n';
    }
    #endif

    #if 0 // Tính ra các năm nhuận trong một khoảng năm xác định
    int nYearStart, nYearEnd;
    cout << "Enter year start: ";
    cin >> nYearStart;

    cout << "Enter year end: ";
    cin >> nYearEnd;

    tinhnamnhuantrongkhoang(nYearStart, nYearEnd);
    #endif

    
    return 0;    
}
#endif

#if 0 // bai 9
// Kiểm tra ngày tháng có hợp lệ hay không
int main()
{
    int nYear, nMonth, nDay;
    cout << "Enter Day: ";
    cin >> nDay;
    
    cout << "Enter Month: ";
    cin >> nMonth;

    cout << "Enter Year: ";
    cin >> nYear;

    if(ngayhople(nYear, nMonth, nDay))
        cout << nDay << "/" << nMonth << "/" << nYear << ": do exist" << '\n';
    cout << nDay << "/" << nMonth << "/" << nYear  << ": don't exist" << '\n';
}
#endif

#if 0 // bai 10
// Tính ngày trước đó và ngày sau đó
int main()
{
    int nYear, nMonth, nDay;

    cout << "Enter Day: ";
    cin >> nDay; 

    cout << "Enter Month: ";
    cin >> nMonth;

    cout << "Enter Year: ";
    cin >> nYear;

    if(ngayhople(nYear, nMonth, nDay))
    {
        int tmpDay = nDay;
		int tmpMonth = nMonth;
		int tmpYear = nYear;

        cout << "Yesterday: ";
        ngaytruocdo(nYear, nMonth, nDay);
        cout << nDay << '/' << nMonth << '/' << nYear << '\n';

        cout << "Tomorrow: ";
        ngaysaudo(tmpYear, tmpMonth, tmpDay);
        cout << tmpDay << '/' << tmpMonth << '/' << tmpYear << '\n';
    }
    
    
    return 0;
}
#endif

#if 0 // bai 11
// Tính thứ tự của ngày trong năm
int main()
{
    int nYear, nMonth, nDay;

    cout << "Enter Day: ";
    cin >> nDay; 

    cout << "Enter Month: ";
    cin >> nMonth;

    cout << "Enter Year: ";
    cin >> nYear;

    if(ngayhople(nYear, nMonth, nDay) == true)
    {
        int ncount = tinhngaythubaonhieu(nYear, nMonth, nDay);
        cout << "Ngay thu: " << ncount << endl;
    }
    else
    {
        cout << "Ngay khong hop le!" << endl;
    }

    
    return 0;
} 
#endif