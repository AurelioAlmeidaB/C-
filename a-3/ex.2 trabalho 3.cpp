#include <iostream>

using namespace std;

int main() {
    int n , c = 0;
    

    cout << "Digite os n�meros inteiros , digitando 0 o programa ser� encerrado:" << endl;
    
    do {
        cout << "N�mero: ";
        cin >> n;

        if (n != 0) {
            c++;
        }
    } while (n != 0);

    cout << "Total de n�meros digitados: " << c << endl;

    return 0;
}
