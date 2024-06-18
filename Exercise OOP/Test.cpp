#include<bits/stdc++.h>
using namespace std;

void ChuanHoa(string &name){
    while(name[0] == ' ')
        name.erase(0,1);
    for(int i = 1; i < name.length() - 1; ++i)
        if(name[i] == ' ' && name[i + 1] == ' '){
            name.erase(i,1);
            --i;
        }
    while (name[name.length() - 1] == ' ') 
        name.erase(name.length() - 1, 1);
    
    if(islower(name[0]))
        name[0] = toupper(name[0]);

    for(int i = 1; i < name.length(); ++i){
        if(name[i - 1] == ' ')
            name[i] = toupper(name[i]);
        else name[i] = tolower(name[i]);
    }
}

int main(){
    string name = "  pHAm    Ha  VO    ";
    ChuanHoa(name);
    cout << name;
    return 0;
}