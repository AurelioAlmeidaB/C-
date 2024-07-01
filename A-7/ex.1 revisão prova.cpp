#include <iostream>

using namespace std;
int main() {
    int numeros[10];
    int soma = 0;

    cout << "Digite 10 números:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }


    cout << "Os números digitados foram:" << endl;
    for (int i = 0; i < 10; i++) {
       cout << numeros[i] << " ";
    }


    for (int i = 0; i < 10; i++) {
        soma += numeros[i];
    }

   cout << "A soma dos números é: " << soma << endl;

    return 0;
}
