/*
Input:
4
1 2 3 4

Output:
1
2
3
4
1+2
1+3
1+4
2+3
2+4
3+4
1+2+3
1+2+4
1+3+4
2+3+4
1+2+3+4
*/

// Cách 11
#include <iostream>
#include <vector>

using namespace std;

void printCombinations(vector<int>& nums) {
    int n = nums.size();
    
    // Print individual numbers
    for (int i = 0; i < n; ++i) {
        cout << nums[i] << endl;
    }

    // Print combinations
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            cout << nums[i] << "+" << nums[j] << endl;
        }
    }

    // Print combinations of 3 numbers
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                cout << nums[i] << "+" << nums[j] << "+" << nums[k] << endl;
            }
        }
    }

    // Print combination of all numbers
    if (n > 1) {
        cout << nums[0];
        for (int i = 1; i < n; ++i) {
            cout << "+" << nums[i];
        }
        cout << endl;
    }
}

int main() {
    int size;
    cin >> size;

    vector<int> numbers(size);
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }

    printCombinations(numbers);

    return 0;
}


// Cách 2
#include <stdio.h>
void sinhth(int a[], int data[], int st, int e, int index, int r) 
{
    if (index == r) 
    {
        for (int i = 0; i < r; i++) 
        {
            printf("%d", data[i]);
            if (i < r - 1)
                printf("+");
        }
        printf("\n");
        return;
    }

    for (int i = st; i <= e && e - i + 1 >= r - index; i++) 
    {
        data[index] = a[i];
        sinhth(a, data, i + 1, e, index + 1, r);
    }
}

void inth(int a[], int n) 
{
    for (int r = 1; r <= n; r++) 
    {
        int data[r];
        sinhth(a, data, 0, n - 1, 0, r);
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
    inth(a, n);
    return 0;
}


// Cách 3
#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a,b,c,d; cin >> a >> b >> c >> d;

    cout << a << '\n' << b << '\n' << c << '\n' << d << '\n';

    for(int i = a; i < d; i++)
        for(int j = i + 1; j <= d; j++)
            cout << i << '+' << j << endl;

    for(int i = a; i < c; i++)
        for(int j = i + 1; j <= c; j++)
            for(int m = j + 1; m <= d; m++)
                cout << i << '+' << j << '+' << m << endl;

    cout << a << '+' << b << '+' << c << '+' << d << endl;;
}
