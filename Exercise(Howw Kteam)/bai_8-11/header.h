// Header.h Những bài toán liên quan đến ngày tháng năm
#ifndef _HEADER_
#define  _HEADER_

#include <iostream>
using namespace std;

bool tinhnamnhuan(int &nYear);
void tinhnamnhuantrongkhoang(int &start, int &end);
int tinhsongaycotrongthang(int &Year, int &Month);
bool ngayhople(int &Year, int &Month, int &Day);
void ngaytruocdo(int &Year, int &Month, int &Day);
void ngaysaudo(int &Year, int &Month, int &Day);
int tinhngaythubaonhieu(int &year, int &month, int &day);

#endif // _HEADER_
