#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    int reg, seq = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (reg == x) {
            seq++;
        } else seq = 1;
        reg = x;
        if (seq > count) count = seq;
    }
    cout << count;
    return 0;
}
