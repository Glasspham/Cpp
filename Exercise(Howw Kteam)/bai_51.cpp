// Viết hàm tìm vị trí số lẻ lớn nhất có trong mảng
#include<iostream>
#include<time.h>
#define MAX 100
using namespace std;
int main()
{
	int nSize;
	cout << "Chieu dai cua mang: ";
	cin >> nSize;

	int arr[MAX];
	srand(time(NULL));
	for (int i = 0; i < nSize; i++)
		arr[i] = rand() % 100 - rand() % 100;

	cout << "In ra mang ban dau: " << endl;
	for (int i = 0; i < nSize; i++)
		cout << arr[i] << ' ';
	cout << endl;

	int index;
	int max = arr[0];
	for (int i = 0; i < nSize; i++)
	{
		if (arr[i] % 2 != 0 && arr[i] > max)
		{
			index = i;
			max = arr[i];
		}
	}

	cout << "Vi tri cua so le lon nhat la: " << index << endl;
	system("pause");
	return 0;
}