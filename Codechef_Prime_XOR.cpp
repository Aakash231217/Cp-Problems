#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll x,y,a,b,c;
	cin>>x>>y;
	ll z=x^y;
	if(x%2 and y%2){
			b=2;
			c=y^b;
			a=x^b;
	}
	else if(x%2 and z%2){
			a=2;
			b=x^a;
			c=z^a;
	}
	else{
			c=2;
			b=y^c;
			a=z^c;
	}
	vector<ll>v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);	
	sort(v.begin(),v.end());
	cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
    
    
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
