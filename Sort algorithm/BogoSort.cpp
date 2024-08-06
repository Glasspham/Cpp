#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ofstream ofile("Output.txt");

// Function to check if the array is sorted
bool isSorted(int arr[], int n){
    for(int i = 0; i < n - 1; ++i)
        if(arr[i] > arr[i + 1])
            return false;
    return true;
}

// Function to shuffle the elements of the array
void shuffle(int arr[], int n){
    for(int i = n - 1; i >= 0; --i){
        int j = rand() % (i + 1);
        swap(arr[i],arr[j]);
    }
}

void print(int arr[], int n){
    for(int i = 0; i < n; ++i)
        ofile << arr[i] << ' ';
    ofile << endl;
}

// Bogosort function
void bogosort(int arr[], int n){
    int i = 0;
    while(!isSorted(arr,n)){
        shuffle(arr,n);
        ofile << "Lan thu " << ++i << ": ";
        print(arr,n);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    auto start = chrono::high_resolution_clock::now();
        srand(static_cast<unsigned>(time(0)));
        int arr[11] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
        ofile << "Original array: ";
        for(int x : arr) ofile << x << ' ';
        ofile << endl;
        bogosort(arr,11);
        ofile << "Sorted array: ";
        for(int x : arr) ofile << x << ' ';
        ofile << endl;
    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> elapsed = end - start;
    cout << elapsed.count() << 's';
    return 0;
}