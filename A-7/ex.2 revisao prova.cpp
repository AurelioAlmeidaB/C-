#include <iostream>
using namespace std;

int main() {
   
    int numeros[8];
    int multiplosDe3 = 0;

   
    cout << "Digite 8 n�meros:" << endl;
    for (int i = 0; i < 8; i++) {
        cin >> numeros[i];
    }

    
    cout << "Os n�meros digitados foram:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 8; i++) {
        if (numeros[i] % 3 == 0) {
            multiplosDe3++;
        }
    }

    cout << "A quantidade de n�meros m�ltiplos de 3 �: " << multiplosDe3 << endl;

    return 0;
}
