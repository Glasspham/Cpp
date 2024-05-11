#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<string>res;
void init_binary(){
    queue<string> tmp;
    tmp.push("1");
    res.push_back("1");
    while(res.size() < 10000){
        string top = tmp.front();
        tmp.pop();
        res.push_back(top + "0");
        res.push_back(top + "1");
        tmp.push(top + "0");
        tmp.push(top + "1");
    }
}

int main(){
    int t; cin >> t;
    init_binary();
    while(t--){
        int n; cin >> n;
        for(int i = 0; i < n; ++i)
            cout << res[i] << ' ';
        cout << endl;
    }
    return 0;
}