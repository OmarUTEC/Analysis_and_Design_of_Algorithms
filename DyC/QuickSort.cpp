#include <iostream>

using namespace std;

// Función para intercambiar dos elementos en un array
void exchange(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Función para dividir el array y realizar el particionamiento
int partition(int arr[], int p, int r) {
    int x = arr[r];
    int i = p - 1;
    
    for (int j = p; j <= r - 1; j++) {
        if (arr[j] <= x) {
            i++;
            exchange(arr[i], arr[j]);
        }
    }
    exchange(arr[i + 1], arr[r]);
    return i + 1;
}

// Función Quicksort principal
void quicksort(int arr[], int p, int r) {
    if (p < r) {
        int q = partition(arr, p, r);
        quicksort(arr, p, q - 1);
        quicksort(arr, q + 1, r);
    }
}

int main() {
    // Ejemplo de uso
    int array[] = {12, 9, 2, 2, 3, 7, 14, -11};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Array original: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    quicksort(array, 0, n - 1);

    cout << "Array ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
