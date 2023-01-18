#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>vec;
        for(int i=0;i<2*n;i++){
            int a;
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
         long long minimum=INT_MAX;
        for(int i=0;i<=n;i++){
            minimum=min(minimum,vec[n+i-1]-vec[i]);
        }
        cout<<minimum<<endl;
    }
	// your code goes here
	return 0;
}
