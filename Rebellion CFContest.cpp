#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
   int t;
   cin>>t;
   while(t--)
    {
       int n;
       cin>>n;
       int arr[n];
       int count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0)count++;
        }
        int ans=0;
        for(auto x:arr){
            if(x==0){
                count--;
            }
            else{
                if(count>0)ans++;
            count--;
            }
        }
      cout<<ans<<endl;
    }
}
