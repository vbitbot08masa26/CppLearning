#include<iostream>

int main() {
	//	�ϐ�
	int a = 5;
	a = 6;

	//	�萔1
	const int b = 5;
	b = 6;	//	error code E0137

	//	�萔2
	constexpr int c = 5;
	c = 6;	//	error code E0137

	//	�^���_
	auto d = 5;
	d = 6;

	return 0;
}