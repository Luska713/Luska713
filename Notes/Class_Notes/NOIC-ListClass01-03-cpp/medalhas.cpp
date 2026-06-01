#include <iostream>
#include <list>
using namespace std;

int main() {
    int t1, t2, t3;
    cin >> t1 >> t2 >> t3;

    list<int> tempos = {t1, t2, t3}; // Cria uma lista para armazenar os tempos

    tempos.sort(); // Ordena os elementos da lista

    for (int i : tempos) { // Para cada elemento da lista
        if (i == t1) cout << "1\n"; // Se ele for igual ao T1
        else if (i == t2) cout << "2\n"; // Se ele for igual ao T2
        else cout << "3\n";  // Se ele for igual ao T3
    }

    return 0;
}
