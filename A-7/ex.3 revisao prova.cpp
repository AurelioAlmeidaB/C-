#include <iostream>
using namespace std;

int main() {
    int vetor1[10];
    int vetor2[10];
    int resultado[10];

    cout << "Digite 10 números para o primeiro vetor:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> vetor1[i];
    }


    cout << "Digite 10 números para o segundo vetor:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> vetor2[i];
    }


    cout << "Primeiro vetor:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << vetor1[i] << " ";
    }
    cout << endl;


    cout << "Segundo vetor:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << vetor2[i] << " ";
    }
    cout << endl;

 
    for (int i = 0; i < 10; i++) {
        resultado[i] = vetor1[i] * vetor2[i];
    }


    cout << "Resultado da multiplicação dos vetores:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    return 0;
}
