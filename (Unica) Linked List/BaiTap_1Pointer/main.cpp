#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct Node {
    float data;
    Node* pNext;
} Node;

typedef struct SingleNode {
    Node* pHead;
} SingleNode;

void Initialize(SingleNode &a) {
    // a = new SingleNode;
    a.pHead = nullptr;
}

Node* CreateNode(float x) {
    Node* pNode = new Node();
    pNode->data = x;
    pNode->pNext = nullptr;
    return pNode;
}

bool Empty(SingleNode a) {
    return a.pHead == nullptr;
}

ll Size(SingleNode a) {
    Node* pTmp = a.pHead;
    ll cnt = 0;
    while(pTmp != nullptr) {
        ++cnt;
        pTmp = pTmp->pNext;
    }
    return cnt;
}

void Print(SingleNode a) {
    Node* pTmp = a.pHead;
    while(pTmp != nullptr) {
        cout << pTmp->data << ' ';
        pTmp = pTmp->pNext;
    }
}

void InsertFirst(SingleNode& a, float x){
    Node* pNode = CreateNode(x);
    if(a.pHead == nullptr) a.pHead = pNode;
    else {
        Node* pTmp = a.pHead;
        pNode->pNext = pTmp;
        a.pHead = pNode;
    }
}

void InsertLast(SingleNode& a, float x) {
    Node* pNode = CreateNode(x);
    if(a.pHead == nullptr) a.pHead = pNode;
    else {
        Node* pTmp = a.pHead;
        while(pTmp->pNext != nullptr)
            pTmp = pTmp->pNext;
        pTmp->pNext = pNode;
    }
}

void InsertMid(SingleNode& a, int pos, float x) {
    if(pos < 0 or pos + 1 > Size(a)) {
        cerr << "Invalid position";
        return;
    }
    if(pos == 0) InsertFirst(a, x);
    else if(pos == Size(a) - 1) InsertFirst(a, x);
    else {
        Node* pNode = CreateNode(x);
        Node* pIns = a.pHead; // pointer to Insert position
        Node* pPre = nullptr; // previous node
        int i = 0;
        while(pIns != nullptr) {
            if(i == pos) break;
            ++i;
            pPre = pIns;
            pIns = pIns->pNext;
        }
        pNode->pNext = pIns;
        pPre->pNext = pNode;
    }
}

float Sum(SingleNode a) {
    Node* pTmp = a.pHead;
    float sum = 0;
    while(pTmp != nullptr) {
        sum += pTmp->data;
        pTmp = pTmp->pNext;
    }
    return sum;
}

int Find(SingleNode a, float x) {
    Node* pTmp = a.pHead;
    int i = 0;
    while(pTmp != nullptr) {
        if(pTmp->data == x) return i;
        ++i;
        pTmp = pTmp->pNext;
    } return -1;
}

void Sort(SingleNode& a) {
    for(Node* p = a.pHead; p->pNext != nullptr; p = p->pNext) {
        Node* node = p;
        for(Node* q = p->pNext; q != nullptr; q = q->pNext)
            if(q->data < node->data)
                node = q;
        int value = node->data;
        node->data = p->data;
        p->data =  value; 
    }
}

void Remove(SingleNode& a, float x) {
    if(a.pHead == nullptr) {
        cerr << "Invalid list";
        return;
    }
    int i = 0;
    Node* pDel = a.pHead;
    Node* pPre = nullptr;
    while(pDel != nullptr) {
        if(pDel->data == x) break;
        pPre = pDel;
        pDel = pDel->pNext;
    }
    if(pDel == nullptr) {
        cout << "Coudn't found  number!\n";
        return;
    }
    if(pDel == a.pHead) {
        a.pHead = a.pHead->pNext;
        pDel->pNext = nullptr;
        delete pDel;
        pDel = nullptr;
    } else {
        pPre->pNext = pDel->pNext;
        pDel->pNext = nullptr;
        delete pDel;
        pDel = nullptr;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    SingleNode a;
    Initialize(a);
    InsertLast(a, 1);
    InsertLast(a, 2);
    InsertLast(a, 3);
    InsertMid(a, 1, 4);
    Print(a);
    cout << endl << Sum(a) << endl;
    Print(a);
    cout << endl;
    Sort(a);
    Print(a);
    return 0;
}