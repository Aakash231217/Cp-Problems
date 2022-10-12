#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int count=0;
	    int ans=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        
	    }
	    int counttemp=1;
	    sort(arr,arr+n);
	    for(int j=1;j<n;j++){
	        if(arr[j]==arr[j-1])
	        counttemp++;
	        else
	       { count=max(count,counttemp);
	       counttemp=1;
	       }
	    }
	    count=max(count,counttemp);
	    cout<<n-count<<endl;
	    
	    
	}
	return 0;
}
