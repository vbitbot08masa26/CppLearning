#include<iostream>

int main() {
	int a = 5;
	int* pta = &a;

	std::cout << *pta << std::endl;	//	�|�C���^�[���̗v�f

	std::cout << pta << std::endl;	//	a(pta�ɑ�����ꂽ)�A�h���X���Q��
	std::cout << &a << std::endl;	//	a�̃A�h���X���Q��
	
	std::cout << &pta << std::endl;	//	pta�̃A�h���X���Q��

	int b = 123;
	const int* ptb = &b;
	*ptb = 124;	//	error

	return 0;
}