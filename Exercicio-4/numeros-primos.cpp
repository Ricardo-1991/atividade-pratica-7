#include <iostream>
using namespace std;
#define MAX_LIMIT 100

int main () {
    // Escreva um programa em C++ que imprima todos os números primos de 1 a 100.
    for (int i = 2; i <= MAX_LIMIT; i++) {
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << endl;
        }
    }
    return 0;
}