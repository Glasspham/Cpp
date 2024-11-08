#include <iostream>
using namespace std;
#define SIZE 3
char b[SIZE][SIZE] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
int p = 1;
bool g = false;
bool t = false;
void pb(){
    cout << "-------------" << endl;
    for (unsigned int i = 0; i < SIZE; i++){
        for (unsigned int j = 0; j < SIZE; j++)
            cout << "| " << b[i][j] << " ";
        cout << "|" << endl;
        cout << "-------------" << endl;
    }
}

void update(){
    char m;
    p = (p % 2) ? 1 : 2;
    m = (p == 1) ? 'X' : 'O';
    int x, y;
    do{
        cout << "Nguoi Choi " << p << ", vui long nhap vi tri ban chon: ";
        cin >> x >> y;
    } while (x > 2 || y > 2 || b[x][y] != ' ');
    if (b[x][y] == ' ')
        b[x][y] = m;
    p++;
}

bool k(){
    if (b[0][0] != ' ' && b[0][0] == b[0][1] && b[0][1] == b[0][2])
        return true;
    else if (b[1][0] != ' ' && b[1][0] == b[1][1] && b[1][1] == b[1][2])
        return true;
    else if (b[2][0] != ' ' && b[2][0] == b[2][1] && b[2][1] == b[2][2])
        return true;
    else if (b[0][0] != ' ' && b[0][0] == b[1][0] && b[1][0] == b[2][0])
        return true;
    else if (b[0][1] != ' ' && b[0][1] == b[1][1] && b[1][1] == b[2][1])
        return true;
    else if (b[0][2] != ' ' && b[0][2] == b[1][2] && b[1][2] == b[2][2])
        return true;
    else if (b[0][0] != ' ' && b[0][0] == b[1][1] && b[1][1] == b[2][2])
        return true;
    else if (b[0][2] != ' ' && b[0][2] == b[1][1] && b[1][1] == b[2][0])
        return true;
    else if (b[0][0] != ' ' && b[0][1] != ' ' && b[0][2] != ' ' && b[1][0] != ' ' && b[1][1] != ' ' &&
            b[1][2] != ' ' && b[2][0] != ' ' && b[2][1] != ' ' && b[2][2] != ' '){
        t = true;
        return true;
    }
    return false;
}

int main(){
    cout << "\tGAME TICTACTOE C++" << endl;
    cout << "NGUOI CHOI 1 - [X] \t NGUOI CHOI 2 = [O]" << endl;
    cout << "Cach Choi: Nhap hang ngang roi nhap hang doc đe chon vung đien.\n" << endl;
    while (!g){
        update(); pb();
        g = k();
        if(g){
            if (t) cout << "-----Ca hai da hoa-----";
            else cout << "-----Nguoi Choi " << --p << " la nguoi chien thang-----" << endl;
        }
    }
}