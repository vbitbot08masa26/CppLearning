#include<iostream>

int main() {
	//	変数
	int a = 5;
	a = 6;

	//	定数1
	const int b = 5;
	b = 6;	//	error code E0137

	//	定数2
	constexpr int c = 5;
	c = 6;	//	error code E0137

	//	型推論
	auto d = 5;
	d = 6;

	return 0;
}