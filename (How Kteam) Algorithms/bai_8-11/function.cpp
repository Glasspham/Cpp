// File chứ những function của những bài toán liên quan đến ngày tháng năm
#include "header.h"

// Hàm kiểm tra năm nhuận
bool tinhnamnhuan(int &nYear)
{
    if((nYear % 4 == 0 && nYear % 100 != 0) || nYear % 400 == 0)
    {
        return true;
    }
    return false;
}

// In năm nhuận giữa 2 mốc thời gian
void tinhnamnhuantrongkhoang(int &start, int &end)
{
    for(int i = start; i <= end; i++)
    {
        if(tinhnamnhuan(i)) // Không ghi == true thì bên trong if cũng tự hiểu là = true mới xuất ra giá trị của i
        {
            cout << i << '\t';
        }
    }
    cout << '\n';
}

// Hàm trả về số ngày trong tháng thuộc năm cho trước
int tinhsongaycotrongthang(int &Year, int &Month)
{
    int Numday;
    switch (Month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        Numday = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        Numday = 30;
        break;
    case 2:
        if(tinhnamnhuan(Year))
            Numday = 29;
        Numday = 28;
        break;
    }
    return Numday;
}

// Hàm kiểm tra ngày dd/mm/yyyy cho trước có phải là ngày hợp lệ
bool ngayhople(int &Year, int &Month, int &Day)
{
    if(Year < 1)
        return false;
    if(Month < 1 || Month >12)
        return false;
    if(Day < 1 || Day > tinhsongaycotrongthang(Year, Month))
        return false;
    return true;
}

// Hàm tìm ngày hôm trước của một ngày dd/mm/yyyy cho trước (đã hợp lệ)
void ngaytruocdo(int &Year, int &Month, int &Day)
{
    Day--;
    if(Day == 0)
    {
        Month--;
        if(Month == 0)
        {
            Month = 12;
            Year--;
        }
        Day = tinhsongaycotrongthang(Year, Month);
    }
}

// Hàm tìm ngày hôm sau của một ngày dd/mm/yyyy cho trước (đã hợp lệ)
void ngaysaudo(int &Year, int &Month, int &Day)
{
    Day++;
    if(Day > tinhsongaycotrongthang(Year, Month))
    {
        Day = 1;
        Month++;
        if(Month > 12)
        {
            Month = 1;
            Year++;
        }
    }
}

// Hàm tính và trả về số thứ tự ngày trong năm từ ngày dd/mm/yyyy cho trước (đã hợp lệ)
int tinhngaythubaonhieu(int &year, int &month, int &day)
{
    int count = day;
    
    for(int i = 1; i <= month - 1; i++)
    {
        count = count + tinhsongaycotrongthang(year, i);
    }
    return count;
}
