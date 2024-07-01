#include <iostream>
using namespace std;

int main() {
    const int tamanho = 6; 
    int matriz[tamanho][tamanho];

    
    cout << "Digite os números para preencher a matriz " << tamanho << "x" << tamanho << ":" << endl;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    
    cout << "\nMatriz " << tamanho << "x" << tamanho << " digitada:" << endl;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

   	
    cout << "\nDiagonal Secundária:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << matriz[i][tamanho - 1 - i] << " ";
    }
    cout << endl;

    return 0;
}
