#include <bits/stdc++.h>
# define M 998244353
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	   long long temp;
	    long long count=0;
	    for(long long i=0;i<n;i++){
	        cin>>temp;
	        count+=temp;
	        count %=M;
	    }
	    cout<<count*(count-1)%M<<endl;
	    
	    
	}
	return 0;
}
