#include<bits/stdc++.h>
using namespace std;

void binary_queue(int n){
    queue<string> q;
    q.push("0");
    q.push("1");
    while (q.front().size()  != n){
        string s = q.front();
        q.pop();
        q.push(s + "0");
        q.push(s + "1");
    }
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}

int main(){
    int n; cin >> n;
    binary_queue(n);
    return 0;
}
