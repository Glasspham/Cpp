// Tính số tuổi hiện
#include <iostream>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main() 
{ 
    int namhientai;
    int nNamsinh;
    time_t Time = time(NULL);
    tm* Now = localtime(&Time);
    namhientai = Now -> tm_year + 1900;
    
    cout << "Nhap vao nam sinh cua ban la: ";
    cin >> nNamsinh;
    cout << "Nam sinh cua ban la: " << nNamsinh << '\n';
    cout << "Tuoi cua ban o nam " << namhientai << " la " << namhientai - nNamsinh << '\n';

    
	return 0;
} 
