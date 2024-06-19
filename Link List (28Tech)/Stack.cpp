#include<bits/stdc++.h>
using namespace std;

// Xây dựng stack

struct Node{
    int data;
    Node* next;
};

typedef struct Node* node;

bool empty(node top){
    return top == NULL;
}

int SizeOf(node top){
    int cnt = 0;
    while(top != NULL){
        ++cnt;
        top = top->next;
    }
    return cnt;
}

node makeNode(int x){
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}

void push(node &top, int x){
    node tmp = makeNode(x);
    if(top == NULL) top = tmp;
    else{
        tmp->next = top;
        top = tmp;
    }
}

void pop(node &top){
    if(top == NULL) return;
    top = top->next;
}

int getTop(node top){
    return top->data;
}

int main(){
    node top = NULL;
    long long n; cin >> n;
    while(n){
        int r = n % 2;
        push(top, r);
        n /= 2;
    }
    while (!empty(top)){
        cout << getTop(top);
        pop(top);
    }
}