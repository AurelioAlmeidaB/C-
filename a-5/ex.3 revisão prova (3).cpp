#include <iostream>
#include <cstring>
#include <cctype>
#include <clocale>

using namespace std;

int main (int argc, char** argv) {
int i;
float n1, n2 , r;

cout << " ---------------------------------" << endl;
cout << " escolha uma op��o" << endl;
cout << "1 - para SOMAR " << endl;
cout << "2 - para SUBTRAIR" << endl;
cout << "3 - para DIVIDIR " << endl;
cout << "4 - para MULTIPLICAR" << endl;
cout << "5 - para SAIR " << endl;

 cout << "informe a op��o desejada: \n" << endl;
cin >> i;


switch (i) {
	case 1:
    cout << " \n \n Digite o primeiro numero: \n " << endl;
    cin >> n1;

    cout << " \n Digite o segundo numero: \n" << endl ;
    cin >> n2;
    
     r = n1 + n2;
     
		cout << " A Soma �:" << r << endl;
		
		break;
		
			case 2:
    cout << " \n \n Digite o primeiro numero: \n " << endl;
    cin >> n1;

    cout << " \n Digite o segundo numero: \n" << endl ;
    cin >> n2;
    
      r = n1 - n2;
		cout << " A Subtra��o �:" << r << endl;
	
		break;
		
			case 3:
    cout << " \n \n Digite o primeiro numero: \n " << endl;
    cin >> n1;

    cout << " \n Digite o segundo numero: \n" << endl ;
    cin >> n2;
    
       r = n1 / n2;
		cout << " A divis�o �:"<< r << endl;
		
		break;
		
			case 4:
    cout << " \n \n Digite o primeiro numero: \n " << endl;
    cin >> n1;

    cout << " \n Digite o segundo numero: \n" << endl ;
    cin >> n2;
    
    r= n1 * n2;
		cout << " A multiplica��o �:" << r << endl;
		
		break;
		
		default:
			cout << " seu programa fechara" << endl;
}

 





}
