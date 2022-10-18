// Building Race Codechef
#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    float a,b,x,y;
	    cin>>a>>b>>x>>y;
	    float SA=a/x;
	    float SB=b/y;
	    if(SA<SB){
	        cout<<"Chef"<<endl;
	    }
	    if(SB<SA){
	        cout<<"Chefina"<<endl;
	    }
	    if(SA==SB){
	        cout<<"Both"<<endl;
	    }
	}
	return 0;
}
