#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int maior = 0;
    while (n != 0){
        if (n > maior) maior = n;
        cin >> n;
    }
    cout << maior;
    return 0;
}
