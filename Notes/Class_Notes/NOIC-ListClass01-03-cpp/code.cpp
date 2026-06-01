#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0; // Contador para 100
    int seqzero = 0, seqhum = 0; // Conta as sequências de 0 e 1
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x == 1) {
            seqzero = 0; // Zera a sequência de 0 caso apareça 1
            seqhum++; // Apenas para checar se 1 já apareceu
        } else seqzero++;

        if (seqhum < 1) {
            seqzero = 0;
        } // Evita que se a sequência iniciar com 00 o programa conte como 100

        if (seqzero == 2) { // Conta sequências 100
            count++;
            seqzero++;
        }
    }
    cout << count;
    return 0;
}
