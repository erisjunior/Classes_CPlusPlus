#include <iostream>
#include <cstdlib>
#include "four.h"

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
	int total, sum = 0;

	cin >> total;

	int * numbersPtr = new int[total];
	
	for (int i = 0; i < total; i++) {
		cin >> numbersPtr[i];
		sum += numbersPtr[i];
	}

	calcVariancy(numbersPtr, total, sum);

	return 0;
}

float calcVariancy(int * numbersPtr, int total, int sum) {
	int variancy;
	
	for (int i = 0; i < total; i++) {
		variancy += (numbersPtr[i] - sum) * (numbersPtr[i] - sum);
	}

	cout << variancy/total << endl;

	return variancy/total;
}
