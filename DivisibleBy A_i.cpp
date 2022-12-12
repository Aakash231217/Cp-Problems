#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        long long result=arr[0];
        for(int i=0;i<n;i++)result=__gcd(result,arr[i]);
        for(auto i:arr)cout<<i/result<<" ";
        cout<<endl;
    }
	// your code goes here
	return 0;
}
