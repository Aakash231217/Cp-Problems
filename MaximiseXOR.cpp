#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int zeros=0,ones=0;
        for(int i=0;i<a.length();i++){
            if(a[i]=='0')zeros++;
            else ones++;
            if(b[i]=='0')zeros++;
            else ones++;
            
        }
        int result=min(zeros,ones);
        string ans="";
        for(int i=0;i<result;i++)ans+='1';
        for(int i=result;i<b.length();i++)ans+='0';
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
