#include <iostream>
using namespace std;

int main() {
    int numerosLidos = 0;
    int somaPares = 0;
    int numero;

    cout << "Digite 20 numeros:\n";

    for (int i = 0; i < 20; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numero;

        if (numero % 2 == 0) {
            somaPares += numero;
            numerosLidos++;
        }
    }

    double mediaPares;
    if (numerosLidos > 0) {
        mediaPares = static_cast<double>(somaPares) / numerosLidos;
        cout << "A media dos numeros pares digitados: " << mediaPares << endl;
    } else {
        cout << "Nenhum numero par foi digitado." << endl;
    }

    return 0;
}

//professor fiz ultilização do static_cast que faz a compilação e assim facilitando 
