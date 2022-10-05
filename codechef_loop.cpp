#include <iostream>
using namespace std;

string loop(int A, int B, int M){
	int direction1 = abs(A-B);
	int direction2 = M-direction1;
	int shortest_route = min(direction1,direction2);
	string out = to_string(shortest_route) + " units";
	return out;
}

int main(){
	cout << loop(1,3,100) << endl;
	cout << loop(1,98,100)  << endl;
	cout << loop(40,30,50) << endl;
	cout << loop(2,1,2) << endl;
	return 0;
}
