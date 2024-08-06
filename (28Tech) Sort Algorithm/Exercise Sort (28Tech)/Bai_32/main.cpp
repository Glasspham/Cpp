#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--){
        int n, m, k; cin >> n >> m >> k;
        int A[n], B[m], C[k];
        for(int &x : A) cin >> x;
        for(int &x : B) cin >> x;
        for(int &x : C) cin >> x;
        vector<int> ve;
        int i = 0, j = 0, l = 0;
        
        while (i < n && j < m && l < k){
            if(A[i] == B[j] && A[i] == C[l]){
                ve.push_back(A[i]);
                ++i, ++j, ++l;
            }
            else if(A[i] < B[j] && A[j] < C[l])
                ++i;
            else if (B[j] < A[i] && B[j] < C[l])
                ++j;
            else ++l;
        }

        // while (i < n && j < m && l < k){
        //     if(A[i] == B[j] && A[i] == C[l]){
        //         ve.push_back(A[i]);
        //         ++i, ++j, ++l;
        //     }
        //     else if(A[i] < B[j])
        //         ++i;
        //     else if (B[j] < C[l])
        //         ++j;
        //     else ++l;
        // }

        if(ve.size() == 0)
            cout << "-1\n";
        else
            for (int it : ve)
                cout << it << ' ';
    }
    return 0;
}