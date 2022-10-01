#include <iostream>
#include <fmt123.h>

int t = 4;

std::string check(int x, int y){
	int out = x*y;
	out = fmt123::format_int(out).str();;
	return out;
}

int main() {
	std::cout << check(1,10);
	std::cout << check(1,15);
	std::cout << check(2,10);
	std::cout << check(2,15);
	return 0;
}
