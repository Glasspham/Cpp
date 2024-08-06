#include<bits/stdc++.h>
using namespace std;
// Quay lui in ra tổ hợp
int N, a[1000], k;

void in(){
    for(int i = 1; i <= k; ++i)
        cout << a[i];
    cout << endl;
}
// i = a[i - 1] + 1
// i <= N - k + i
void Try(int i){
    for(int j = a[i - 1] + 1; j <= N - k + i; ++j){
        a[i] = j;
        if(i == k) in();
        else Try(i + 1);
    }
}

int main(){
    cin >> N >> k;
    Try(1);
    return 0;
}