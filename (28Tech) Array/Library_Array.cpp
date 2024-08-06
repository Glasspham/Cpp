#include <iostream>
#include <iomanip>
#include <typeinfo> 
#include <cstdlib>
#include <ctime>
#include <random>
#include <array>
#include <algorithm>

using namespace std;

// Cách khác khai báo mảng bằng thư viện array
#define max 5
void printArray(const array<int, max> &arr){
    cout << "So phan tu trong mang: " << arr.size() <<"\n";
    for(const auto &item : arr)
        cout << item << "\n";
    cout << "\n";
}

int main(){
    srand(time(0));
    array<int, max> arr;
    for(int i = 0; i < max; i++)
        arr[i] = rand() % 100 + 1;
    printArray(arr);

    cout << "Sap xep tang dan" << "\n";
    sort(arr.begin(), arr.end());
    printArray(arr);
    
    cout << "Sap xep giam dan" << "\n";
    sort(arr.rbegin(), arr.rend());
    printArray(arr);
}