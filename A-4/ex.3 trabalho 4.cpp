#include <iostream>
#include <cmath>

using namespace std;
int main()
{


int r;
float r1, r2,P=3.14;




    cout << ("Qual o valor do raio? \n") << endl;
    cin >> r;

    r1 = (2*P*r);
    r2 = P*(r*r);
    cout << "O valor do perimetro \n" << r1;
    
    cout << " \n O valor da area é: \n" <<r2;
    return 0;
}
