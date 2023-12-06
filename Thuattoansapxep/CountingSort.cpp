// Sắp xếp đếm phân phối - Counting Sort
#include<iostream>
using namespace std; 
  
int cnt[10000001];

void countingSort(int a[], int n)
{
    int k = -1000000000;
    for(int i = 0; i < n; i++)
    {
        cnt[a[i]]++;
        k = max(k, a[i]);
    }
    for(int i = 0; i <= k; i++)
    {
        if(cnt[i])
        {
            for(int j = 0; j < cnt[i]; j++)
            {
                cout << i << ' ';
            }
        }
    }
}

int main()  
{  
    int a[] = {10, 5, 1, 6, 2, 7, 8, 3, 4, 9};  
    int n = sizeof(a) / sizeof(a[0]);  
    countingSort(a, 10);   
}  