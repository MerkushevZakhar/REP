#include <iostream>

int summation(int first, int second){
	return first + second;
}

int subtraction(int first, int second){
	return first - second;
}

//gatchi man
// not gatchi man

int int main(int argc, char const *argv[])
{
	int test_int = 25;

	std::cout << summation(13,24) <<"\n";
	std::cout << subtraction(13,24) <<"\n";

	return 0;
}