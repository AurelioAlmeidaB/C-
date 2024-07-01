#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    double s;
    double imposto = 0.0;

    cout << "Digite seu nome: \n ";
    getline(cin, nome);
    cout << "Digite seu salário: R$ \n ";
    cin >> s;



    if (s < 2000.0) {
        cout << nome << ", voce tem isencao de pagamento do IRPF." << endl;
        
    } else if (s >= 2000.0 && s < 3000.0) {
        imposto = s * 0.15;
        
        cout << nome << ", voce devera pagar R$" << imposto << " de IRPF." << endl;
    } else if (s >= 3000.0 && s < 5000.0) {
        imposto = s * 0.20;
        
        cout << nome << ", voce devera pagar R$" << imposto << " de IRPF." << endl;
    } else if (s >= 5000.0 && s < 10000.0) {
        imposto = s * 0.23;
        
        cout << nome << ", voce devera pagar R$" << imposto << " de IRPF." << endl;
    } else {
        imposto = s * 0.27;
        cout << nome << ", voce devera pagar R$" << imposto << " de IRPF." << endl;
        
    }


}
