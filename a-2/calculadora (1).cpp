#include <iostream>
using namespace std;

int main() {
    char operacao;
    double n1, n2, r;

    cout << "Escolha a operacao desejada (+, -, *, /): ";
    cin >> operacao;

    switch (operacao) {
        case '+':
            cout << "Digite dois numeros para a soma: \n" << endl;
            cin >> n1 >> n2;
            r = n1 + n2;
            cout << "Resultado da soma: " << r << endl;
            break;
            
        case '-':
            cout << "Digite dois numeros para a subtracao: \n" << endl;
            cin >> n1 >> n2;
            r = n1 - n2;
            cout << "Resultado da subtracao: " << r << endl;
            break;
            
        case '*':
            cout << "Digite dois numeros para a multiplicacao: \n" << endl;
            cin >> n1 >> n2;
            r = n1 * n2;
            cout << "Resultado da multiplicacao: " << r << endl;
            break;
            
        case '/':
            cout << "Digite dois numeros para a divisao: \n" << endl;
            cin >> n1 >> n2;
            if (n2 != 0) {
                r = n1 / n2;
                cout << "Resultado da divisao: " << r << endl;
            } else {
                cout << "não é possivel dividir por 0" << endl;
            }
            break;
        default:
            cout << "Opcao invalida." << endl;
    }
   
}
