#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    if(y%x==0){
	        if(n>=y/x)cout<<"YES"<<endl;
	        
	    }
	    else cout<<"NO"<<endl;
	}
	return 0;
}
