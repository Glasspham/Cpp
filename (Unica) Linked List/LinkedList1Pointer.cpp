#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct Node {
    int data;
    Node* pNext;
} Node;

typedef struct SingleNode {
    Node* pHead;
} SingleNode;

void Initialize(SingleNode& a) {
    a.pHead = nullptr;
}

Node* CreateNode(int x) {
    Node* pNode = new Node();
    pNode->data = x;
    pNode->pNext = nullptr;
    return pNode;
}

void PrintList(SingleNode a) {
    Node* pTmp = a.pHead;
    if(pTmp == nullptr) {
        cout << "The list is empty!\n";
        return;
    } 
    while(pTmp != nullptr) {
        cout << pTmp->data << ' ';
        pTmp = pTmp->pNext;
    }
}

int Size(SingleNode a) {
    Node* pTmp = a.pHead;
    int cnt = 0;
    while(pTmp != nullptr) {
        ++cnt;
        pTmp = pTmp->pNext;
    }
    return cnt;
}

void InsertFirst(SingleNode &a, int x) {
    Node* pNode = CreateNode(x);
    if(a.pHead == nullptr) a.pHead = pNode;
    else {
        pNode->pNext = a.pHead;
        a.pHead = pNode;
    }
}

void InsertLast(SingleNode &a, int x) {
    Node* pNode = CreateNode(x); 
    if(a.pHead == nullptr) a.pHead = pNode;
    else {
        Node* pTmp = a.pHead;
        while(pTmp->pNext != nullptr) 
            pTmp = pTmp->pNext;
        pTmp->pNext = pNode;
    }
}

void InsertMid(SingleNode &a, int pos, int x) {
    if(pos < 0 or pos >= Size(a)) {
        cerr << "Invalid position!\n";
        return;
    } 
    else if(pos == 0) InsertFirst(a, x);
    else if(pos == sizeof(a) - 1) InsertLast(a, x);
    else {
        Node* pNode = CreateNode(x);
        Node* pIns = a.pHead;
        Node* pPre = nullptr;
        int i = 0;
        while(pIns != nullptr) {
            if(i == pos) break;
            pPre = pIns;
            pIns = pIns->pNext;
            i++;
        }
        pPre->pNext = pNode;
        pNode->pNext = pIns;
    }
}

void RemoveNode(SingleNode &a, int x) {
    if(a.pHead == nullptr) {
        cerr << "The list is empty!\n";
        return;
    }
    Node* pDel = a.pHead;
    Node* pPre = nullptr;
    while(pDel != nullptr) {
        if(pDel->data == x) break;
        pPre = pDel;
        pDel = pDel->pNext;
    }
    if(pDel == nullptr) {
        cerr << "Coudn't found  number!\n";
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

Node* Find(SingleNode a, int x) {
    Node* pTmp = a.pHead;
    while(pTmp != nullptr) {
        if(pTmp->data == x) break;
        pTmp = pTmp->pNext;
    }
    return pTmp;
}

void Sort(SingleNode& a) {
    if(a.pHead == nullptr) return;
    for(Node* p = a.pHead; p->pNext != nullptr; p = p->pNext) {
        Node* min_val = p;
        for(Node* q = p->pNext; q != nullptr; q = q->pNext)
            if(q->data < min_val->data)
                min_val = q;
        int value = min_val->data;
        min_val->data = p->data;
        p->data = value;
    }
}

void FreeMemory(SingleNode& a) {
    cout << "Free up memory!" << endl;
    while(a.pHead != nullptr) {
        Node* pTmp = a.pHead;
        a.pHead = a.pHead->pNext;
        pTmp->pNext = nullptr;
        delete pTmp;
        pTmp = nullptr;
    }
    cout << "Complete!";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    SingleNode a;
    Initialize(a);
    InsertFirst(a, 1);
    InsertFirst(a, 2);
    InsertLast(a, 3);
    InsertFirst(a, 4);
    InsertFirst(a, 5);
    InsertLast(a, 6);
    InsertFirst(a, 7);
    InsertFirst(a, 8);
    InsertMid(a, 2, 9);
    PrintList(a);
    Sort(a);
    cout << endl;
    PrintList(a);
    cout << endl;
    FreeMemory(a);
    cout << endl;
    PrintList(a);
    return 0;
}