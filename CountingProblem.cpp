#include <iostream>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long sum=0;
	    long long arr[n];
	    for(long long i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]%2!=0)sum++;
	        
	    }
	    if(sum%2!=0 or sum==0)cout<<"NO"<<endl;
	    else cout<<"YES"<<endl;
	}
	return 0;
}
