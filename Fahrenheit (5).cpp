#include <iostream>
#include <string>

    using namespace std;
    float F, c ;
int main() {
    
        cout << " Ola bem vindo,  Fahrenheit escala termométrica de simbolo F que iremos converter para graus celsius!!" << endl  ; 
		cout << "Digite o graus Fahrenheit que gostaria de converter para celsius:  \n  ";
        cin >> F;
         c = ( F  - 32) * (5.0/9.0);
        cout << " A temperatura em graus celsius :" << c <<"ºC";
   }
