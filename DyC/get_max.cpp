#include <iostream>
#include <climits>
#include <cmath>

int get_max(int arr[], int start, int end) {
    // Caso base: si el subconjunto tiene un solo elemento,
    // ese elemento es el máximo.
    if (start == end) {
        return arr[start];
    }

    // Calcula el índice del medio del subconjunto actual.
    // Este paso divide el problema en dos partes.
    int middle = floor((start + end) / 2);

    // Llamada recursiva para encontrar el máximo en la parte izquierda del array,
    // desde el índice 'start' hasta 'middle'.
    int left_max = get_max(arr, start, middle);

    // Llamada recursiva para encontrar el máximo en la parte derecha del array,
    // desde el índice 'middle + 1' hasta 'end'.
    int right_max = get_max(arr, middle + 1, end);

    // Retorna el mayor valor entre los máximos de las dos mitades.
    // Este paso combina las soluciones de las partes izquierda y derecha.
    return (left_max > right_max) ? left_max : right_max;
}

int main(){

    const int arr_size = 10;
    int arr[arr_size];

    // Inicializando el generador de números aleatorios
    srand(time(0));

    // Llenando el array con números aleatorios entre 100 y 1000
    for(int i = 0; i < arr_size; i++){
        arr[i] = rand() % 901 + 100; // Números entre 100 y 1000
    }

    std::cout << "Array: ";
    for(int i = 0; i < arr_size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    int max_value = get_max(arr, 0, arr_size -1);
    std::cout << max_value << std::endl;

    return 0;
}