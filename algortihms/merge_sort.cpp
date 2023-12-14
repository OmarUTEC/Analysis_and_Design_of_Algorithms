
/*
#include <iostream>

void merge(int Arr[], int p, int q, int r){
    int n1 = q-p+1;
    int n2 = r-q;
    int L[n1+1], R[n2+1];

    for(int i=1; i<n1; i++){
        L[i] = Arr[p+i-1];
    }

    for(int j=1; j<n2; j++){
        R[j] = Arr[q+j];
    }

    L[n1+1] = 1000000;
    R[n2+1] = 1000000;

    int i=1, j=1;

    for(int k=p; k<r; k++){
        if(L[i] <= R[j]){
            Arr[k] = L[i];
            i++;
        }
        else{
            Arr[k] = R[j];
            j++;
        }
    }
}

void merge_sort(int Arr[], int p, int r){
    if(p<r){
        int q = (p+r)/2;
        merge_sort(Arr, p, q);
        merge_sort(Arr, q+1, r);
        merge(Arr, p, q, r);
    }
}

int main(){


    return 0;
}
*/

#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

void merge(int Arr[], int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1 + 1], R[n2 + 1];

    for(int i = 0; i < n1; i++){
        L[i] = Arr[p + i];
    }

    for(int j = 0; j < n2; j++){
        R[j] = Arr[q + j + 1];
    }

    L[n1] = INT_MAX;
    R[n2] = INT_MAX;

    int i = 0, j = 0;

    for(int k = p; k <= r; k++){
        if(L[i] <= R[j]){
            Arr[k] = L[i];
            i++;
        }
        else{
            Arr[k] = R[j];
            j++;
        }
    }
}

void merge_sort(int Arr[], int p, int r){
    if(p < r){
        int q = floor((p + r) / 2); // divide
        merge_sort(Arr, p, q);      // conquer
        merge_sort(Arr, q + 1, r);  // conquer
        merge(Arr, p, q, r);        // combine
    }
}

int main(){
    int arr[] = {5, 2, 4, 4, 7, 1, 3, -2, 6};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    cout << "Array before sorting: ";
    for(int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    merge_sort(arr, 0, arr_size - 1);

    cout << "Array after sorting: ";
    for(int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}