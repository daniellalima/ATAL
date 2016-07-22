#include <iostream>
#include <string>

using namespace std;

string primeira_irma(string str) {
  if (str.size()%2 == 1) {
    return str;
  } else {
    string a = primeira_irma(str.substr(0, str.size()/2));
    string b = primeira_irma(str.substr(str.size()/2, str.size()/2));
    if (a < b) {
      return a + b;
    } else {
      return b + a;
    }
  }
}

int main() {
  string a, b;
  cin >> a >> b;
  if (primeira_irma(a) == primeira_irma(b)) {
    cout << "irmas" << endl;
  } else {
    cout << "nao irmas" << endl;
  }
  return 0;
}
