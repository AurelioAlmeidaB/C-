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
    
    cout << "seu desconto �: \n " << desconto;
    cout << " \n pre�o final �: \n " << pf;

    return 0;
}
