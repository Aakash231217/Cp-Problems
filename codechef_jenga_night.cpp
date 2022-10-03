#include <iostream>
using namespace std;

string jenga_game_valid(int N, int X){
	bool valid = false;
	string out;
	if(X % N == 0 && X >= N){
		valid = true;
	}
	if(valid == true){
		out = "YES" ;
	}
	if(valid == false){
		out = "NO";
	}
	return out;
}

int main(){
	//cout<<jenga_game_valid(3,0)<<endl;
	cout<<jenga_game_valid(3,3)<<endl;
	cout<<jenga_game_valid(4,2)<<endl;
	cout<<jenga_game_valid(2,4)<<endl;
	return 0;
}
