#include <iostream>
#include <cstdlib>
#include "four.h"

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
	int total, sum = 0;
  float variancy;

	cin >> total;

	int * numbersPtr = new int[total];

	for (int i = 0; i < total; i++) {
		cin >> numbersPtr[i];
		sum += numbersPtr[i];
	}

	variancy = calcVariancy(numbersPtr, total, sum);

	cout << variancy << endl;

	return 0;
}

float calcVariancy(int * numbersPtr, int total, int sum) {
	float variancy = 0;
  int mean = sum/total;

	for (int i = 0; i < total; i++) {
		variancy += (numbersPtr[i] - mean) * (numbersPtr[i] - mean);
	}

	return variancy/total;
}
