#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int soma = 0;
    int count = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (soma < 1000000) count++;
        soma += x;
    }
    cout << count;
    return 0;
}
