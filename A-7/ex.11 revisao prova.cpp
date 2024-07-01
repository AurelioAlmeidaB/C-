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

    
    cout << "\nO IMC calculado �: " << imc << endl;

    
    if (imc < 18.5) {
        cout << "Classifica��o: Abaixo do peso" << endl;
    } else if (imc < 25.0) {
        cout << "Classifica��o: Peso normal" << endl;
    } else if (imc < 30.0) {
        cout << "Classifica��o: Sobrepeso" << endl;
    } else {
        cout << "Classifica��o: Obesidade" << endl;
    }

    return 0;
}
