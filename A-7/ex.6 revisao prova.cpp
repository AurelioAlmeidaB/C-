#include <iostream>
using namespace std;

int main() {
    
    int matriz[4][4];

  
    cout << "Digite os números para preencher a matriz 4x4:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

   
    cout << "\nMatriz 4x4 digitada:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
