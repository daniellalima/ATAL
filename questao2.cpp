#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> termina(n);
  int posicao = 0;
  for (int i = 0; i < n; i++) {
    int tamanho;
    cin >> tamanho;
    posicao += tamanho;
    termina[i] = posicao;
  }
  int m;
  cin >> m;
  for (int i = 0; i < m; i++) {
    int valor;
    cin >> valor;
    int e = 0, d = n-1;
    while (e < d) {
      int meio = (e+d)/2;
      if (termina[meio] < valor) {
	e = meio+1;
      } else {
	d = meio;
      }
    }
    cout << valor << ": " << e+1 << endl;
  }
  return 0;
}
