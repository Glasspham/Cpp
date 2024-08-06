#include <iostream>
#include <iomanip>
#include <typeinfo> 
#include <cstdlib>
#include <ctime>
#include <random>
#include <array>
#include <algorithm>

using namespace std;

#if 0 // Phần main tạo số cột số dòng với những số ngẫu nhiên
int main(){
    int row,col;
    srand(time(0));
    cout << "So dong: "; cin >> row;
    cout << "So cot: "; cin >> col;

    int array[row][col];

    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            array[i][j] = rand();


    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            cout << array[i][j] << "\t";
        cout << "\n";
    }   
    return 0;
}
#endif

#if 1 //Mảng trong hàm
#define ROW 100
#define COL 100
void nhapmang(int mt[ROW][COL], int &a, int &b);
void xuatmang(int mt[ROW][COL], int a, int b);
int tongdong(int mt[ROW][COL], int n, int d);
int tongcot(int mt[ROW][COL], int m, int c);

int main(){
    int m[ROW][COL];
    int row,col;

    nhapmang(m, row, col);
    xuatmang(m, row, col);

    // Tổng của 1 dòng bất kì
    int iRow;
    cout << "Dong can tinh tong: "; cin >> iRow;
    int sumrow = tongdong(m, col, iRow);
    cout << "Tong cua dong " << iRow <<" la " << sumrow << "\n";
    

    //Tổng của 1 cột bất kì
    int iCol;
    cout << "Cot can tinh tong: "; cin >> iCol;
    int sumcol = tongcot(m, row, iCol);
    cout << "Tong cua cot " << iCol <<" la " << sumcol << "\n";
    
    return 0;
}

void nhapmang(int mt[ROW][COL], int &a, int &b){
    srand(time(NULL));
    cout << "So dong: "; cin >> a;
    cout << "So cot: "; cin >> b;

    for(int i = 0; i < a; i++)
        for(int j = 0; j < b; j++)
            mt[i][j] = rand() % 100 ;
}

void xuatmang(int mt[ROW][COL], int a, int b){
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++)
            cout << mt[i][j] << "\t";
        cout << "\n";
    }
}

int tongdong(int mt[ROW][COL], int n, int d){
    int sum(0);
    for(int j = 0; j < n; j++) sum += mt[d][j]; 
    return sum;
}

int tongcot(int mt[ROW][COL], int m, int c){
    int sum(0);
    for(int j = 0; j < m; j++)
        sum += mt[c][j];
    cout << sum;
}
#endif