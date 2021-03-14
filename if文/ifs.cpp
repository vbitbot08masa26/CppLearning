#include<iostream>

int main() {
	int i = 1;

	if (i == 0) {
		std::cout << 0 << std::endl;
	}
	else if (i == 1) {	//	!(i == 0) && (i == 1)
		std::cout << 1 << std::endl;
	}
	else {	//	!(i == 0) && !(i == 1)
		std::cout << "other" << std::endl;
	}

	return 0;
}