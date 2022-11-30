#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    if(x1<1 && y1>n and x2<1 and y2>n  ){cout<<0<<endl;continue;}
	    else if(x1<1 || y1>n){
	        cout<<min(min(n-x2+1,n-y2+1),min(x2,y2))<<endl;
	        continue;
	    }
	     else if(x2<1 || y2>n){
	         cout<<min(min(n-x1+1,n-y1+1),min(x1,y1))<<endl;
	        continue;
	         
	     }
	     int x=min(min(n-x1+1,n-y1+1),min(x1,y1));
	     int y=min(min(n-x2+1,n-y2+1),min(x2,y2));
	     int z=abs(x1-x2)+abs(y1-y2);
	     cout<<min(z,x+y)<<endl;
	}
	return 0;
}
