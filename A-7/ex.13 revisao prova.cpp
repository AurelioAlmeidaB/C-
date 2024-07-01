#include <iostream>
#include <fstream> 
#include <vector>
#include <string>
using namespace std;


struct Pessoa {
    string nome;
    double peso;
    double altura;
    double imc; 
};


double calcularIMC(double peso, double altura) {
    return peso / (altura * altura);
}

int main() {
    int N; 
    cout << "Quantas pessoas deseja calcular o IMC? ";
    cin >> N;

    cin.ignore(); 

    vector<Pessoa> pessoas(N); 

    
    for (int i = 0; i < N; i++) {
        cout << "\n=== Dados da pessoa " << i+1 << " ===" << endl;
        cout << "Nome: ";
        getline(cin, pessoas[i].nome);
        cout << "Peso (em kg): ";
        cin >> pessoas[i].peso;
        cout << "Altura (em metros): ";
        cin >> pessoas[i].altura;

    
        pessoas[i].imc = calcularIMC(pessoas[i].peso, pessoas[i].altura);

        cin.ignore(); 
    }

    
    ofstream arquivo("imc_pessoas.txt");

  
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo." << endl;
        return 1; 
    }

    
    for (int i = 0; i < N; i++) {
        arquivo << "Pessoa: " << pessoas[i].nome << endl;
        arquivo << "IMC: " << pessoas[i].imc << endl;
        arquivo << "Classificação: ";
        
        
        if (pessoas[i].imc < 18.5) {
            arquivo << "Abaixo do peso" << endl;
        } else if (pessoas[i].imc < 25.0) {
            arquivo << "Peso normal" << endl;
        } else if (pessoas[i].imc < 30.0) {
            arquivo << "Sobrepeso" << endl;
        } else {
            arquivo << "Obesidade" << endl;
        }
        arquivo << endl;
    }

   
    arquivo.close();

    cout << "\nOs resultados do IMC foram salvos no arquivo imc_pessoas.txt com sucesso!" << endl;

    return 0;
}
