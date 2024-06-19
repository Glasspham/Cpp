#include<bits/stdc++.h>
using namespace std;

/* Danh sách liên kết của thông tin sinh viên */
struct SinhVien{
    string name, id;
    double gpa;
};

struct SV{
    SinhVien info;
    SV *next;
};

typedef struct SV* sv;

/*Các hàm chức năng cho danh sách*/
// Cấp phát động một node mới
sv makeNode(){
    SinhVien info;
    cout << "Nhap thong tin sinh vien!\n";
    cout << "Nhap ID: "; cin >> info.id;
    cout << "Nhap ten: "; cin.ignore();
    getline(cin, info.name);
    cout << "Nhap GPA: "; cin >> info.gpa;
    sv tmp = new SV();
    tmp->info = info;
    tmp->next = NULL;
    return tmp;
}

// Kiểm tra rỗng
bool empty(sv a){
    return a == NULL;
}

// Kích thước danh sách
int SizeOf(sv a){
    int cnt = 0;
    while(a != NULL){
        ++cnt;
        a = a->next;
    }
    return cnt;
}

/*Các hàm hỗ trợ thêm 1 phần từ vào danh sách*/
// Thêm 1 phần tử vào đầu danh sách
void insertFirst(sv &a){
    sv tmp = makeNode();
    if(a == NULL) a = tmp;
    else{
        tmp->next = a;
        a = tmp;
    }
} 

// Thêm 1 phần tử vào cuối danh sách
void insertEnd(sv &a){
    sv tmp = makeNode();
    if(a == NULL) a = tmp;
    else{
        sv p = a;
        while(p->next  != NULL)
            p = p->next;
        p->next = tmp;
    }
}

// Thêm 1 phần tử vào giữa danh sách
void insertMiddle(sv &a, int pos){
    int n = SizeOf(a);
    if(pos <= 0 || pos > n + 1) {
        cout << "Vi tri chen khong hop le\n";
        return;
    }
    if(pos == 1){ insertFirst(a); return; }
    else if(pos == n + 1){ insertEnd(a); return; }
    sv p = a;
    for(int i = 1; i < pos - 1; ++i)
        p = p->next;
    sv tmp = makeNode();
    tmp->next = p->next;
    p->next = tmp;
}

/*Các hàm hỗ trợ xóa 1 phần từ vào danh sách*/
// Xóa 1 phần tử ở đầu danh sách
void deleteFirst(sv &a){
    if(a == NULL) return;
    a = a->next;
}

// Xóa 1 phần tử ở cuối danh sách
void deleteEnd(sv &a){
    if(a == NULL) return;
    sv front = NULL, after = a;
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
void deleteMiddle(sv &a, int pos){
    if(pos <= 0 || pos > SizeOf(a)){
        cout << "Vuot ngoai pham vi hop le!\n";
        return;
    }
    sv front = NULL, after = a;
    for(int i = 1; i < pos; ++i){
        front = after;
        after = after->next;
    }
    if(front == NULL) a = a->next;
    else front->next = after->next;
}

void in(SinhVien a){
    cout << a.id << ' ' << a.name << ' ' << a.gpa << endl;
}

void inList(sv a){
    cout << "------------------------------\n";
    while(a != NULL){
        in(a->info);
        a = a->next;
    }
}

void sapXepTangDan(sv &a){
    for(sv p = a; p->next != NULL; p = p->next){
        sv min = p;
        for(sv q = p->next; q != NULL; q = q->next)
            if(q->info.gpa < min->info.gpa)
                min = q;
        SinhVien tmp = min->info;
        min->info = p->info;
        p->info = tmp;
    }
}

void timKiem(sv a, int x){
    int cnt = 1;
    while(a != NULL){
        if(a->info.gpa == x){
            cout << cnt << endl;
            return;
        }
        a = a->next;
        ++cnt;
    }
    cout << "NOT FOUND\n";
}

int main(){
    sv head = NULL;
    while(1){
        cout << "-------------MENU-------------\n";
        cout << "1. Them sinh vien o dau.\n";
        cout << "2. Them sinh vien o giua.\n";
        cout << "3. Them sinh vien o cuoi.\n";
        cout << "4. Xoa sinh vien o dau.\n";
        cout << "5. Xoa sinh vien o giua.\n";
        cout << "6. Xoa sinh vien o cuoi.\n";
        cout << "7. Duyet danh sach lien ket.\n";
        cout << "8. Sap xep tang dan danh sach.\n";
        cout << "9. Tim kiem sinh vien trong danh sach.\n";
        cout << "------------------------------\n";
        cout << "Nhap lua: ";
        int lc; cin >> lc;
        if(lc == 0){
            cout << "Ket thuc chuong trinh!\n";
            break;
        }
        else if(lc == 1) insertFirst(head);
        else if(lc == 2){
            cout << "Nhap vi tri can chen: "; 
            int pos; cin >> pos;
            insertMiddle(head, pos);
        }
        else if(lc == 3) insertEnd(head);
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