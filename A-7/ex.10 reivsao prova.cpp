#include <iostream>
#include <fstream> 
#include <string>
using namespace std;


struct Pet {
    string nome;
    string especie;
    string raca;
    char sexo;
    int idade;
    string nomeDono;
    string rgDono;
    string telefoneDono;
};

int main() {
    int N; 
    cout << "Quantos PETs deseja cadastrar? ";
    cin >> N;

    cin.ignore(); 

   
    Pet pets[N];

   
    for (int i = 0; i < N; i++) {
        cout << "\n=== Cadastro do PET " << i+1 << " ===" << endl;
        cout << "Nome do animal: ";
        getline(cin, pets[i].nome);
        cout << "Espécie: ";
        getline(cin, pets[i].especie);
        cout << "Raça: ";
        getline(cin, pets[i].raca);
        cout << "Sexo (M/F): ";
        cin >> pets[i].sexo;
        cout << "Idade: ";
        cin >> pets[i].idade;
        cout << "Nome do dono: ";
        cin.ignore(); 
        getline(cin, pets[i].nomeDono);
        cout << "RG do dono: ";
        getline(cin, pets[i].rgDono);
        cout << "Telefone do dono: ";
        getline(cin, pets[i].telefoneDono);
    }

    
    ofstream arquivo("pets.txt");

    
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo." << endl;
        return 1; 
    }

  
    for (int i = 0; i < N; i++) {
        arquivo << "PET " << i+1 << ":" << endl;
        arquivo << "Nome do animal: " << pets[i].nome << endl;
        arquivo << "Espécie: " << pets[i].especie << endl;
        arquivo << "Raça: " << pets[i].raca << endl;
        arquivo << "Sexo: " << pets[i].sexo << endl;
        arquivo << "Idade: " << pets[i].idade << " anos" << endl;
        arquivo << "Nome do dono: " << pets[i].nomeDono << endl;
        arquivo << "RG do dono: " << pets[i].rgDono << endl;
        arquivo << "Telefone do dono: " << pets[i].telefoneDono << endl << endl;
    }

   
    arquivo.close();

    cout << "Cadastro dos PETs foi salvo no arquivo pets.txt com sucesso!" << endl;

    return 0;
}
