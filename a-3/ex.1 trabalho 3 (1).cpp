#include <iostream>

using namespace std;

int main() {
    char op;
    
    do {
        cout << "Escolha uma operação:" << endl;
        cout << " + : Somar" << endl;
        cout << " - : Subtrair" << endl;
        cout << " / : Dividir" << endl;
        cout << " * : Multiplicar" << endl;
        cout << " S : Sair" << endl;
        cout << "operação desejada é: ";
        cin >> op;
        
        if (op == '+') {
            double n1, n2;
            cout << "Digite dois números para somar: ";
            cin >> n1 >> n2;
            cout << "Resultado: " << n1 + n2 << endl;
            
        } else if (op == '-') {
            double n1, n2;
            cout << "Digite dois números para subtrair: ";
            cin >> n1 >> n2;
            cout << "Resultado: " << n1 - n2 << endl;
            
        } else if (op == '/') {
            double n1, n2;
            cout << "Digite dois números para dividir: ";
            cin >> n1 >> n2;
            if (n2 != 0)
                cout << "Resultado: " << n1 / n2 << endl;
                
            else
                cout << "Não é possível dividir por zero." << endl;
                
        } else if (op == '*') {
            double n1, n2;
            cout << "Digite dois números para multiplicar: ";
            cin >> n1 >> n2;
            cout << "Resultado: " << n1 * n2 << endl;
            
        } else if (op == 'S' || op == 's') {
            cout << "Saindo do programa..." << endl;
            break;
            
        } else {
            cout << "Opção inválida." << endl;
        }
        
    } while (true);
    
    return 0;
}
