/*
Considere el siguiente problema:
Entrada: Un arreglo A[1...n] de numeros enteros.
Salida: El maximo valor de A[j] - A[i], con i < j.

a) Escriba un pseucodigo de un algoritmo de division y conquista recursivo con complejidad nlogn.
*/

#include <iostream>

using namespace std;

int maxDifference(int A[], int i, int j) {
    if (i == j) {
        return 0;
    }

    int mid = (i + j) / 2;
    int left = maxDifference(A, i, mid);
    int right = maxDifference(A, mid + 1, j);

    int minLeft = A[i];
    for (int k = i + 1; k <= mid; ++k) {
        if (A[k] < minLeft) {
            minLeft = A[k];
        }
    }

    int maxRight = A[mid + 1];
    for (int k = mid + 2; k <= j; ++k) {
        if (A[k] > maxRight) {
            maxRight = A[k];
        }
    }

    int diff = maxRight - minLeft;

    if (left > right && left > diff) {
        return left;
    } else if (right > left && right > diff) {
        return right;
    } else {
        return diff;
    }
}

int main() {
    int A[] = {-1, 2, 3, 4, 5, 6, -9, 8, -3}; // Arreglo ordenado para la prueba
    int n = sizeof(A) / sizeof(A[0]);

    int result = maxDifference(A, 0, n - 1);

    cout << "La diferencia máxima es: " << result << endl;

    return 0;
}