#include <iostream>
#include <string>

using namespace std;
    string nome;
    float s, vm;
    int t;
int main() {
    
        cout << "Digite o seu nome:  \n ";
        cin >> nome;
        cout << "Digite a Distância percorrida: \n  ";
        cin >> s;
        cout << "Digite o tempo gasto em minutos: \n  ";
        cin >> t;
        vm = s / (t / 60.0);
        cout << "Ola " << nome ;
        cout << " , sua distancia percorrida foi de  " << s <<"Km";
        cout << " em " << t <<" minutos," ;
        cout << "sua velocidade media foi: " << vm;
}
