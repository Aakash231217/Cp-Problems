#include <iostream>
using namespace std;

void chefrun(int X1, int X2, int X3, int V1, int V2){
	int Chef = (X3-X1)/V1;
	int Kefa = (X2-X3)/V2;
	string output;

	if(Chef == Kefa){
		cout << "Draw\n";
	}
	else if(Chef > Kefa){
		cout << "Kefa\n";
	}
	else{
		cout << "Chef\n";
	}
}

int main(){
	chefrun(1,3,2,1,2);
	chefrun(1,5,2,1,2);
	chefrun(1,5,3,2,2);
	return 0;
}
