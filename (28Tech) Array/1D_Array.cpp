#include <iostream>
#include <iomanip>
#include <typeinfo> 
#include <cstdlib>
#include <ctime>
#include <random>
#include <array>
#include <algorithm>

using namespace std;

#define Max 1000
void nhapmang(int arr[], int &n);
void xuatmang(int arr[], int n);
void saochepmangmotchieu(int arrDest[], int arrSoure[], int n);
int timkiemphantu(int arr[], int n, int x);
void hoanvi(int &a, int &b);
void sapxeptangdan(int arr[], int n);
void them1phantuvaomang(int a[], int &n, int idx, int x);
void xoa1phantutrongmang(int a[], int &n, int idx);

int main(){
    #if 1 //Nhập và xuất mảng
        int myarray[Max];
        int nsize;
        nhapmang(myarray, nsize);
        xuatmang(myarray, nsize);
    #endif

    #if 1 //Sao chép phần tử từ mảng này sang mảng khác
        int array2[Max];
        cout << "Sau khi sao chep sang mang thu 2" << "\n";
        saochepmangmotchieu(array2, myarray, nsize);
        xuatmang(array2, nsize);
    #endif

    #if 0 //Tìm kiếm 1 phần tử bên trong mảng
        int x;
        int idx;

        cout << "Gia tri can tim trong mang:";
        cin >> x;
        
        idx = timkiemphantu(myarray, nsize, x);
        if(idx == -1) cout << "Khong tim thay gia tri!" << "\n";
        else cout << "Gia tri " << x << " nam thu " << idx << " trong mang" << "\n";
    #endif

    #if 0 //Sắp xếp các phần tử lại từ nhỏ đến lớn
        cout << "Sau khi sap xep tang dan" << "\n";
        sapxeptangdan(myarray, nsize);
        xuatmang(myarray, nsize);
    #endif

    #if 0 //Thêm 1 phần tử cho mảng
        int z;
        int idx;
        cout << "Gia tri muon them vao trong mang: ";
        cin >> z;
        cout << "Vi tri muon thay doi: ";
        cin >> idx;
        them1phantuvaomang(myarray, nsize, idx, z);
        xuatmang(myarray, nsize);
    #endif

    #if 0 //Xóa 1 phẩn tử của mảng
        int idx;
        cout << "Vi tri so can xoa: ";
        cin >> idx;
        xoa1phantutrongmang(myarray, nsize, idx);
        xuatmang(myarray, nsize);
    #endif

    return 0;
}

void nhapmang(int arr[], int &n){
    srand(time(0));
    cout << "Nhap so phan tu:"; cin >> n;
    for(int i = 0; i < n; i++) arr[i] = rand();
}

void xuatmang(int arr[], int n){
    for( int i = 0; i < n; i++)
        cout << "Array [" << i << "] =" << arr[i] << "\n";
}

void saochepmangmotchieu(int arrDest[], int arrSoure[], int n){
    for( int i = 0; i < n; i++) arrDest[i] = arrSoure[i];
}

int timkiemphantu(int arr[], int n, int x){
    for( int i = 0; i < n; i++)
        if(arr[i] == x)
            return i;
    return -1;
}

void hoanvi(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void sapxeptangdan(int arr[], int n){
    for( int i = 0; i < n - 1; i++)
        for( int j = i + 1; j < n; j++)
            if(arr[i] > arr[j])
                hoanvi(arr[i], arr[j]);
}

void them1phantuvaomang(int a[], int &n, int idx, int x){
    if(idx >= 0 && idx <= n){
        for( int i = n; i > idx; i--)
            a[i] = a[i - 1];
        a[idx] = x;
        n++;
    }
}

void xoa1phantutrongmang(int a[], int &n, int idx){
    if(idx >= 0 && idx < n){
        for(int i = idx; i < n; i++)
            a[i] = a[i + 1];
        n--;
    }
}
