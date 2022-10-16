#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
       long long n, q;
         cin>>n>>q;
         long a[n];
         long long sum=0;
         long long extrasum=0;
         long long offsum=0;
         long long cnt=0;
         long long extracnt=0;
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
             if(a[i]%2!=0){
                 cnt++;
                 offsum+=a[i];
             }
             else {
                 extracnt++;
                extrasum+=a[i];
             }
             sum+=a[i];
         }
 
     for(long long i=0;i<q;i++)
     {
         long long x,y;
         cin>>x>>y;
         if(x==0)
         {
             sum+=y*extracnt;
             if(y%2==0)
             {
                extracnt=extracnt; 
             }
             else{
                 cnt=cnt+extracnt;
                 extracnt=0;
             }
         }
         else
         {
              sum+=y*cnt;
              if(y%2==0)
             {
                cnt=cnt; 
             }
             else{
                 extracnt=extracnt+cnt;
                 cnt=0;
             }
            
         }
        cout<<sum<<endl;
     }
 
   }
}
