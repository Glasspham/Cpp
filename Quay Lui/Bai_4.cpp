#include<bits/stdc++.h>
using namespace std;
// Quay lui in ra vi tri dat quan hau
int N, a[100], cot[100], dcx[100], dcn[100], x[100][100];

void in(){
    memset(x,0,sizeof(x));
    for(int i = 1; i <= N; ++i)
        x[i][a[i]] = 1;
    for(int i = 1; i <= N; ++i){
        for(int j = 1; j <= N; ++j){
            cout << x[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void Try(int i){
    for(int j = 1; j <= N; ++j){
        if(cot[j] == 0 and dcx[i - j + N] == 0 and dcn[i + j - 1] == 0){
            cot[j] = dcx[i - j + N] = dcn[i + j - 1] = 1;
            a[i] = j;
            if(i == N) in();
            else Try(i + 1);
            cot[j] = dcx[i - j + N] = dcn[i + j - 1] = 0;
        }
    }
}

int main(){
    cin >> N;
    Try(1);
    return 0;
}