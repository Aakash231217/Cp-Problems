#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    long long ans=pow(2,n);
	    long long power=pow(2,x);
	    cout<<power/ans<<endl;
	}
	return 0;
}
