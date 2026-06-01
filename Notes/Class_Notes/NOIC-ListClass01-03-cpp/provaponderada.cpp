#include <iostream>
using namespace std;

int main(){
    float n1, n2;
    cin >> n1;
    cin >> n2;
    if (((n1*2)+(n2*3))/5 < 3) cout << "Reprovado";
    else if (((n1*2)+(n2*3))/5 < 7) cout << "Final";
    else cout << "Aprovado";

    return 0;
}
