#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[3];
	
	for(int i=0;i<3;i++){
	    cin>>a[i];
	}
	
	int temp=0;
	
	for(int i=0;i<3;i++){
        for(int j=0;j<3-i-1;j++){
            if(a[j] > a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
	}
	
	cout<<a[1];
	
	return 0;
}


/*with n number of items*/
/*
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	
	int temp=0;
	
	for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
	}
	
	
	
	cout<<a[n-2];
	
	return 0;
}
*/