#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
	int sum, num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	sum = num1 + num2 + num3;

	cout << sum/3 << endl;

	return 0;
}
