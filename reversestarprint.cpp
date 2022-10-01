#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	
	for(int i=0;i<N;i++){
	    for(int j=1;j<N-i;j++){
	        cout<<"  ";
	    }
	    for(int k=0;k<=i;k++){
	        cout<<"*";
	    }
	    cout<<endl;
	}
	return 0;
}
