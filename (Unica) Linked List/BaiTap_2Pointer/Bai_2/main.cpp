#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct Fraction{
    ll num;
    ll dem;
} Fraction;

typedef struct Node {
    Fraction* data;
    Node* pNext;
} Node;

typedef struct Single {
    Node* pHead;
    Node* pTail;
} Single;

Node* Create(ll num, ll dem) {
    Fraction* ps = new Fraction();
    ps->num = num;
    ps->dem = dem;
    Node* pNode = new Node();
    pNode->data = ps;
    pNode->pNext = nullptr;
    return pNode;
}

void Initialize(Single &a) {
    a.pHead = a.pTail = nullptr;
}

void InsertLast(Single &a, ll num, ll dem) {
    Node* pNode = Create(num, dem);
    if(a.pTail == nullptr) a.pHead = a.pTail = pNode;
    else {
        a.pTail->pNext = pNode;
        a.pTail = pNode;
    }
}

void Print(Single a) {
    Node* pNode = a.pHead;
    while(pNode != nullptr) {
        cout << pNode->data->num << '/' << pNode->data->dem;
        if(pNode->pNext != nullptr) cout << " + ";
        pNode = pNode->pNext;
    }
}

ll Factorial(ll n) {
    if(n <= 1) return 1;
    return n * Factorial(n - 1);
}

double Sum(Single a) {
    Node* pNode = a.pHead;
    double sum = 0;
    while(pNode != nullptr) {
        sum += 1.0 * pNode->data->num / pNode->data->dem;
        pNode = pNode->pNext;     
    } return sum;
}

int main() {
    cout << "Enter x: ";
    int x; cin >> x;
    cout << "Entre n: ";
    int n; cin >> n;
    Single a;
    Initialize(a);
    for(int i = 1; i <= n; ++i) {
        ll num = (ll)pow(x, i);
        ll dem = Factorial((ll)i);
        InsertLast(a, num, dem);
    }
    Print(a);
    cout << endl << Sum(a);
    return 0;
}