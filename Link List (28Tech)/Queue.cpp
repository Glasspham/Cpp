#include<bits/stdc++.h>
using namespace std;

// Xây dựng queue
struct Node{
    long long data;
    Node* next;
};

typedef struct Node* node;

bool empty(node back){
    return back == NULL;
}

int SizeOf(node back){
    int cnt = 0;
    while(back != NULL){
        ++cnt;
        back = back->next;
    }
    return cnt;
}

node makeNode(int x){
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}

void push(node &back, int x){
    node tmp = makeNode(x);
    tmp->next = back;
    back = tmp;
}

void pop(node &back){
    node front = NULL, after = back;
    while(after->next != NULL){
        front = after;
        after = after->next;
    }
    if(front == NULL) back = NULL;
    else front->next = NULL;
}

int front(node back){
    while(back->next != NULL) back = back->next;
    return back->data;
}

//Lấy ra những số đẹp 6 8 66 68 86 88 ...
int main(){
    node Queue = NULL;
    push(Queue,6);
    push(Queue,8);
    while(1){
        int top = front(Queue); pop(Queue);
        cout << top << ' ';
        string s = to_string(top);
        if(s.length() == 10) break;
        push(Queue, 10 * top + 6);
        push(Queue, 10 * top + 8);
    }
}

