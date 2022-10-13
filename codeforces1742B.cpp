#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    int arr[n];
    set<int>pushkrna;
    for (int i = 0; i  <n; i++) {
        cin >>arr[i];
        pushkrna.insert(arr[i]);
    }
    if (pushkrna.size()==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
}
