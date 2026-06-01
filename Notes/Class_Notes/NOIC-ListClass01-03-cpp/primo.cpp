# include <iostream>

using namespace std;

bool eh_primo(int x){
    if (x < 2) return false; // Não existe primo < 2
    for (int i = 2; i < x; i++){
        if (x % i == 0) return false; // Se o resto da divisão for 0, não é primo
    }
    return true;
}

int main(){
    int x;

    cin>>x;

    if(eh_primo(x)){
        cout << "S" << "\n";
    }else{
        cout << "N" << "\n";
    }
    return 0;
}
