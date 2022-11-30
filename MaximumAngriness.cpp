#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(n/2<k)k=n/2;
        long long sum=(k*(k+1)/2);
        long long ans=2*(n*k-2*sum)+k;
        cout<<ans<<endl;
    }
	return 0;
}
