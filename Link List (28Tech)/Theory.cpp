#include<bits/stdc++.h>
using namespace std;

/* Danh sách liên kết của số nguyên */
struct Node{
    int data;
    Node *next;
};

typedef struct Node* node;

/*Các hàm chức năng cho danh sách*/
// Cấp phát động một node mới
node makeNode(int x){
    node tmp = new Node();
    tmp->data = x;
    tmp->next = nullptr;
    return tmp;
}

// Kiểm tra rỗng
bool empty(node a){
    return a == NULL;
}

// Kích thước danh sách
int SizeOf(node a){
    int cnt = 0;
    while(a != NULL){
        ++cnt;
        a = a->next;
    }
    return cnt;
}

/*Các hàm hỗ trợ thêm 1 phần từ vào danh sách*/
// Thêm 1 phần tử vào đầu danh sách
void insertFirst(node &a, int x){
    node tmp = makeNode(x);
    if(a == NULL) a = tmp;
    else{
        tmp->next = a;
        a = tmp;
    }
} 

// Thêm 1 phần tử vào cuối danh sách
void insertEnd(node &a, int x){
    node tmp = makeNode(x);
    if(a == NULL) a = tmp;
    else{
        node p = a;
        while(p->next  != NULL)
            p = p->next;
        p->next = tmp;
    }
}

// Thêm 1 phần tử vào giữa danh sách
void insertMiddle(node &a, int x, int pos){
    int n = SizeOf(a);
    if(pos <= 0 || pos > n + 1) {
        cout << "Vi tri chen khong hop le\n";
        return;
    }
    if(pos == 1){ insertFirst(a,x); return; }
    else if(pos = n + 1){ insertEnd(a,x); return; }
    node p = a;
    for(int i = 1; i < pos - 1; ++i)
        p = p->next;
    node tmp = makeNode(x);
    tmp->next = p->next;
    p->next = tmp;
}

/*Các hàm hỗ trợ xóa 1 phần từ vào danh sách*/
// Xóa 1 phần tử ở đầu danh sách
void deleteFirst(node &a){
    if(a == NULL) return;
    a = a->next;
}

// Xóa 1 phần tử ở cuối danh sách
void deleteEnd(node &a){
    if(a == NULL) return;
    node front = NULL, after = a;
    while(after->next != NULL){
        front = after;
        after = after->next;
    }
    if(front == after){
        a = NULL;
    }
    else front->next = NULL;
}

// Xóa 1 phần tử ở giữa danh sách
void deleteMiddle(node &a, int pos){
    if(pos <= 0 || pos > SizeOf(a)){
        cout << "Vuot ngoai pham vi hop le!\n";
        return;
    }
    node front = NULL, after = a;
    for(int i = 1; i < pos; ++i){
        front = after;
        after = after->next;
    }
    if(front == NULL) a = a->next;
    else front->next = after->next;
}

void inList(node a){
    cout << "------------------------------\n";
    while(a != NULL){
        cout << a->data << ' ';
        a = a->next;
    }
    cout << endl;
}

void sapXepTangDan(node &a){
    for(node p = a; p->next != NULL; p = p->next){
        node min = p;
        for(node q = p->next; q != NULL; q = q->next)
            if(q->data < min->data)
                min = q;
        int tmp = min->data;
        min->data = p->data;
        p->data = tmp;
    }
}

void timKiem(node a, int x){
    int cnt = 1;
    while(a != NULL){
        if(a->data == x){
            cout << cnt << endl;
            return;
        }
        a = a->next;
        ++cnt;
    }
    cout << "NOT FOUND\n";
}

int main(){
    node head = NULL;
    while(1){
        cout << "-------------MENU-------------\n";
        cout << "1. Them phan tu o dau.\n";
        cout << "2. Them phan tu o giua.\n";
        cout << "3. Them phan tu o cuoi.\n";
        cout << "4. Xoa phan tu o dau.\n";
        cout << "5. Xoa phan tu o giua.\n";
        cout << "6. Xoa phan tu o cuoi.\n";
        cout << "7. Duyet danh sach lien ket.\n";
        cout << "8. Sap xep tang dan danh sach.\n";
        cout << "9. Tim kiem phan tu trong danh sach.\n";
        cout << "------------------------------\n";
        cout << "Nhap lua: ";
        int lc; cin >> lc;
        if(lc == 0){
            cout << "Ket thuc chuong trinh!\n";
            break;
        }
        else if(lc == 1){
            cout << "Nhap gia tri can chen: "; 
            int x; cin >> x;
            insertFirst(head, x);
        }
        else if(lc == 2){
            cout << "Nhap gia tri can chen va vi tri: "; 
            int x, pos; cin >> x >> pos;
            insertMiddle(head, x, pos);
        }
        else if(lc == 3){
            cout << "Nhap gia tri can chen: "; 
            int x; cin >> x;
            insertEnd(head, x);
        }
        else if(lc == 4) deleteFirst(head);
        else if(lc == 5){
            cout << "Nhap vi tri can xoa: ";
            int pos; cin >> pos;
            deleteMiddle(head,pos);
        }
        else if(lc == 6) deleteEnd(head);
        else if(lc == 7) inList(head);
        else if(lc == 8) sapXepTangDan(head);
        else if(lc == 9) {
            cout << "Nhap gia tri can tim: ";
            int x; cin >> x;
            timKiem(head,x);
        }
    }
}