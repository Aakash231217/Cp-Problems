#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string str;
        cin>>str;
        map<pair<char,int>,int>f;
        char curr=str[0];
        int length=1;
        f[{curr,length}]++;
        for(int i=1;i<n;i++){
            if(curr!=str[i]){
                length=1;
                curr=str[i];
            }
            else length++;
            f[{curr,length}]++;
        }
        int maxi=0;
        for(auto &it:f){
            if(it.second==1){
                maxi=max(maxi,it.first.second-1);
                continue;
            }
            else
            maxi=max(maxi,it.first.second);
        }
        cout<<maxi<<endl;
    }
	// your code goes here
	return 0;
}
