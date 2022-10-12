#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,n;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>a>>b;
	    a>b?cout<<a-b<<"\n":cout<<b-a<<"\n";
	}
	return 0;
}
