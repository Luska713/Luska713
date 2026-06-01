#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int l, c;

    int count = 0;

    for (int i = 0; i < n; i++){
        cin >> l >> c;
        if (l > c) count += c;
    }
    cout << count;
    return 0;
}
