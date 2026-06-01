#include <bits/stdc++.h>
using namespace std;

// A função recebe a, b e c por referência para modificá-los diretamente
void solve(int n, int &a_ref, int &b_ref, int &c_ref)
{
    if (n % 2 == 0)
    {  // n é par
        a_ref = 2;
        b_ref = n - 3;
        c_ref = 1;
    }
    else
    {  // n é ímpar
        int k = (n - 1) / 2;
        if (k % 2 == 0)
        {  // k é par, implica n = 4m + 1 (ex., n=13 -> k=6)
            a_ref = k - 1;
            b_ref = k + 1;
            c_ref = 1;
        }
        else
        {  // k é ímpar, implica n = 4m + 3 (ex., n=11 -> k=5)
            a_ref = k - 2;
            b_ref = k + 2;
            c_ref = 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a, b, c; // Declaradas variáveis locais para receber os valores
        solve(n, a, b, c); // Chamada da função passando as variáveis por referência
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}