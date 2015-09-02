/******************************************************
/		Euler2
/		Problem 2 solution for Project Euler.
******************************************************/
#include <iostream>

void prob2() {
	int curx = 1;
	int prevx = 1;
	int tempx = 0;
	int sum = 0;

	while (curx < 4000000) {
		tempx = curx;
		curx = curx + prevx;
		prevx = tempx;
		if (curx % 2 == 0) {
			sum += curx;
		}
	}

	std::cout << sum << std::endl;
}