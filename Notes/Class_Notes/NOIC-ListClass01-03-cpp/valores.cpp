#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if (a > b) swap(a, b); // Troca a e b se a for maior que b
    for (int i = a; i <= b; i++){
        cout << i << " ";
    }
}
