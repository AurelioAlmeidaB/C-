#include <iostream>
#include <vector>
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

    vector<Pet> pets(N); 

   
    for (int i = 0; i < N; i++) {
        cout << "\n=== Cadastro do PET " << i+1 << " ===" << endl;
        cout << "Nome do animal: ";
        cin.ignore(); 
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

    
    cout << "\n=== Cadastros dos PETs ===" << endl;
    for (int i = 0; i < N; i++) {
        cout << "PET " << i+1 << ":" << endl;
        cout << "Nome do animal: " << pets[i].nome << endl;
        cout << "Espécie: " << pets[i].especie << endl;
        cout << "Raça: " << pets[i].raca << endl;
        cout << "Sexo: " << pets[i].sexo << endl;
        cout << "Idade: " << pets[i].idade << " anos" << endl;
        cout << "Nome do dono: " << pets[i].nomeDono << endl;
        cout << "RG do dono: " << pets[i].rgDono << endl;
        cout << "Telefone do dono: " << pets[i].telefoneDono << endl << endl;
    }

    return 0;
}
