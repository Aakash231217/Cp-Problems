#include <iostream>
using namespace std;

int main() {
	int t; 
	cin>>t;
	while(t--){
	    int x,y;
	    int safe;
	    cin>>x>>y;
	    safe=x%y;
	    safe+=x/y;
	    cout<<safe<<endl;
	}
	return 0;
}
