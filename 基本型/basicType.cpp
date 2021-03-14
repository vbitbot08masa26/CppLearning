#include<iostream>

int main() {
	//	˜_—Œ^
	bool ready = true;	//	true or false

	//	•¶šŒ^
	char c0 = 'a';

	//	•„†‚È‚µ
	unsigned int x = 100000000;

	//	8bit int
	std::int8_t i8;

	//	16bit
	std::int16_t i16;

	//	64bit
	std::int64_t i64;

	//	—ñ‹“Œ^
	enum Day {
		Sun,	//	0
		Mon,
		Tue,
		Wed,
		Thu,
		Fri,
		Sat	//	6
	};

	enum Gun {
		AR = 1,	//	1
		SMG,	//	2
		TR,	//	3
		SR = 6,	//	6
		LMG,	//	7
	};

	Day day = Fri;
	Day day = 5;	//	error
	int a = Day::Fri;	//	error
	int b = static_cast<int>(Day::Fri);	//	Day --> int

	enum  A1
	{
		A,
		B,
		C
	};

	enum  A2
	{
		A,	//	A1::A is not A2::A
		D,
		E
	};
}