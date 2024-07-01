#include <iostream>

using namespace std;

int main() {
    int n, m;

    cout << "Digite o valor de n: ";
    cin >> n;

    cout << "Digite o valor de m: ";
    cin >> m;

    cout << "Números no intervalo de " << n << " a " << m << ":" << endl;
    
    if (n <= m) {
        for (int i = n; i <= m; ++i) {
            cout << i << " ";
        }
    } else {
      if (m <= n) 
         for  (int i = m; i <= n; ++i) {
            cout << i << " ";
    }

}

    cout << endl;

    return 0;
}
