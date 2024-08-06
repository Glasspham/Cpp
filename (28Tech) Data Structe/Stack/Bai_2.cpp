// Check for valid parentheses
#include <iostream>
#include <stack>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    stack<char> tmp;
    for(char c : str){
        if(c == '(')
            tmp.push(c);
        else{
            if(tmp.empty()) cout << "Invalid";
            else tmp.pop();
        }
    }
    if(tmp.empty()) cout << "Valid";
    else cout << "Invalid";
}