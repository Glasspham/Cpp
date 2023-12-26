// Viết hàm sắp xếp các phần tử lẻ tăng dần.
#include<iostream>
#include<vector>
#include<time.h>
using namespace std;

void NhapMang(vector<int>&a, int n)
{
	srand(time(NULL));
    for(int i = 0; i < n; i++)
    {    
        int value = rand() % 100;
        a.push_back(value);
    }
        
}

void XuatMang(vector<int>&a)
{
	for(int i : a)
		cout << i << ' ';
}

void HoanVi(int &a, int &b)
{
	int temp = a;
    a = b;
    b = temp;
}

void function_sort(vector<int>&a, vector<int>&array_odd)
{
    for(int i : a)
        if(i % 2 != 0)
            array_odd.push_back(i);

	for(int i = 0; i < array_odd.size() - 1; i++)
        for(int j = i + 1; j < array_odd.size(); j++)
            if(array_odd[i] > array_odd[j])
				HoanVi(array_odd[i],array_odd[j]);
}

int main()
{
	int n;
	cout<<"Nhap so luong thuc cua mang: "; cin>>n;
    vector<int>a;

	NhapMang(a,n);
    cout << "In ra mang ban dau: " << '\n';
	XuatMang(a);
    cout<<endl;

    vector<int>array_odd;
	function_sort(a,array_odd);
    cout << "Mang da duoc sap xep theo chieu tang dan: " << '\n';
	XuatMang(array_odd);
	cout<<endl;
}