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
