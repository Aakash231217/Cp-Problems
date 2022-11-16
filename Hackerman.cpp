#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int temp=a+b;
	    if (isPrime(temp))cout<<"Alice"<<endl;
	    else if(!isPrime(temp))cout<<"Bob"<<endl;
	    
	}
	return 0;
}

