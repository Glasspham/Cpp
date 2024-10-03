#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#define MAX 13

//Hàm khóa ba nút đóng, thu nhỏ, chia màn
void DisableCtrButton(bool Close, bool Min, bool Max){
    HWND hWnd = GetConsoleWindow();
    HMENU hMenu = GetSystemMenu(hWnd, false);
    if (Close == 1) DeleteMenu(hMenu, SC_CLOSE, MF_BYCOMMAND);
    if (Min == 1) DeleteMenu(hMenu, SC_MINIMIZE, MF_BYCOMMAND);
    if (Max == 1) DeleteMenu(hMenu, SC_MAXIMIZE, MF_BYCOMMAND);
}

//Hàm thay đổi vị trí con trỏ trong màn hình console
void gotoxy(int x,int y){
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD g = {x,y};
    SetConsoleCursorPosition(h,g);
}

//Hàm thay đổi màu văn bản(mã màu từ 0 tới 12)
void textcolor(int x){
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,x);
}

//Hàm thay đổi kích thước màn hình console
void resizeConsole(int width, int height){
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console, r.left, r.top, width, height, TRUE);
}

//Hàm viết các văn bản tiêu đề
void Begin(){
    SetConsoleOutputCP(437);
    gotoxy(28,2); textcolor(12); printf("CONNECTING FROM LOVE SEVER");
    gotoxy(13,4); textcolor(12); printf("%c%c%c",3,3,3);gotoxy(65,4);printf("%c%c%c",3,3,3);
    SetConsoleOutputCP(65001);
    gotoxy(16,4); textcolor(11); printf(" Send to...........NGƯỜI CON GÁI TÔI THẦM THƯƠNG TRỘM NHỚ BẤY LÂU");
    // gotoxy(18,6); textcolor(14); printf("____________________________________________");
    gotoxy(32,6); textcolor(13); printf("Loading......10%%");
    gotoxy(18,7); textcolor(14); printf("____________________________________________");
}

//Hàm vẽ trái tim
void love(int luu){
    //Ma trận trái tim
    int traitim[MAX][MAX]= {
    {0,0,1,1,1,0,0,0,1,1,1,0,0},
    {0,1,0,0,0,1,0,1,0,0,0,1,0},
    {1,0,0,0,0,0,1,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,1},
    {0,1,0,0,0,0,0,0,0,0,0,1,0},
    {0,0,1,0,0,0,0,0,0,0,1,0,0},
    {0,0,0,1,0,0,0,0,0,1,0,0,0},
    {0,0,0,0,1,0,0,0,1,0,0,0,0},
    {0,0,0,0,0,1,0,1,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0,0}};
    textcolor(luu%14+1); //Thay đổi màu vẽ trái tim

    //=> Vẽ trái tim từ ma trận trái tim
    if(luu==0){
        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                Sleep(10);
                if(traitim[i][j]) gotoxy(j+20,i+10); printf("%c",3);
                else gotoxy(j+20,i+10); printf(" ");                
            }
            printf("\n");
        }

        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                Sleep(10);
                if(traitim[i][j]) gotoxy(j+33,i+10); printf("%c",3);
                else gotoxy(j+33,i+10); printf(" ");
            }
            printf("\n");
        }

        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                Sleep(10);
                if(traitim[i][j]) gotoxy(j+46,i+10); printf("%c",3);
                else gotoxy(j+46,i+10); printf(" ");
            }
            printf("\n");
        }
    }

    if(luu%2==0){
        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                if(traitim[i][j]) gotoxy(j+20,i+10); printf("%c",3);
                else gotoxy(j+20,i+10); printf(" ");
            }
            printf("\n");
        }

        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                if(traitim[i][j]) gotoxy(j+33,i+10); printf("%c",3);
                else gotoxy(j+33,i+10); printf(" ");
            }
            printf("\n");
        }

        for(int i=0;i<MAX;i++){
            for(int j=0;j<MAX;j++){
                if(traitim[i][j]) gotoxy(j+46,i+10); printf("%c",3);
                else gotoxy(j+46,i+10); printf(" ");
            }
            printf("\n");
        }
    }
    textcolor(12);
    gotoxy(26,14); printf("I");   gotoxy(38,14); printf("LOVE");    gotoxy(51,14); printf("YOU");
}

int main(){
    DisableCtrButton(true, true, true);
    resizeConsole(900,450);
    Begin();  //Gọi hàm begin
    SetConsoleOutputCP(65001);

    //Ghi các đoạn văn bản ra màn hình Console
    gotoxy(10,10); textcolor(2); printf("Cậu à!! Tôi có điều muốn nói với cậu.....");
    Sleep(4000);gotoxy(32,6); textcolor(13); printf("Loading......15%%");

    gotoxy(10,10); textcolor(2); printf("Cậu không phải là đầu tiên tôi thích.");
    Sleep(4000);gotoxy(32,6); textcolor(13); printf("Loading......20%%");

    gotoxy(10,10); textcolor(2); printf("Nhưng mà bây giờ thì trong đầu tôi toàn là cậu");
    Sleep(4000);gotoxy(32,6); textcolor(13); printf("Loading......30%%");

    gotoxy(10,10); textcolor(2); printf("Tôi chỉ muốn nói điều này:                    ");
    gotoxy(10,12); textcolor(9); printf("              Có lẽ TÔI THÍCH CẬU MẤT RỒI ♡                 ");
    Sleep(4000);gotoxy(32,6); textcolor(13); printf("Loading......35%%");

    gotoxy(10,10); textcolor(2); printf("Tôi không được đẹp trai, và học cũng không giỏi, còn thêm tính nhút nhát.");
    gotoxy(10,12); textcolor(2); printf("          Không được như bao chàng trai khác      ");
    Sleep(4000);gotoxy(32,6); textcolor(13); printf("Loading......40%%");

    gotoxy(10,10); textcolor(2); printf("Tôi chỉ là 1 thằng mê Game Online, không giỏi bất kì việc gì (Nói thô ra là vô dụng, bất tài) ⊙﹏⊙∥");
    gotoxy(10,12); textcolor(2); printf("                                                   ");
    Sleep(4000);gotoxy(32,6); textcolor(13); printf("Loading......50%%");

    gotoxy(10,10); textcolor(2); printf("Đã rất nhiều lúc tôi muốn lấy hết can đảm, tiến lại gần cậu và nói chuyện với cậu trực tiếp        ");
    Sleep(4000);gotoxy(32,6); textcolor(13); printf("Loading......55%%");

    gotoxy(10,10); textcolor(2); printf("Nhưng tôi không làm đượcc (っ °Д °;)っ                                                              ");
    Sleep(4000);gotoxy(32,6); textcolor(13); printf("Loading......60%%");

    gotoxy(10,10); textcolor(2); printf(" Nhưng tôi lại quá nhát và lại gần bà tôi lại không biết nói gì (ノへ￣、)");
    gotoxy(10,12); textcolor(2); printf(" Tôi không có điểm gì nổi bật để cậu quan tâm cả.");
    Sleep(4000);gotoxy(32,6); textcolor(13); printf("Loading......70%%");

    gotoxy(10,10); textcolor(2); printf("Và cậu cũng không có lý do gì để chấp nhận ở bên cạnh một người như tôi....");
    gotoxy(10,12); textcolor(2); printf("                                                 ");
    Sleep(4000);gotoxy(32,6); textcolor(13); printf("Loading......75%%");

    gotoxy(10,10); textcolor(2); printf("Vì vậy thích cậu tớ cũng chỉ có thể nhìn từ xa, chỉ có thể nhắn tin!           ");
    Sleep(4000);gotoxy(32,6); textcolor(13); printf("Loading......80%%");

    gotoxy(10,10); textcolor(2); printf("Yêu đơn phương, nhiều lúc cũng rất hạnh phúc lắm vì                           ");
    gotoxy(10,12); textcolor(2); printf("                        tôi sẽ không bao giờ bị cậu TỪ CHỐI....                ");
    Sleep(4000);gotoxy(32,6); textcolor(13); printf("Loading......90%%");

    gotoxy(10,10); textcolor(2); printf("Tớ chỉ cần mỗi ngày đều có thể ngắm nhìn cậu                                  ");
    gotoxy(10,12); textcolor(2); printf("          cũng đủ làm cho tớ hạnh phúc rồi!!!                                 ");
    Sleep(4000);gotoxy(32,6); textcolor(13); printf("Loading......100%%");

    gotoxy(10,10); textcolor(2); printf("Và tôi chỉ mong cậu hiểu được tấm lòng của tôi ");
    gotoxy(10,12); textcolor(2); printf("    và mong 1 lúc nào đó có thể chấp nhận tôi");
    gotoxy(10,14); textcolor(2); printf("       tồi biết điều đó không thể nhưng mong đều đó thành sự thật! ☆*: .｡. o(≧▽≦)o .｡.:*☆");
    Sleep(4000);
    
    system("cls");
    SetConsoleOutputCP(437);

    int luu = 0;
    int i = 1;
    while(i){
        love(luu);
        luu++;
        Sleep(300);
    }
    
    getch();
    return 0;
}
