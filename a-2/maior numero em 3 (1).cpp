#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;

    cout << "Digite o primeiro n�mero: ";
    cin >> n1;
    cout << "Digite o segundo n�mero: ";
    cin >> n2;
    cout << "Digite o terceiro n�mero: ";
    cin >> n3;


    int maior = n1; 

    if (n2 > maior) {
        maior = n2; 
    }
    if (n3 > maior) {
        maior = n3; 
    }
 
    cout << "O maior n�mero �: " << maior << endl;

}
