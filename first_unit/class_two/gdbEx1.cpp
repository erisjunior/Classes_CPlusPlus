# include <iostream>

int main() {
  int i, num, j = 1;

  std::cout << "Entre com um valor inteiro: ";
  std::cin >> num;

  for (i = 1; i <= num; ++i)
    j = j * i;

  std::cout << "O fatorial de " << num << " eh: " << j << std::endl;

  return 0;
}
