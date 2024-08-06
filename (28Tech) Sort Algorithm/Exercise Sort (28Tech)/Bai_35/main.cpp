#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    pair<int,int> a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a, a + n);
    int end_time = a[0].first + a[0].second;
    for(int i = 1; i < n; ++i)
        end_time = max(end_time, a[i].first) + a[i].second;
    cout << end_time << endl;
}