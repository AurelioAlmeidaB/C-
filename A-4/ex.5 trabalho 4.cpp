#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
signed int i;
    cout << ("Algoritimo para verificar se o numero � positivo ou negativo \n" ) ;
    
    cout << ("qual � o numero desejado? \n");
    
    cin >> (i);
    
    if(i<0)
        cout << "O numero digitado foi " << i << "  ele � negativo" << endl;
    else
        cout<< "O numero diigitado foi " << i << " ele � positivo "<< endl;

}
