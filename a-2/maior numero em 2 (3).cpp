#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Digite o primeiro número: \n";
    cin >> n1;
    cout << "Digite o segundo número: \n";
    cin >> n2;

    int maior = (n1 > n2) ? n1 : n2;

    cout << "O maior numero e: " << maior << endl;
  
}
