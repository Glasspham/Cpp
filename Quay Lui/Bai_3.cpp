#include<bits/stdc++.h>
using namespace std;
// Quay lui in ra hóa vị
int N, a[1000], used[100];

void in(){
    for(int i = 1; i <= N; ++i)
        cout << a[i];
    cout << endl;
}

void Try(int i){
    for(int j = 1; j <= N; ++j){
        if(used[j] == 0){
            a[i] = j;
            used[j] = 1; // Đánh dấu đã dùng
            if(i == N) in();
            else Try(i + 1);
            used[j] = 0; // Xóa bỏ đánh dấu
        }
    }
}

int main(){
    cin >> N;
    Try(1);
    return 0;
}