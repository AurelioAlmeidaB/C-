#include <iostream>

using namespace std;

int main() {
    int n , c = 0;
    

    cout << "Digite os números inteiros , digitando 0 o programa será encerrado:" << endl;
    
    do {
        cout << "Número: ";
        cin >> n;

        if (n != 0) {
            c++;
        }
    } while (n != 0);

    cout << "Total de números digitados: " << c << endl;

    return 0;
}
