#include <iostream>
using namespace std;

int main() {
  int n,j,i;
  cout << "ingrese el tamaño del triangulo: ";
  cin >> n;

   i = 1;
  while (i <= n) {
     j = 1;
    while (j <= i) {
      cout << ".";
      j++;
    }
    cout << endl;
    i++;
  }
return 0;
}
