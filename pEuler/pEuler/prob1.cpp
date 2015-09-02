/******************************************************
/		Euler1  
/		Problem 1 solution for Project Euler. 
******************************************************/
#include <iostream>

void prob1() {

	int answer = 0;

	for (int i = 0; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			std::cout << i << std::endl; //Visual check
			answer += i;
		}
	}

	std::cout << answer << std::endl;

}