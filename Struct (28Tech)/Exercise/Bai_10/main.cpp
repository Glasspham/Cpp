#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;

// Bài 10. Cấu trúc tuổi, tìm người già nhất, trẻ nhất.
struct person{
    string ten,ns;
};

bool cmp(person a, person b){
    string s = a.ns, t = b.ns;
    int d1 = (s[0] - '0') * 10 + (s[1] - '0'), m1 = (s[3] - '0') * 10 + (s[4] - '0'), y1 = (stoi(s.substr(6)));
    int d2 = (t[0] - '0') * 10 + (t[1] - '0'), m2 = (t[3] - '0') * 10 + (t[4] - '0'), y2 = (stoi(t.substr(6)));
    if(y1 != y2) return y1 < y2;
    if(m1 != m2) return m1 < m2;
    return d1 < d2;
}

int main(){
    ifstream ifile("Text1.txt");
    int n; ifile >> n;
    person a[n];
    for(int i = 0; i < n; i++)
        ifile >> a[i].ten >> a[i].ns;

    sort(a, a + n, cmp);
    cout << a[n-1].ten << endl << a[0].ten << endl;
}