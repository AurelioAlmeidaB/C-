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
    
    if(i<0) {
	
        cout << " o numero digitado foi " << i << " ele é negativo" << endl;
        
  } else if (i>0){
        cout<< "o numero diigitado foi " << i << " ele é positivo "<< endl;
        
    } else {
	
        cout << "o numero digitado foi 0";
}
}
