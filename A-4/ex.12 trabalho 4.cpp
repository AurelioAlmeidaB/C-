#include <iostream>
using namespace std;

int main() {
    int total = 0;
    int valor;
    
    cout << "Digite 20 valores inteiros positivos:\n";

    for (int i = 0; i < 20; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> valor;


        if (valor < 0) {
            cout << "Por favor, digite apenas valores inteiros positivos." << endl;
            --i; 
        } else {
            total += valor; 
        }
    }

    double media = static_cast<double>(total) / 20; 
    cout << "A media aritmetica dos 20 valores: " << media << endl;

    return 0;
}
