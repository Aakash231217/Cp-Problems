#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,n;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>a>>b;
	    a>b?cout<<"SECOND\n":b>a?cout<<"FIRST\n":cout<<"ANY\n";
	}

	return 0;
}
