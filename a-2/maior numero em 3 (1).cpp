#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;

    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;
    cout << "Digite o terceiro número: ";
    cin >> n3;


    int maior = n1; 

    if (n2 > maior) {
        maior = n2; 
    }
    if (n3 > maior) {
        maior = n3; 
    }
 
    cout << "O maior número é: " << maior << endl;

}
