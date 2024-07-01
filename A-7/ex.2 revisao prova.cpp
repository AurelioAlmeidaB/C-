#include <iostream>
using namespace std;

int main() {
   
    int numeros[8];
    int multiplosDe3 = 0;

   
    cout << "Digite 8 números:" << endl;
    for (int i = 0; i < 8; i++) {
        cin >> numeros[i];
    }

    
    cout << "Os números digitados foram:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 8; i++) {
        if (numeros[i] % 3 == 0) {
            multiplosDe3++;
        }
    }

    cout << "A quantidade de números múltiplos de 3 é: " << multiplosDe3 << endl;

    return 0;
}
