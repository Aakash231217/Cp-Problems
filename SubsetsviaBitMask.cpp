#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff first
#define ss second
//#define int long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define pqi priority_queue<int>
#define pqs priority_queue<int,vi,greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x)  __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x,y) fixed<<set_precision(y)<<x

void solve(int arr[], int brr[],int size,int x){
    int l=0;
    int r=size-1;
    int resl=0;
    int resr=0;
    int diff=INT_MAX;
    while(l<size && r>=0  ){
        if((arr[l]+brr[r]-x)<diff){
            resl=l;
            resr=r;
            diff=abs(arr[l]+brr[r]-x);
            
        }
        if(arr[l]+brr[r]>x)r--;
        else l++;
    }
    cout<<"THE arrays are"<<arr[resl]<<" "<<resl<<" "<<brr[resr]<<" "<<resr<<endl;
}

void generate(int n , char a[]){
    int j=0;
    while(n>0){
        int last_bit=(n&1);
        if(last_bit==1){
            cout<<a[j];
        }
        j++;
        n=n>>1;
    }
    cout<<endl;
}

void printSubsets(char a[]){
    int n=strlen(a);
    for(int i=0;i<(1<<n);i++){
        generate(i,a);
    }
    return;
}
signed main(){
    char a[100];
    cin>>a;
    
   printSubsets(a);
   return 0;
}
