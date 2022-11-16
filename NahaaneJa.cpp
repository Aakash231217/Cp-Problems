#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int cnt=count(arr.begin(),arr.end(),k);
        if(cnt==0)cout<<"No"<<endl;
        else if(cnt==1 and n!=1 and arr[n-1]==k)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
	// your code goes here
	return 0;
}
