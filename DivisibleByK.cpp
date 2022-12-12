#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int flag=1;
        for(int i=0;i<n;i++){
            k/=__gcd(k,arr[i]);
            
        }
        if(k==flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
	// your code goes here
	return 0;
}
