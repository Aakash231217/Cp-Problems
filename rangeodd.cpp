#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int L, R;
	cin>>L>>R;
	
	while(L<=R){
	    if(L%2==1)
	        printf("%d ", L);
	    L++;
	}
	return 0;
}
