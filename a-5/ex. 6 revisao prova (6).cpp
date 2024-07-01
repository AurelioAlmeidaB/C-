#include <iostream>
#include <cstring>
#include <cctype>
#include <clocale>

using namespace std;

int main (int argc, char** argv) {
	int i, n, r;
		
	cout <<"informe um numero para que seja apresentada a tabuada:" << endl;
		cin >> n;
			cout << "----------------------------" << endl;
		
		cout << " taboada do  " << n << endl;	
		
	for  (i= 1; i<= 10 ;i++)
	
	{	

        r= i * n;
						
		cout << n << " X " << i << " = " << r << endl;
	}
		cout << "----------------------------" << endl;
}
