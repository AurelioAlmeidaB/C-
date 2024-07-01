#include <iostream>
using namespace std;

int main() {
    const int linhas = 4;
    const int colunas = 5;

    
    double matrizOriginal[linhas][colunas];

  
    double matrizMetade[linhas][colunas];

   
    cout << "Digite os numeros para preencher a matriz " << linhas << "x" << colunas << ":" << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matrizOriginal[i][j];
        }
    }


    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizMetade[i][j] = matrizOriginal[i][j] / 2.0;
        }
    }

    
    cout << "\nMatriz Original " << linhas << "x" << colunas << ":" << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matrizOriginal[i][j] << " ";
        }
        cout << endl;
    }


    cout << "\nMatriz de Metade " << linhas << "x" << colunas << ":" << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matrizMetade[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
