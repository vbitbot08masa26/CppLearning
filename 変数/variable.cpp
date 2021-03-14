#include<iostream>

int main() {
	//	•Ï”
	int a = 5;
	a = 6;

	//	’è”1
	const int b = 5;
	b = 6;	//	error code E0137

	//	’è”2
	constexpr int c = 5;
	c = 6;	//	error code E0137

	//	Œ^„˜_
	auto d = 5;
	d = 6;

	return 0;
}