#include <iostream>
using namespace std;

int main(){
    int d;
    cin >> d;
    if (((d-3)%8) == 3) cout << 1 << endl;
    else if (((d-3)%8) == 4) cout << 2 << endl;
    else cout << 3 << endl;
    /*
    Importante notar que para valores de distância total tais que (d-3)%8<3 e (d-3)%8>5, a partícula se encontra dentro do acelerador, para fins práticos, esses valores resultarão no sensor 3.
    */
    return 0;
}
