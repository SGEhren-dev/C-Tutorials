#include <iostream>

int main(int argc, char** argv) {

	int x = 10;
	int y = 15;

	if (x + y > 10 && x + y < 15) {
		//-- Execute this if x + y is in range 11 - 14
	}
	else if (x + y < 10 || x + y > 15) {
		//-- If x + y is greater than 15 or less than 10, then execute this
	}
	else {
		//-- This is currently unreachable
	}

	for (int i = 0; i < 10; i++) {
		//(condition) ? True : False;

		if (i * 1 == 10) std::cout << "10" << std::endl;

		((i % 2) == 0) ? std::cout << std::endl : std::cout << i << std::endl;
	}

	int j = 0;
	while (j < x) {
		j++;
	}

	int k = 0;
	do {
		k++;
	} while (k < y);

	return 0;
}
