#include <iostream>

using namespace std;
int main() {
    int numeros[10];
    int soma = 0;

    cout << "Digite 10 n�meros:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }


    cout << "Os n�meros digitados foram:" << endl;
    for (int i = 0; i < 10; i++) {
       cout << numeros[i] << " ";
    }


    for (int i = 0; i < 10; i++) {
        soma += numeros[i];
    }

   cout << "A soma dos n�meros �: " << soma << endl;

    return 0;
}
