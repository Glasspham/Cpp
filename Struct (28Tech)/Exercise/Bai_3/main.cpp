#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

// Bài 3. Cấu trúc điểm trong tọa độ Oxy
struct point{
    double x,y;
};

void input(point &a){
    cin >> a.x >> a.y;
}

double distance(point &a, point &b){
    return sqrt(pow((b.x - a.x),2) + pow((b.y - a.y),2));
}

int main(){
    point A,B;
    int t;
    cin >> t;
    while (t--)
    {
        input(A);
        input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl; // Từ thư viện <iomanip>
    }
    return 0;
}