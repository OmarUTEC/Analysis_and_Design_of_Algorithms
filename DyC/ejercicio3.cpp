/*
#include <iostream>
#include <cmath>

int contarMayoresIguales(int Arr[], int m, int start, int end){
    if(start > end){
        return end-start;
    }

    int count = 0;
    int middle = floor(start + (end - start)/2);

    contarMayoresIguales(Arr, m, middle+1, end); 
    contarMayoresIguales(Arr, m, start, middle-1);

    return (Arr[middle]>=m) ? count++:count;
}

int main(){

    int Arr[] = {1, 2, 3, 4, 7, 8, 10, 12};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    int m = 7;

    int count = contarMayoresIguales(Arr, m, 0, n-1);
    std::cout << n << std::endl;
    std::cout << count << std::endl;

    return 0;
}
*/

#include <iostream>
#include <cmath>

int contarMayoresIguales(int Arr[], int m, int start, int end) {
    if (start > end) {
        return 0;
    }

    int middle = start + (end - start) / 2;

    if (Arr[middle] >= m) {
        // Cuenta los elementos a la derecha de middle, incluyendo middle
        return (end - middle + 1) + contarMayoresIguales(Arr, m, start, middle - 1);
    } else {
        // Continúa buscando en la mitad derecha
        return contarMayoresIguales(Arr, m, middle + 1, end);
    }
}

int main() {
    int Arr[] = {1, 2, 3, 4, 7, 8, 10, 12};
    int n = sizeof(Arr) / sizeof(Arr[0]);
    int m = 13;

    int count = contarMayoresIguales(Arr, m, 0, n - 1);
    std::cout << "Total elementos: " << n << std::endl;
    std::cout << "Elementos mayores o iguales a " << m << ": " << count << std::endl;

    return 0;
}
