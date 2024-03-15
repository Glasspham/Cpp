#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &num : a) cin >> num;
    sort(a + 1, a + n, greater<int>());
    int sum = a[0];
    for(int i = 1; i < n; i++){
        if(k > 0) sum += a[i];
        else sum -= a[i];
        --k;
    }
    cout << sum << endl;
}