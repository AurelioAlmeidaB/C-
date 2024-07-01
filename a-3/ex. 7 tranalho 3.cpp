#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;
    int n;
    int s = 0;

    cout << "Digite o primeiro nome e o ano de nascimento de 5 pessoas:" << endl;

    for (int i = 1; i <= 5; ++i) {
        cout << "Pessoa " << i << ":" << endl;
        cout << "Nome: ";
        cin >> nome;
        cout << "Ano de nascimento: ";
        cin >> n;

        int idade = 2024 - n;
        s += idade;
    }

    cout << "A soma das idades das 5 pessoas é: " << s << " anos." << endl;

    return 0;
}
