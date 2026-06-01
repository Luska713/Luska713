#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    cin >> m;
    // A idade do irmão mais velho é:
    // Idade de Otávio + ( Idade de Otávio - Idade do irmão mais novo)
    // Ou seja: M+(M-N)
    cout << m + (m - n) << endl;
    return 0;
}
