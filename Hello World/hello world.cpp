#include<iostream>

int main() {
	//	改行なし
	std::cout << "Hello World 1" << std::flush;

	//	改行あり
	std::cout << "Hello World 2" << std::endl;

	return 0;
}