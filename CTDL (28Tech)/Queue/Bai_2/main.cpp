#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<long long>res;
void init_NineZero(){
    queue<string>tmp;
    tmp.push("9");
    res.push_back(9);
    while (1){
        string top = tmp.front();
        tmp.pop();
        if(top.size() == 11) break;
        tmp.push(top + "0");
        tmp.push(top + "9");
        res.push_back(stoll(top + "0"));
        res.push_back(stoll(top + "9"));
    }
}

int main(){
    int t; cin >> t;
    init_NineZero();
    while(t--){
        int n; cin >> n;
        for(long long i : res)
            if(i % n == 0){
                cout << i << endl;
                break;
            }
    }
    return 0;
}