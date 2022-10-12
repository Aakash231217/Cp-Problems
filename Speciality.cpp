#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x>y && y>z || x>z && z>y)cout<<"Setter"<<endl;
	    else if(y>x && x>z || y>z && z>x)cout<<"Tester"<<endl;
	    else if(z>y && y>x || z>x && x>y)cout<<"Editorialist"<<endl;
	}
	return 0;
}
