#include <iostream>
#include <cmath>

using namespace std;

int algoritmo(int A[], int p, int r, int v){
    if (p == r){
        if (A[p] == v){
            return p;
        } else {
            return -1;
        }
    }
    int mid = floor((p + r) / 2);

    if (A[mid]==v){
        return mid;
    }
    if (A[mid] > v){
        return algoritmo(A, p, mid, v);
    }
    else{
        return algoritmo(A, mid+1, r, v);
    }
}

int main(){
    int A[] = {1, 3, 4, 6, 8, 9};
    int n = sizeof(A) / sizeof(A[0]);
    int v = 3;
    cout << "answer -> " << algoritmo(A, 0, n-1, v) << endl;

    return 0;
}