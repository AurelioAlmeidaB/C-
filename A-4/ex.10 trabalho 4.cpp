#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
    float n1, n2, n3;
    int matricula;
    
    cout << "Digite o numero da matricula: " << endl;
    cin >> matricula;
    
    cout << "Digite as notas do aluno: ";
    cin >> n1 >> n2 >> n3;

    float media = (n1+n2+n3)/3;
    char c;

    if (media>= 9) {
        c='A';
        
    } else if (media >= 7.5) {
        c = 'B';
        
    } else if (media >= 6.0) {
        c = 'C';
        
    } else if (media >= 4.0) {
        c = 'D';
        
    }else {
        c = 'E';
        
    }
    cout << "\n Matricula do aluno  : " << matricula << endl;
    
    cout << "Notas: " << n1 << ", " << n2 << ", " << n3 << endl;
    
    cout << "Media de aproveitamento: " << fixed << setprecision(2) << media << endl;
    
    cout << "Conceito: " << c << endl;

    if (c == 'A' || c == 'B' || c == 'C') {
        std::cout << "APROVADO" << std::endl;
        
    } else {
        std::cout << "REPROVADO" << std::endl;
        
    }
    return 0;
}


//professor quando fui fazer ultilizei a formula deixada no exercicio que era ((n1+n2+n3)*3)/6, mas não deu certo  na media de aproveitamento , entao  ultizei a formula (n1+n2+n3)/3
