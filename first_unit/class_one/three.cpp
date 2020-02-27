#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
	int total, num, sum = 0;

	cin >> total;
	
	for (int i = 0; i < total; i++) {
		cin >> num;
		sum += num;
	}

	cout << sum / total << endl;

	return 0;
}
