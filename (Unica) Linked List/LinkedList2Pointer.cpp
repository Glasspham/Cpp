#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct Node {
    int data;
    Node* pNext;
} Node;

typedef struct SingleList {
    Node* pHead;
    Node* pTail;
} SingleList;

void Initialize(SingleList &a) {
    a.pHead = a.pTail = nullptr;
}

Node* CreateNode(int x) {
    Node* pNode = new Node();
    pNode->data = x;
    pNode->pNext = nullptr;
    return pNode;
}

bool Empty(SingleList a) {
    return a.pHead == nullptr;
}

int Size(SingleList a) {
    Node* pNode = a.pHead;
    int cnt = 0;
    while(pNode != nullptr) {
        ++cnt;
        pNode = pNode->pNext;
    }
    return cnt;
}

void Print(SingleList a) {
    Node* node = a.pHead;
    while(node != nullptr) {
        cout << node->data << '\t';
        node = node->pNext;
    }
}

void InsertFirst(SingleList &a, int x) {
    Node* pNode = CreateNode(x);
    if(a.pHead == nullptr) a.pHead = a.pTail = pNode;    
    else {
        pNode->pNext = a.pHead;
        a.pHead = pNode;
    }
}

void InsertLast(SingleList &a, int x) {
    Node* pNode = CreateNode(x);
    if(a.pHead == nullptr) a.pHead = a.pTail = pNode;
    else {
        a.pTail->pNext = pNode;
        a.pTail = pNode;
    }
}

void InsertMid(SingleList &a, int pos, int x) {
    if(pos < 0 or pos > Size(a) - 1) {
        cout << "Invalid position!\n";
        return;
    }
    if(pos == 0) InsertFirst(a, x);
    else if(pos + 1 == Size(a)) InsertLast(a, x);
    else {
        Node* pNode = CreateNode(x);
        Node* pIns = a.pHead;
        Node* pPre = nullptr;
        int i = 0;
        while(pIns != nullptr) {
            if(i == pos) break;
            ++i;
            pPre = pIns;
            pIns = pIns->pNext;
        }
        pPre->pNext = pNode;
        pNode->pNext = pIns;
    }
}

void Remove(SingleList &a, int x) {
    if(a.pHead == nullptr) {
        cerr << "The list is empty!\n";
        return;
    }
    Node* pIns = a.pHead;
    Node* pPre = nullptr;
    while(pIns != nullptr) {
        if(pIns->data == x) break;
        pPre = pIns;
        pIns = pIns->pNext;
    }
    if(pIns == nullptr) {
        cerr << "Coudn't found  number!\n";
        return;
    }
    if(pIns == a.pHead) {
        a.pHead = a.pHead->pNext;
        pIns->pNext = nullptr;
        delete pIns;
        pIns = nullptr;
    } else if(pIns->pNext == nullptr) {
        a.pTail = pPre;
        pPre->pNext = nullptr;
        delete pIns;
        pIns = nullptr;
    } else {
        pPre->pNext = pIns->pNext;
        pIns->pNext = nullptr;
        delete pIns;
        pIns = nullptr;
    }
}

Node* Find(SingleList a, int x) {
    Node* pNode = a.pHead;
    while(pNode != nullptr) {
        if(pNode->data == x) break;
        pNode = pNode->pNext;
    }
    return pNode;
}

void Sort(SingleList &a) {
    for(Node* p = a.pHead; p->pNext != nullptr; p = p->pNext) {
        Node* value = p;
        for(Node* q = p->pNext; q != nullptr; q = q->pNext) 
            if(q->data < value->data)
                swap(q, value);
        int tmp = p->data;
        p->data = value->data;
        value->data = tmp;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    SingleList a;
    Initialize(a);
    InsertFirst(a, 1);
    InsertLast(a, 2);
    InsertLast(a, 3);
    InsertMid(a, 1, 0);
    Print(a);
    return 0;
}