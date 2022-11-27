#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int n=str.size();
        if(str[0]==str[n-1]){
            cout<<n-2<<endl;
        }
        else cout<<2<<endl;
    }
	
	return 0;
}
