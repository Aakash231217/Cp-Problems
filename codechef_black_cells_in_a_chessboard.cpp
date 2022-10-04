#include <iostream>
using namespace std;

int black_cells(int n){
	int out = n*n/2;
	return out;
}

int main(){
	cout << black_cells(8) << endl;
	return 0;
}
