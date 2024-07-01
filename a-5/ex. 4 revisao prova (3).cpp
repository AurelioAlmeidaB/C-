#include <iostream>
#include <cstring>
#include <cctype>
#include <clocale>

using namespace std;

int main (int argc, char** argv){
int i = 0;

cout << "Digite sua idade:" << endl;
cin >> i;


if  ( i >= 65) {

	cout << " \n Voce pode ser atendido em fila preferencial. \n " << endl;
	cout << " \n Direja-se ao caixa 1." << endl;
 }
 else {
 	cout << " Voce sera atendido em caixas convecionais\ n" << endl;
 	cout << "  \n dirija- se a um dos caixas: \n " << endl;
 	cout << " \n  caixa 2 ; \n" << endl;
 	cout << " \n  caixa 3 ; \n " << endl;
 	cout << " \n  caixa 4 ; \n" << endl;
 }
	
	return 0;
}
