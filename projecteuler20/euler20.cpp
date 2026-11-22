#include <iostream>
#include <vector>

int main(){

	int n = 100;
	int d = 5;
	int counter = 0;

	while (n > 0){
		n /= d;
		counter += n;
	}

	std::cout << counter << "\n";


	return 0;
}