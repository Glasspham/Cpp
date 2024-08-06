#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    vector<int> odd, even;
    for(int &num : a){
        cin >> num;
        if(num % 2 != 0)
            odd.push_back(num);
        else
            even.push_back(num);
    }
    sort(begin(odd), end(odd), greater<int>());
    sort(begin(even), end(even));
    int i = 0, j = 0;
    for (int k = 0; k < n; ++k){
        if(a[k] % 2 == 0)
            cout << even[i++] << ' ';
        else
            cout << odd[j++] << ' ';
    }
    return 0;
}