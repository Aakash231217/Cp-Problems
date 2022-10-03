
// approach 1
    vector<int> dp ;
    int total = 0 ;

    int partition ( int n , int arr[] , int sum )
    {
        if ( n < 0 )
        return 0 ;

        if ( dp[sum] != -1 )
        return dp[sum] ;

        if ( (sum * 2) == total )
        {
            return 1 ;
        }

        dp[sum] = partition ( n-1 , arr , sum + arr[n] ) || partition ( n-1 , arr , sum ) ;
        return dp[sum] ;
    }

    int equalPartition(int N, int arr[] )
    {
        // code here

        for ( int i=0 ; i < N ; i++ )
        {
            total += arr[i] ;
        }

        if ( total % 2 == 1 )
        return 0 ;

        dp.resize( total/2 + 1 , -1 );

        return partition ( N-1 , arr , 0 );
    }


// approach 2 - bitset

       int equalPartition(int N, int arr[])
    {  int sum=0;
        bitset<100001>dp;
        dp[0]=1;
        for(int i=0;i<N;i++){sum+=arr[i];dp|=(dp<<arr[i]);}
        if(sum%2)return 0;
        return dp[sum/2];
    }
