#include <iostream>

def summation(int first, int second){
	return first + second;
}

def subtraction(int first, int second){
	return first - second;
}

int int main(int argc, char const *argv[])
{
	int test_int = 25;

	std::cout << summation(13,24) <<"\n";
	std::cout << subtraction(13,24) <<"\n";

	return 0;
}