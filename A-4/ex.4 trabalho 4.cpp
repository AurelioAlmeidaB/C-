#include <iostream>
#include <cstring>

using namespace std;

int main()
{
char nome[50];
float preco, pf, desconto;


    cout << ("Qual o nome do produto? \n");
    cin >> (nome);
    cout << ("Qual o valor do produto? \n ");
    cin >> (preco);
    
    desconto = 0.13 * preco;
    
    pf = preco - desconto;
    
    cout << "seu desconto é: \n " << desconto;
    cout << " \n preço final é: \n " << pf;

    return 0;
}
