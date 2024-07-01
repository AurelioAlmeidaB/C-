#include <iostream>

using namespace std;

int main() {
    char op;
    
    do {
        cout << "Escolha uma opera��o:" << endl;
        cout << " + : Somar" << endl;
        cout << " - : Subtrair" << endl;
        cout << " / : Dividir" << endl;
        cout << " * : Multiplicar" << endl;
        cout << " S : Sair" << endl;
        cout << "opera��o desejada �: ";
        cin >> op;
        
        if (op == '+') {
            double n1, n2;
            cout << "Digite dois n�meros para somar: ";
            cin >> n1 >> n2;
            cout << "Resultado: " << n1 + n2 << endl;
            
        } else if (op == '-') {
            double n1, n2;
            cout << "Digite dois n�meros para subtrair: ";
            cin >> n1 >> n2;
            cout << "Resultado: " << n1 - n2 << endl;
            
        } else if (op == '/') {
            double n1, n2;
            cout << "Digite dois n�meros para dividir: ";
            cin >> n1 >> n2;
            if (n2 != 0)
                cout << "Resultado: " << n1 / n2 << endl;
                
            else
                cout << "N�o � poss�vel dividir por zero." << endl;
                
        } else if (op == '*') {
            double n1, n2;
            cout << "Digite dois n�meros para multiplicar: ";
            cin >> n1 >> n2;
            cout << "Resultado: " << n1 * n2 << endl;
            
        } else if (op == 'S' || op == 's') {
            cout << "Saindo do programa..." << endl;
            break;
            
        } else {
            cout << "Op��o inv�lida." << endl;
        }
        
    } while (true);
    
    return 0;
}
