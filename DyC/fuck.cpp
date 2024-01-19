#include <iostream>
#include <cmath>

using namespace std;

int Algo(int Arr[], int p, int r, int m){

    if (p == r){
        return 0;
    }

    else{
        int mid = floor((p+r)/2);
        if(Arr[mid+1] >= m){
            return r - mid + Algo(Arr, p, mid, m);
        }
        else{
            return Algo(Arr, mid+1, r, m);
        }
    }
}

int main(){

    int Arr[] = {1,2,3,4,7,8,10,12};

    int n = sizeof(Arr)/sizeof(Arr[0]);
    int m = 1;

    cout << Algo(Arr, 0, n-1, m) << endl;

    return 0;
}