#include <iostream>

using namespace std;
int n;
int main()

{
    cout << "Digite um numero: \n " << endl;
    
    cin >> n;

    if(n%2==0) {
        cout << n << " � par" << endl;
        
        }
        else {
            cout << n << " � impar" << endl;
            
        }
    return 0;
}
