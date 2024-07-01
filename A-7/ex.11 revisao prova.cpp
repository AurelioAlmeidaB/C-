#include <iostream>
using namespace std;


double calcularIMC(double peso, double altura) {
    return peso / (altura * altura);
}

int main() {
    double peso, altura;

    
    cout << "Calculadora de IMC" << endl;
    cout << "Digite o peso (em kg): ";
    cin >> peso;
    cout << "Digite a altura (em metros): ";
    cin >> altura;

    
    double imc = calcularIMC(peso, altura);

    
    cout << "\nO IMC calculado é: " << imc << endl;

    
    if (imc < 18.5) {
        cout << "Classificação: Abaixo do peso" << endl;
    } else if (imc < 25.0) {
        cout << "Classificação: Peso normal" << endl;
    } else if (imc < 30.0) {
        cout << "Classificação: Sobrepeso" << endl;
    } else {
        cout << "Classificação: Obesidade" << endl;
    }

    return 0;
}
