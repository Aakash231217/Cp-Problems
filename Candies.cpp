#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        int flag=0;
        cin>>n;
        int arr[2*n];
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
        }
        map<int,int>m;
        for(int i=0;i<2*n;i++){m[arr[i]]++;}
        for(auto it:m){
            if(it.second>=3){
                flag=1;
                break;
            }
        }
        if(flag!=0)cout<<"NO"<<endl;
        else if(flag==0) cout<<"YES"<<endl;
        
        
    }
	return 0;
}
