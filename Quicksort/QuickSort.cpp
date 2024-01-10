#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

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
    int array[] = {2,4,5,6,1,-100};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Array original: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Medición del tiempo antes de ejecutar Quicksort
    high_resolution_clock::time_point start = high_resolution_clock::now();

    quicksort(array, 0, n - 1);
    
    high_resolution_clock::time_point end = high_resolution_clock::now();
    duration<double, nano> tiempo = duration_cast<nanoseconds>(end - start);
    //duration<double, nano> tiempo = duration_cast<nanoseconds>(end - start);

    cout << "Array ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Tiempo de ejecución: " << tiempo.count() << " nanosegundos" << endl;

    return 0;
}