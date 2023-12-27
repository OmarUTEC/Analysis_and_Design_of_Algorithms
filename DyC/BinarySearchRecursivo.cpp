#include <iostream>
using namespace std;

// Función de búsqueda binaria recursiva
int Bsearch(int A[], int v, int i, int j) {
    if (i > j) {
        return -1; // El elemento no está en el arreglo
    }

    int mid = (i + j) / 2;
    if (A[mid] < v) {
        return Bsearch(A, v, mid + 1, j); // Buscar en la mitad derecha
    } else if (A[mid] > v) {
        return Bsearch(A, v, i, mid - 1); // Buscar en la mitad izquierda
    } else {
        return mid; // Elemento encontrado
    }
}

// Función envolvente para la búsqueda binaria
int BinarySearch(int A[], int v, int n) {
    return Bsearch(A, v, 0, n - 1);
}

int main() {
    int A[] = {1}; // Arreglo ordenado para la prueba
    int n = sizeof(A) / sizeof(A[0]);
    int v =1; // Valor a buscar

    int result = BinarySearch(A, v, n);

    if (result != -1) {
        cout << "Elemento encontrado en el índice: " << result << endl;
    } else {
        cout << "Elemento no encontrado en el arreglo." << endl;
    }

    return 0;
}
