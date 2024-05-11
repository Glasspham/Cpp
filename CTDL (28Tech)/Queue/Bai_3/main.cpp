#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

vector<string>res;
void init_NineZero(){
    queue<string>tmp;
    tmp.push("6"), tmp.push("8");
    res.push_back("6"), res.push_back("8");
    while (1){
        string top = tmp.front();
        tmp.pop();
        if(top.size() == 15) break;
        tmp.push(top + "6");
        tmp.push(top + "8");
        res.push_back(top + "6");
        res.push_back(top + "8");
    }
}

int main(){
    int t; cin >> t;
    init_NineZero();
    while(t--){
        int n; cin >> n;
        vector<string>tmp;
        for(string i : res){
            if(i.length() == n + 1) break;
            tmp.push_back(i);
        }
        reverse(tmp.begin(), tmp.end());
        for(string i : tmp)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}