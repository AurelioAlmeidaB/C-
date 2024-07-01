#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct Pessoa {
    string nome;
    double peso;
    double altura;
};


double calcularIMC(double peso, double altura) {
    return peso / (altura * altura);
}

int main() {
    int N; 
    cout << "Quantas pessoas deseja calcular o IMC? ";
    cin >> N;

    vector<Pessoa> pessoas(N); 
    
  
    for (int i = 0; i < N; i++) {
        cout << "\n=== Dados da pessoa " << i+1 << " ===" << endl;
        cout << "Nome: ";
        cin.ignore(); 
        getline(cin, pessoas[i].nome);
        cout << "Peso (em kg): ";
        cin >> pessoas[i].peso;
        cout << "Altura (em metros): ";
        cin >> pessoas[i].altura;
    }

   
    cout << "\n=== Resultados do IMC ===" << endl;
    for (int i = 0; i < N; i++) {
        double imc = calcularIMC(pessoas[i].peso, pessoas[i].altura);
        cout << "Pessoa: " << pessoas[i].nome << endl;
        cout << "IMC: " << imc << endl;
        cout << "Classificação: ";
        
       
        if (imc < 18.5) {
            cout << "Abaixo do peso" << endl;
        } else if (imc < 25.0) {
            cout << "Peso normal" << endl;
        } else if (imc < 30.0) {
            cout << "Sobrepeso" << endl;
        } else {
            cout << "Obesidade" << endl;
        }
        cout << endl;
    }

    return 0;
}
