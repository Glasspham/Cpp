#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
#define PI 3.141592653589793238

// Bài 8. Diện tích hình tròn ngoại tiếp tam giác
struct point{
    double x,y;
    double distance(point p){
        return sqrt(pow((p.x - x),2) + pow((p.y - y),2));
    }     
};

void solve(point A, point B, point C){
    double x1 = A.distance(B), x2 = A.distance(C), x3 = B.distance(C);
    if(x1 <= 0 || x2 <= 0 || x3 <= 0 || x1 + x2 < x3 || x1 + x3 < x2 || x2 + x3 < x1)
        cout << "INVALID \n";
    else{
        double p = (x1 + x2 + x3)/2;
        double S = sqrt(p * (p - x1) * (p - x2) * (p - x3));
        double r = (x1 * x2 * x3)/(4 * S);
        cout << "Dien tich hinh tron ngoai tiep tam giac la: " << fixed << setprecision(3) << PI * r * r << endl;
    }      
}

int main(){
    int t;
    cout << "So lan test: ";
    cin >> t;
    while (t--){
        point A,B,C;
        cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
        solve(A,B,C);
    }
    return 0;
}