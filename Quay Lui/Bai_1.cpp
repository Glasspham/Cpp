#include<bits/stdc++.h>
using namespace std;
// Quay lui in ra số nhị phân
int N, a[100];

void in(){
    for(int i = 1; i <= N; ++i)
        cout << a[i];
    cout << endl;
}

void Try(int i){
    for(int j = 0; j <= 1; ++j){
        a[i] = j;
        if(i == N)
            in();
        else Try(i + 1);
    }
}

int main(){
    cin >> N;
    Try(1);
    return 0;
}