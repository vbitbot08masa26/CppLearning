#include<iostream>

int main() {
	int i = 1;

	switch (i)	//	case i only
	{
	case 1:
		std::cout << 1 << std::endl;
		break;
	case 2:
		std::cout << 2 << std::endl;
		break;
	case 3:
		std::cout << 3 << std::endl;
		break;
	default:
		std::cout << "other" << std::endl;
		break;
	}

	switch (i)	//	start case i ...
	{
	case 1:
		std::cout << 1 << std::endl;
	case 2:
		std::cout << 2 << std::endl;
	case 3:
		std::cout << 3 << std::endl;
	default:
		std::cout << "other" << std::endl;
	}

	return 0;
}