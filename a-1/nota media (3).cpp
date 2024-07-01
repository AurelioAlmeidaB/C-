#include <iostream>
#include <string>

using namespace std;
    string nome;
    float n1, n2, n3, media;;
int main() {
    
        cout << "Digite o nome do aluno: \n  ";
        cin >> nome;
        cout << "Digite a Nota 1: \n ";
        cin >> n1;
        cout << "Digite a nota 2: \n  ";
        cin >> n2;
        cout << "Digite a nota 3: \n  ";
        cin >> n3;
        media = (n1 + n2 + n3) /3;
        cout << " Aluno " << nome ;
        cout << " possui a media  " << media;
    }
