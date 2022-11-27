#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n,m,k,x;
	    cin>>n>>m>>k>>x;
	    long long work=n*(k-1);
	    long long variable=x%(n*k+m);
	    if(variable!=0 && (variable-work)<=0){
	        cout<<"NO"<<endl;
	        
	    }
	    else cout<<"YES"<<endl;
	}
	return 0;
}
