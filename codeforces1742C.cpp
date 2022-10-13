
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
 
{   int t; 
cin>>t;
while(t--){
    int n=8;
    string red = "RRRRRRRR";
    vector<string> grid(n);
    bool flag=0;
    for(int i=0;i<n;i++) cin>>grid[i];   
 
    for(int i=0;i<n;i++)
    {
        if(grid[i] == red)
        {   flag=1;
            break;
            
        }
    }
    if(flag)cout<<"R"<<endl;
    else cout<<"B"<<endl;
}
}
