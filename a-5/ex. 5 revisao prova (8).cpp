#include <iostream>
#include <cstring>
#include <cctype>
#include <clocale>

using namespace std;

int main (int argc, char** argv) {
	int senha, i;
	
	for ( i= 1; i<= 3; i++)
	
	{
		cout << "Digite sua senha:\n ";
		cin >> senha;
	
		if ( senha == 1234) {
			cout << " senha correta" << endl;
			i = 3;
		}
		else {
		 cout << "senha incorreta" << endl;
		}
   }
	return 0;
}
