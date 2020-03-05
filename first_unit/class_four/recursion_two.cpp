// MDC between two numbers

#include <iostream>
using namespace std;

int MDC(int p, int q) {
    if (q == 0){
        return p;
    } else {
        return MDC(q, p%q);
    }
}

int main() {
  int p, q, mdc;

  cout << "Entre com um valor inteiro: ";
  cin >> p;
  cout << "Entre com outro valor inteiro: ";
  cin >> q;

  mdc = MDC(p, q);

  cout << "O MDC de " << p << " e " << q << " é: " << mdc << endl;

  return 0;
}
