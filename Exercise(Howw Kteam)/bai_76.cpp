// Viết hàm sắp xếp các phần tử chẵn giảm dần
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

void function_sort(vector<int>&a, vector<int>&array_even)
{
    for(int i : a)
        if(i % 2 == 0)
            array_even.push_back(i);

	for(int i = 0; i < array_even.size() - 1; i++)
        for(int j = i + 1; j < array_even.size(); j++)
            if(array_even[i] < array_even[j])
				HoanVi(array_even[i],array_even[j]);
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

    vector<int>array_even;
	function_sort(a,array_even);
    cout << "Mang da duoc sap xep theo chieu giam dan: " << '\n';
	XuatMang(array_even);
	cout<<endl;
}