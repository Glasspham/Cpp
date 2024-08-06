#include <iostream>
#include <iomanip>
#include <typeinfo> 
#include <cstdlib>
#include <ctime>
#include <random>
#include <array>
#include <algorithm>

using namespace std;

#if 0 // Con trỏ void (hỗ trợ giúp ít function)
enum Type{
    INT,
    DOUBLE
};

void printValueOfPointer(void *ptr, Type type){
    switch (type){
    case INT:
        cout << *(static_cast<int*>(ptr)) << '\n'; // ép con trỏ void thành con trỏ int
        break;
    case DOUBLE:
        cout << *(static_cast<double*>(ptr)) << '\n'; // ép con trỏ void thành con trỏ double
        break;
    }
}

int main(){
    int nValue = 10;
    double dValue = 6.9;

    printValueOfPointer(&nValue, INT);
    printValueOfPointer(&dValue, DOUBLE);

    return 0;
}
#endif

#if 1 // Sắp xếp tăng giảm dùng con trỏ
#if 0 // Cách gọi 2 hàm
// hoán đổi giá trị hai số
void swapNumber(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

// hàm sắp xếp tăng sử dụng thuật toán selection sort
void selectionSortAsc(int *arr, int n){
    // One by one move boundary of unsorted subarray  
    for (int i = 0; i < n - 1; i++){
        // Find the minimum element in unsorted array  
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[min_idx] > arr[j])
                min_idx = j;
        // Swap the found minimum element with the first element  
        swapNumber(arr[min_idx], arr[i]);
    }
}

// hàm sắp xếp giảm sử dụng thuật toán selection sort
void selectionSortDesc(int *arr, int n){
    // One by one move boundary of unsorted subarray  
    for (int i = 0; i < n - 1; i++){
        // Find the maximum element in unsorted array  
        int max_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[max_idx] < arr[j])
                max_idx = j;            
        // Swap the found maximum element with the first element  
        swapNumber(arr[max_idx], arr[i]);
    }
}

/* Function to print an array */
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(int);

    // Sắp xếp tăng
    selectionSortAsc(arr, n);

    cout << "Asc array: \n";
    printArray(arr, n);

    // Sắp xếp giảm
    selectionSortDesc(arr, n);

    cout << "Desc array: \n";
    printArray(arr, n);

    return 0;
}
#endif

#if 0 // Chồng chất 2 hàm tăng giảm vào 1
void swapNumber(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

bool asc(int a, int b){
    return a > b;
}

bool desc(int a, int b){
    return a < b;
}

void selectionSort(int *arr, int n, bool(*comparisonFcn)(int, int)){
    int i, j, find_idx;
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n - 1; i++){
        // Find the minimum element in unsorted array  
        find_idx = i;
        for (j = i + 1; j < n; j++)            
            if (comparisonFcn(arr[find_idx], arr[j]))                
                find_idx = j;              
        // Swap the found minimum element with the first element  
        swapNumber(arr[find_idx], arr[i]);
    }
}

/* Function to print an array */
void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(int);

    // Sắp xếp tăng
    selectionSort(arr, n, asc);

    cout << "Asc array: \n";
    printArray(arr, n);

    // Sắp xếp giảm
    selectionSort(arr, n, desc);

    cout << "Desc array: \n";
    printArray(arr, n);

    
    return 0;
}
#endif
#endif
