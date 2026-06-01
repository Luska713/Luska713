#include <iostream>
using namespace std;

int main(){
    int a, n;
    cin >> a >> n;

    // O capitão recebe 2C moedas, e cada um dos N marinheiros recebe C moedas
    // Assim, o total de moedas da arca é A = 2C + NC
    // Isolando o C temos que C = A/(N+2)
    // A quantidade de moedas que o capitão recebe então é (A/(N+2))*2
    cout << (a / (n + 2)) * 2 << endl;

    return 0;
}
