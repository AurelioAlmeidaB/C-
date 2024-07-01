#include <iostream>
using namespace std;

int main() {
   
    float notasP1[15];
    float notasP2[15];
    float medias[15];
    string situacoes[15];

    
    cout << "Digite as notas da P1 para os 15 alunos:" << endl;
    for (int i = 0; i < 15; i++) {
        cout << "Aluno " << i+1 << ": ";
        cin >> notasP1[i];
    }

   
    cout << "Digite as notas da P2 para os 15 alunos:" << endl;
    for (int i = 0; i < 15; i++) {
        cout << "Aluno " << i+1 << ": ";
        cin >> notasP2[i];
    }

   
    for (int i = 0; i < 15; i++) {
        medias[i] = (notasP1[i] + notasP2[i]) / 2.0;
        if (medias[i] >= 6.0) {
            situacoes[i] = "Aprovado";
        } else {
            situacoes[i] = "Reprovado";
        }
    }

  
    cout << "Notas, médias e situação dos alunos:" << endl;
    for (int i = 0; i < 15; i++) {
        cout << "Aluno " << i+1 << ": P1 = " << notasP1[i] << ", P2 = " << notasP2[i]
             << ", Média = " << medias[i] << ", Situação = " << situacoes[i] << endl;
    }

    return 0;
}
