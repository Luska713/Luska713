#include <iostream>
using namespace std;

int main(){
    int n, p, q;
    char c;
    cin >> n ;
    cin >> p >> c >> q;

    if (c == '+'){
        if (p+q > n) cout << "OVERFLOW";
        else cout << "OK";
    }
    if (c == '*'){
        if (p*q > n) cout << "OVERFLOW";
        else cout << "OK";
    }
}
