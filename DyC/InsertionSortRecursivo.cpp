#include <iostream>
using namespace std;

// Función para insertar el elemento A[n] en la posición correcta del subarreglo A[0...n-1]
void insert(int A[], int n) {
    int valor = A[n]; // Guarda el valor a insertar
    int i = n - 1;    // Comienza desde el penúltimo elemento del arreglo

    // Mueve los elementos mayores que 'valor' una posición hacia adelante
    while (i >= 0 && A[i] > valor) {
        A[i + 1] = A[i]; // Desplaza el elemento
        i--;             // Mueve el índice hacia atrás
    }
    A[i + 1] = valor; // Inserta el valor en la posición correcta
}

// Función recursiva para ordenar el arreglo usando Insertion Sort
void recursiveInsertionSort(int A[], int n) {
    if (n <= 1) {
        return; // Caso base: un arreglo con 0 o 1 elemento ya está ordenado
    }

    // Ordena recursivamente el subarreglo A[0...n-2]
    recursiveInsertionSort(A, n - 1);

    // Inserta el elemento en la posición n-1 en su lugar correcto
    insert(A, n - 1);
}

int main() {

    int A[] = {5, 2, 4, 3, 1, 6};
    int n = sizeof(A) / sizeof(A[0]); // Calcula el tamaño del arreglo

    // Llama a la función de ordenación en el arreglo
    recursiveInsertionSort(A, n);

    // print the sorted array
    cout << "Array ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
