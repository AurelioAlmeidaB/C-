#include <iostream>
using namespace std;

int main() {
    cout << "Escolha um time:" << endl;
    cout << "1 - São Paulo" << endl;
    cout << "2 - Santos" << endl;
    cout << "3 - Palmeiras" << endl;
    cout << "4 - Corinthians" << endl;

    int escolha;

    
    cout << "Digite o número correspondente ao time desejado: ";
    cin >> escolha;

    
    switch (escolha) {
        case 1:
            cout << "São paulo ,O maior do mundo!" << endl;
            break;
        case 2:
            cout << "Santos, falaram que time grande nao caia para a serie b!" << endl;
            break;
        case 3:
            cout << "Palmeiras , 0 Mundiais , muita midia e pouco futebol!" << endl;
            break;
        case 4:
            cout << "Corinthians, farmaceutica forte!" << endl;
            break;
        default:
            cout << "Opção inválida. Escolha um número entre 1 e 4." << endl;
    }

}
