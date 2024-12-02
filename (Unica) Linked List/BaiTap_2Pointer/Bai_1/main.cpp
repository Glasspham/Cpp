#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct Node {
    int x, i;
    Node* pNext;
} Node;

typedef struct SingleNode {
    Node* pHead;
    Node* pTail;
} SingleNode;

void Initialize(SingleNode &a) {
    a.pHead = a.pTail = nullptr;
}

Node* CreateNode(int x, int i) {
    Node* pNode = new Node();
    pNode->i = i;
    pNode->x = x;
    pNode->pNext = nullptr;
    return pNode;
}

void InsertLast(SingleNode &a, int x, int i) {
    Node* pNode = CreateNode(x, i);
    if(a.pTail == nullptr)
        a.pHead = a.pTail = pNode;
    else {
        a.pTail->pNext = pNode;
        a.pTail = pNode;
    }
}

void Print(SingleNode a) {
    Node* pNode = a.pHead;
    while(pNode != nullptr) {
        cout << pNode->x << "^" << pNode->i;
        if(pNode->pNext != nullptr) cout << " + ";
        pNode = pNode->pNext;
    }
}

double Sum(SingleNode a) {
    double total = 0;
    for(Node* p = a.pHead; p != nullptr; p = p->pNext)
        total += 1.0 * pow(p->x, p->i);
    return total;
}

int main() {
    SingleNode a;
    Initialize(a);
    cout << "Enter x: ";
    int x; cin >> x;
    cout << "Enter n: ";
    int n; cin >> n;
    for(int i = 1; i <= n; ++i)
        InsertLast(a, x, i);
    cout << "Print list: ";
    Print(a);
    cout << endl << Sum(a);
    return 0;
}