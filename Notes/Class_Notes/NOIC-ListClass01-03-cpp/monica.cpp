#include <iostream>
#include <list>
using namespace std;

// OBS.: Sei que o objetivo é construir este código com condicionais, mas optei por utilizar listas e explorar seus métodos.

int main(){
    int m, a, b;
    cin >> m >> a >> b;

    int c = m - (a + b); // Calcula a idade do terceiro filho
    list<int> idades = {a, b, c}; // Cria uma lista com as idades
    idades.sort(); // Ordena os elementos em ordem crescente
    cout << idades.back(); // Retorna o último valor da lista

    return 0;
}
