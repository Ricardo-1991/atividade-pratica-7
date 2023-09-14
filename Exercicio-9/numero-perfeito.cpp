#include <iostream> 

using namespace std;


int main () {


    int number, sum = 0;

    cout << "Digite um numero inteiro para saber se ele e perfeito: ";
    cin >> number;

    for(int i = 1; i < number; i++){
        if(number % i == 0) {
            sum += i;
        }
    }
    string message = 
    (number == sum ? " é um número perfeito! O resultado da soma dos seus divisores eh: " 
    : 
    " não eh um número perfeito. O resultado da soma dos seus divisores eh: ");
    
    cout << number << message << sum << endl;
    return 0;
}