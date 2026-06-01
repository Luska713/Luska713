#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int fat = 1;
    while (n > 0){
        fat *= n;
        n--;
    }
    cout << fat;
}
