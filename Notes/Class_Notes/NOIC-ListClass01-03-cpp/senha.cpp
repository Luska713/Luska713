#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    while (n != 2018){
        cin >> n;
        count++;
    }
    cout << count;
    return 0;
}
