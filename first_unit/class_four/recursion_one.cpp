// Sum from 1 to N

#include <iostream>
using namespace std;

int sumToN(int n) {
    if (n == 1){
        return 1;
    } else {
        return n + sumToN(n -1);
    }
}

int main() {
  int n, sum;

  cout << "Entre com um valor inteiro: ";
  cin >> n;

  sum = sumToN(n);

  cout << "A soma de 1 até " << n << " é: " << sum << endl;

  return 0;
}
