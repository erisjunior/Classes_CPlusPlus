#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
	int sum = 0;
	
	if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			sum += atoi(argv[i]);
		}
		cout << sum << endl;
		cout << sum / (argc - 1) << endl;
	}

	return 0;
}
