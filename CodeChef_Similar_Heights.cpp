#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
   int n, x, mx=0;
   cin >> n;
   unordered_map<int,int>mp;
   for(int i=0; i<n; i++){
       cin >> x;
       mx=max(mx, x);
       mp[x]++;
   }
   int cnt=0, r, mxCnt=0;
   for(auto x: mp){
       if(x.second<2){
           cnt++;
           r=x.first;
       }
       if(x.second!=1) mxCnt=max(mxCnt,x.second);
   }
   
   int res=0;
   if(cnt%2){
       if(cnt==1 and r==mx){
           if(mxCnt<=2) res=mxCnt;
           else res=1;
       }
       else res+=((cnt+1)/2);
   }
   else res+=(cnt/2);
   cout << res << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
