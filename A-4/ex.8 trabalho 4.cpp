#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>


using namespace std;

int main()
{
    float h, i;
    char sexo;
    cout << "Qual seu sexo M para Masculino ou F para Feminino: \n " <<endl;
    cin >> sexo;

    sexo = toupper (sexo);

    switch (sexo) {
    case 'F':
    cout <<"Digite a sua altura: \n " << endl;
    cin >> h;
    i = (62.1*h)-44.7;
    cout << " \n seu peso ideal é: \n " << i << endl;
    break;

    case 'M':
    cout <<"Digite a sua altura: \n " << endl;
    cin >> h;
    i = (72.7*h)-58;
    cout << "\n seu peso ideal é: \n " << i << endl;
    break;

    }
}
