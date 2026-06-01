#include <iostream>
using namespace std;

int main(){
    int l, c;
    cin >> l >> c;
    if (l % 2 == c % 2) cout << 1;
    else cout << 0;
    return 0;
}
