#include <iostream>
using namespace std;
void year(int &j){
	for(int i = 1; j < j + 18; i++, j++){
		if(i < 13)
			cout << "Lop " << i << " : " << j << '-' << j + 1 << endl;
		else if( i == 13)
			cout << "Sinh vien nam 1 : " << j << '-' << j + 1 << endl;
		else if( i == 14)
			cout << "Sinh vien nam 2 : " << j << '-' << j + 1 << endl;
		else if( i == 15)
			cout << "Sinh vien nam 3 : " << j << '-' << j + 1 << endl;
		else if( i == 16)
			cout << "Sinh vien nam 4 : " << j << '-' << j + 1 << endl;
		else
			break;
	}
}

int main(){
	cout << "Nam sinh cua ban la: ";
	int j; cin >> j;
	j += 6;
	year(j);
	return 0;
}
