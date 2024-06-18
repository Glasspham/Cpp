#include<iostream>
using namespace std;

class SoPhuc{
private:
    int thuc, ao;
public:
    friend istream& operator >> (istream& in, SoPhuc &a){
        in >> a.thuc >> a.ao;
        return in;
    }

    friend ostream& operator << (ostream& out, SoPhuc &a){
        out << a.thuc;
        if(a.ao > 0) out << '+' << a.ao << 'i';
        else out << a.ao << 'i';
        return out;
    }

    SoPhuc operator + (SoPhuc another){
        SoPhuc tong;
        tong.thuc = this->thuc + another.thuc;
        tong.ao = this->ao + another.ao;
        return tong;
    }

    SoPhuc operator - (SoPhuc another){
        SoPhuc hieu;
        hieu.thuc = this->thuc - another.thuc;
        hieu.ao = this->ao - another.ao;
        return hieu;
    }
};