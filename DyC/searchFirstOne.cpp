#include <iostream>
#include <cmath>

using namespace std;

int SearchFirstOne(int Arr[], int p, int q){

    if(p == q){
        return p;
    }

    int mid = floor((p+q)/2);

    if(Arr[mid] == 0){
        return SearchFirstOne(Arr, mid+1, q);
    }
    else{
        return SearchFirstOne(Arr, p, mid);
    }
}

int main(){

    int Arr[] = {0,0,0,1};
    int n = sizeof(Arr)/sizeof(Arr[0]);

    cout << SearchFirstOne(Arr, 0, n-1) << endl;

    return 0;
}