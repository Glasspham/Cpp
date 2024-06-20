#include<iostream>
#include<fstream>
#include<algorithm>
#include<map>
#include<vector>
#define all(a) a.begin(),a.end()
#define fi first
#define se second
using namespace std;

bool check(string s){
    if(s.size() < 2) return false;
    string t = s;
    reverse(all(s)); // Từ thư viện <algorithm>
    return t == s;
}

bool cmp(pair<string, int> a, pair<string, int> b){
    return (a.fi.size() != b.fi.size() ? a.fi.size() > b.fi.size() : a > b);
}

int main(){
    ifstream ifile("Text.txt");
    #if 1 // Cách 1 khó hiểu
    auto cmp = [](const string a, const string b){
        return (a.size() != b.size() ? a.size() > b.size() : a > b);
    };
    map<string, int, decltype(cmp)> mp(cmp); // Từ thư viện <map>
    string s;
    while (ifile >> s)
        if(check(s)) 
            mp[s]++;
    for(auto it : mp)
        cout << it.fi << " " << it.se << endl;
    #endif

    #if 0 // Cách 2 dễ tiếp cận
    map<string, int> mp;
    string s;
    while (ifile >> s)
        if(check(s)) 
            mp[s]++;
    vector<pair<string, int>> v;
    for(auto it : mp)
        v.push_back(it);
    sort(all(v),cmp);
    for(auto it : v)
        cout << it.fi << " " << it.se << endl;
    #endif

    return 0;
}
