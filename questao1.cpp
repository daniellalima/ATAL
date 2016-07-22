#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> lista(n);
  for (int i = 0; i < n; i++) {
    cin >> lista[i];
  }
  int m;
  cin >> m;
  for (int i = 0; i < m; i++) {
    int valor;
    cin >> valor;
    int e = 0, d = n-1;
    bool achou = false;
    while (e <= d) {
      int meio = (e+d)/2;
      if (lista[meio] == valor) {
	cout << valor << ": achou" << endl;
	achou = true;
	break;
      } else if (lista[meio] < valor) {
	e = meio+1;
      } else {
	d = meio-1;
      }
    }
    if (!achou) {
      cout << valor << ": nao achou" << endl;
    }
  }
  return 0;
}
