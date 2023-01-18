#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    
	    int alex=((x1*x1)+(y1*y1));
	    int bob=((y2*y2) + (x2*x2));
	    if(abs(alex)==abs(bob))cout<<"EQUAL"<<endl;
	    else if(alex>bob)cout<<"ALEX"<<endl;
	    else if(alex<bob)cout<<"BOB"<<endl;
	    
	}
	return 0;
}
