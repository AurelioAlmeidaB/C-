#include <iostream>
using namespace std;

int main() {
    
    int numeros[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    
    cout << "Vetor original:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    
    cout << "Vetor na ordem inversa:" << endl;
    for (int i = 9; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
