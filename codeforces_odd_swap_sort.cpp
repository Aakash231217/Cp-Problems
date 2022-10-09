#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<ll> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        bool yes = true;

        int l,r;
        l=0;
        r=n-1;
        int k = 1;

        while(k<=(n+1)/2){
            for(int i=0;i<n-1;){
                int z = a[i];
                if(a[i]>a[i+1]&&(a[i]+a[i+1])&1){
                    a[i] = a[i+1];
                    a[i+1] = z;
                    i++;
                }else if(a[i]>a[i+1]&&(a[i]+a[i+1])^1){
                    yes = false;
                    break;
                }else{
                    i++;
                }
            }
            k=k*2;
        }

        if(yes) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

    }


    return 0;
}