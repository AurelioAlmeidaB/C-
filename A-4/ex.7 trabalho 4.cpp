#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <iomanip>

using namespace std;

int main()
{
int codigo, quantia;
float v, vf;
    cout << ( "-------------------------------") << endl;
    cout << ("Cardapio do carrinho de lanches") << endl;
     cout << ( "-------------------------------") << endl;
    cout << ("Cachorro quente, codigo 100") << endl;
     cout << ( "-------------------------------") << endl;
    cout << ("Bauru simples, codigo 101") << endl;
     cout << ( "-------------------------------") << endl;
    cout << ("Bauru com ovo, codigo 102") << endl;
     cout << ( "-------------------------------") << endl;
    cout << ("Hamburguer, codigo 103") << endl;
     cout << ( "-------------------------------") << endl;
    cout << ("Chesseburger, codigo 104") << endl;
     cout << ( "-------------------------------") << endl;
    cout << ("Refrigerante lata, codigo 105") << endl;
     cout << ( "-------------------------------") << endl;
    cout << ("Agua, codigo 106") << endl;
     cout << ( "-------------------------------") << endl;
    cin>> codigo;

    switch(codigo)
    {
        case 100:
        cout << "o lanche escolhido foi o cachorro quente é 9.20 \n" << endl;
        v = 9.20;
        
        cout << " Digite a quantia de itens desejado: \n " << endl;
        cin >> quantia;
        vf= v*quantia;
        cout<<"\n O total a pagar é:" << vf << endl;
        break;
        
        case 101:
        cout << "O lanche escolhido foi bauru simples e o valor 12.00 \n" <<endl;
        v = 12.00;
        cout << " Digite a quantia de itens desejado: \n " << endl;
        cin >> quantia;
        vf= v*quantia;
        cout<<"\n O total a pagar é:" << vf << endl;
        break;
        
        case 102:
        cout << "O lanche escolhido foi bauru com ovo e o valor 13.00 \n" <<endl;
        v = 13.00;
        cout << " Digite a quantia de itens desejado: \n " << endl;
        cin >> quantia;
        vf= v*quantia;
        cout<<"\n O total a pagar é:" << vf << endl;
        break;
        
        case 103:
        cout << "O lanche escolhido foi hambuguer e o valor 10.00 \n" <<endl;
        v = 10.00;
        cout << " Digite a quantia de itens desejado: \n " << endl;
        cin >> quantia;
        vf= v*quantia;
        cout<<"\n O total a pagar é:" << vf << endl;
        break;
        
        case 104:
        cout << "O lanche escolhido foi cheseburguer e o valor 12.00 \n" <<endl;
        v = 12.00;
        cout << " Digite a quantia de itens desejado: \n" << endl;
        cin >> quantia;
        vf= v*quantia;
        cout<<"\n O total a pegar é:" << vf << endl;
        break;
        
        case 105:
        cout << "a bebida escolhida foi refrigerante lata e o valor 5.00 \n" <<endl;
        v = 5.00;
        cout << " Digite a quantia de itens desejado: \n" << endl;
        cin >> quantia;
        vf= v*quantia;
        cout<<" \n O total a pagar é:" << vf << endl;
        break;
        
        case 106:
        cout << "a bebida escolhida foi agua e o valor 3.00 \n" <<endl;
        v = 3.00;
        cout << " Digite a quantia de itens desejado: \n " << endl;
        cin >> quantia;
        vf= v*quantia;
        cout<<"\n O total a pagar é:" << vf << endl;
        break;

    default:
    cout<< " o codigo que voce escolheu é invalido" << endl;
    break;

    }
}
