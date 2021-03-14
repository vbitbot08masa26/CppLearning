#include<iostream>

int main() {
	int a = 5;
	int* pta = &a;

	std::cout << *pta << std::endl;	//	ポインター内の要素

	std::cout << pta << std::endl;	//	a(ptaに代入された)アドレスを参照
	std::cout << &a << std::endl;	//	aのアドレスを参照
	
	std::cout << &pta << std::endl;	//	ptaのアドレスを参照

	int b = 123;
	const int* ptb = &b;
	*ptb = 124;	//	error

	return 0;
}