#include <iostream>
#include <vector>
using namespace std;

int main () {
    int number = 0;

    cout << "Digite um numero para saber todos os seus divisores: ";
    cin >> number;
    
    for(int i = 1; i < number; i++) {
        if(number % i == 0) {
            cout << i << " ";
        }
    }
}