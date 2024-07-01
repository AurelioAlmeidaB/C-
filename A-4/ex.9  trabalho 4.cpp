#include <iostream>

using namespace std;
int n;
int main()

{
    cout << "Digite um numero: \n " << endl;
    
    cin >> n;

    if(n%2==0) {
        cout << n << " é par" << endl;
        
        }
        else {
            cout << n << " é impar" << endl;
            
        }
    return 0;
}
