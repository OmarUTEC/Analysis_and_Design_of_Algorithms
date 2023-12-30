#include <iostream>
#include <vector>

// Función de partición para QuickSort
int partition(std::vector<int> &arr, int p, int r) {
    int x = arr[r];
    int i = p - 1;

    for (int j = p; j < r; ++j) {
        if (arr[j] <= x) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[r]);
    return i + 1;
}

// Función QuickSort
void quickSort(std::vector<int> &arr, int p, int r) {
    if (p < r) {
        int q = partition(arr, p, r);
        quickSort(arr, p, q - 1);
        quickSort(arr, q + 1, r);
    }
}

// Función de prueba
void testQuickSort() {
    std::vector<int> arr = {12, 9, 7, 15, 10, -23, 4, 6};
    int n = arr.size();

    std::cout << "Array antes de ordenar: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    quickSort(arr, 0, n - 1);

    std::cout << "Array ordenado: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    testQuickSort();
    return 0;
}
