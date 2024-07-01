#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
signed int i;
    cout << ("Algoritimo para verificar se o numero é positivo ou negativo \n" ) ;
    
    cout << ("qual é o numero desejado? \n");
    
    cin >> (i);
    
    if(i<0)
        cout << "O numero digitado foi " << i << "  ele é negativo" << endl;
    else
        cout<< "O numero diigitado foi " << i << " ele é positivo "<< endl;

}
