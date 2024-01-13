#include <iostream>

using namespace std;

// Recursive function to print the Fibonacci numbers
int fibonacci(int n){

    if(n == 0 || n == 1){
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){

    int n = 12;

    cout << fibonacci(n) << endl;

    return 0;
}