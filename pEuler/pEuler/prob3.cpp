/******************************************************
/		Euler3
/		Problem 3 solution for Project Euler.
******************************************************/
#include <iostream>

void prob3() {
	unsigned long long int numForPF = 600851475143LL;
	unsigned long long int highestPrime = 0LL;

	for(unsigned long long int i = 2LL; i <= numForPF; i++) {
		if (numForPF % i == 0) {
			numForPF = numForPF / i;
			highestPrime = i;
			std::cout << " prime " << i << std::endl; //Output for visual check.
		}
	}

	std::cout << highestPrime << std::endl;
}