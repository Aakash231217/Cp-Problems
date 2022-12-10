#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    double x,y,k;
	    cin>>x>>y>>k;
	    cout<<ceil(abs(y-x)/k)<<endl;
	}
	return 0;
}
