#include <iostream>
#include <vector>

void merge(Arr, p, q, r){
    
}

void merge_sort(Arr, p, r){
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