//Euler1  
//Problem 1 solver for Project Euler.
#include <iostream>

int main() {

	int answer = 0;

	for (int i = 0; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			std::cout << i << std::endl; //Visual check
			answer += i;
		}
	}

	std::cout << answer << std::endl;

	return 0;
}