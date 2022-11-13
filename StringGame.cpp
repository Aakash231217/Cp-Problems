#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
	    string s;
	    cin>>n;
	    cin>>s;
	    map<char,int>mp;
	    int temp=0;
	    if(s.length()%2==1)cout<<"NO"<<endl;
	    else
	    {
	        for(int i=0;i<s.length();i++)mp[s[i]]++;
	    for(auto i:mp){
	        if(i.second%2){
	            temp=1;
	            cout<<"NO"<<endl;
	            break;
	        }
	    }
	    if(!temp)cout<<"YES"<<endl;
	    }
	}
	return 0;
}
