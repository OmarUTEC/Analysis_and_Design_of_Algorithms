/*
Ejercicio de programacion dinamica:
Diseñe un algoritmo de programacion dinamica para contar el numero de maneras en que podemos cosntruir una suma n, dada como entrada, lanzando un dado una o mas veces. Por ejemplo, si n = 3, existen cuatro maneras (1+1+1, 1+2,2+1,3). Debe indicar la recurrencia que resuelva el problema y el tiempo de ejecucion de su algoritmo.
*/

#include <iostream>

using namespace std;

int countWays(int n) {
    int dp[n + 1];
    dp[0] = 1;

    for (int i = 1; i <= n; ++i) {
        dp[i] = 0; // Inicializamos el valor en cada iteración
        for (int j = 1; j <= 6; ++j) {
            if (i - j >= 0) {
                dp[i] += dp[i - j];
            }
        }
    }

    return dp[n];
}

int main() {
    int n = 0;
    cout << "El número de formas de obtener la suma " << n << " es: " << countWays(n) << endl;
    return 0;
}
