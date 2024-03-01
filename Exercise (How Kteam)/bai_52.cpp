// Viết hàm tìm và đổi chỗ cho phần tử lớn nhất và nhỏ nhất trong mảng số nguyên
#include<iostream>
#include<time.h>
#define MAX 100
using namespace std;
void NhapMang(int a[], int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100 - rand() % 100;
}

void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
}

int VTmax(int a[], int n) // Tìm vị trí của giá max
{
	int index_max = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > a[index_max])
			index_max = i;
	return index_max;
}

int VTmin(int a[], int n) // Tìm vị trí của giá min
{
	int index_min = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < a[index_min])
		{
			index_min = i;
		}
	return index_min;
}

void hoanvi(int &a, int &b)
{
	int p = a;
	a = b;
	b = p;
}

void doicho(int a[], int n)
{
	int index_max = VTmax(a,n);
	int index_min = VTmin(a,n);
	hoanvi(a[index_max], a[index_min]);
}

int main()
{
	int nSize;
	int arr[MAX];
	cout << "Chieu dai cua mang: ";
	cin >> nSize;
	
	NhapMang(arr, nSize);
	cout << "In ra mang ban dau: " << endl;
	XuatMang(arr, nSize);

	cout << "\nSo nho nhat: " << arr[VTmin(arr, nSize)];
	cout << "\nSo lon nhat: " << arr[VTmax(arr, nSize)] << '\n';

	doicho(arr, nSize);
	XuatMang(arr, nSize);
	
	system("pause");
	return 0;
}