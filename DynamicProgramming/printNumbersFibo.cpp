#include <iostream>
// math library
using namespace std;

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    int a = 0, b = 1, c;
    cout << a << " " <<endl;
    cout << b << endl; // Imprime los dos primeros números de la secuencia

    for (int i = 2; i <= n; ++i) {
        c = a + b;
        cout << c << " "<<endl;; // Imprime el número actual de la secuencia
        a = b;
        b = c;
    }

    return b; // Devuelve el número en la posición n
}

int main() {
    int n = 7;

    cout << "Los números de la secuencia de Fibonacci hasta la posición " << n << " son:\n";
    cout << fibonacci(n) << endl;

    return 0;
}
