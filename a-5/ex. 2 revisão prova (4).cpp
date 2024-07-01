#include <iostream>
#include <cstring>
#include <cctype>
#include <clocale>

using namespace std;

int main (int argc, char** argv) {
	int ouro, prata, bronze, total;

cout << "Quantas medalhas de ouro o Brasil ganhou nas Omlipiadas:\n \n " << endl;
cin >> ouro;

cout <<" \n \n Quantas medalhas de prata o brasil ganhou nas omlipiadas: \n \n " << endl;
cin >> prata;

cout <<" \n \n Quantas medalhas de bronze o brasil ganhou nas omlipiadas: \n \n" << endl;
cin >> bronze;

total = ouro + prata + bronze ;

cout << " \n \n O Brasil ganhou   " << total << "   medalhas nas omlipiadas" << endl;

return 0;





}
