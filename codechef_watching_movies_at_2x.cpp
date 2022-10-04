#include <iostream>
using namespace std;

string number_of_minutes_spent(int X, int Y){
	int total_time = Y / 2 + (X-Y);
	string out;
	out = to_string(total_time);
	out += " minutes";
	return out;
}

int main(){
	cout << number_of_minutes_spent(100, 20) << endl;
	cout << number_of_minutes_spent(50, 24)  << endl; 
	return 0;
}
