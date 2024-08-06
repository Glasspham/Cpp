// Viết hàm in ra từ 1 đến giá trị X người dùng nhập có những số gì?
#include<iostream>
#include<vector>
#include<time.h>
#define Max 100
using namespace std;

int main()
{
	int a[Max], n;
	cout << "Nhap chieu dai mang: "; cin >> n;

	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100 - rand() % 100;

	cout << "In ra mang ban dau: " << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << endl;

	int x;
	vector<int> a_new;
	cout << "Hay nhap gia tri gia gioi han tren: "; cin >> x;

	bool f = false;
	for (int i = 0; i < n; i++)	
		if (a[i] > 1 && a[i] <= x)
		{
			cout << a[i] << ' ';
			f = true;
		}

	if (!f)
		cout << "Khong co gia tri nao thoa man!" << endl;

	system("pause");
	return 0;
}