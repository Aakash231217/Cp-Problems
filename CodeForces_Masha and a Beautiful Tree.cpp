/*
Problem Description:
The girl named Masha was walking in the forest and found a complete binary tree of height n and a permutation p of length m=2n.

A complete binary tree of height n is a rooted tree such that every vertex except the leaves has exactly two sons, and the length of the path from the root to any of the leaves is n. The picture below shows the complete binary tree for n=2.

A permutation is an array consisting of n different integers from 1 to n. For example, [2,3,1,5,4] is a permutation, but [1,2,2] is not (2 occurs twice), and [1,3,4] is also not a permutation (n=3, but there is 4 in the array).

Let's enumerate m leaves of this tree from left to right. The leaf with the number i contains the value pi (1≤i≤m).
For example, if n=2, p=[3,1,4,2], the tree will look like this:
Masha considers a tree beautiful if the values in its leaves are ordered from left to right in increasing order.
In one operation, Masha can choose any non-leaf vertex of the tree and swap its left and right sons (along with their subtrees).
For example, if Masha applies this operation to the root of the tree discussed above, it will take the following form:
Help Masha understand if she can make a tree beautiful in a certain number of operations. If she can, then output the minimum number of operations to make the tree beautiful.
*/

#include<bits/stdc++.h>
using namespace std;
int n,a[300000];
void solve(){
	cin>>n;
	for(int i=1;i<=n;i++)	cin>>a[i];
	int p=1,nn=n,count=0;
	while(nn!=1){
		for(int i=2;i<=nn;i+=2){
			if(!(a[i]-a[i-1]==p||a[i]-a[i-1]==p*-1)){
				cout<<"-1\n";
				return;
			}
			if(a[i-1]>a[i])	count++;
			a[i/2]=min(a[i],a[i-1]);
		}
		nn/=2;
		p*=2;
	}
	cout<<count<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--)	solve();
}
