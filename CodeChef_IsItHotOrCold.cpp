#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,temp;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>temp;
	    temp>20?cout<<"HOT\n":cout<<"COLD\n";
	}
	return 0;
}
