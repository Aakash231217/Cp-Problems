#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long int ans = 1;
        for(int i=0;i<n;i++){
            switch (s[i]){
            case 'c':
            case 'g':
            case 'l':
            case 'r': ans = (ans*2) % (1000000007);
            break;
            }
        }

        cout<<ans<<"\n";
    }
}
