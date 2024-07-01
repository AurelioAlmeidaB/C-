#include <iostream>
#include <limits>

using namespace std;

int main() {
    const int numH = 15;
    double somaS = 0.0;
    int somaF = 0;
    double maiorS = numeric_limits<double>::min();

   
    for (int i = 1; i <= numH; ++i) {
        double s;
        int numF;
        cout << "Digite o salario do habitante " << i << ": ";
        cin >> s;
        cout << "Digite o numero de filhos do habitante " << i << ": ";
        cin >> numF;
        somaS += s;
        somaF += numF;
        if (s > maiorS) {
            maiorS = s;
        }
    }

   
    double mediaS = somaS / numH;
    double mediaF = static_cast<double>(somaF) / numH;

    
    cout << " \n Media do salario da populacao: \n " << mediaS << endl;
    cout << " \n Media do numero de filhos: \n " << mediaF << endl;
    cout << "\n Maior salario entre os habitantes: \n " << maiorS << endl;

    return 0;
}
