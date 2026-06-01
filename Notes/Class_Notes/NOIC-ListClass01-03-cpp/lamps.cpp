#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = 0, b = 0; // Declara as lâmpadas inicialmente apagadas
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x == 1) a = 1 - a; // Se o interruptor 1 for apertado, inverte o estado da lâmpada A
        else {
            a = 1 - a;
            b = 1 - b;
            // Se o interruptor 2 for apertado, inverte os estados das lâmpadas A e B
            }
    }
    cout << a << endl << b;
    return 0;
}
