#include <iostream>
#include <vector>
using namespace std;

int main () {
 int isPalindromeNumber, number, newDigit, reverseNumber = 0;

 cout << "Digite um numero para saber se ele eh Palindromo: ";
 cin >> number;

 isPalindromeNumber = number;

    while(number != 0) {
        newDigit = number % 10; // Obtem o último dígito do numero, que é o resto da divisão por 10;
        reverseNumber = reverseNumber * 10 + newDigit; // ao multiplicar por 10, o numero anda uma casa a esquerda e adiciona o digito
        number /= 10; // ao dividir por 10, o ultimo digito some, dando inicio ao um novo ciclo do loop.    
    }

    if(isPalindromeNumber == reverseNumber) {
        cout << "O numero " << isPalindromeNumber << " eh Palindromo;";
    } else {
        cout << "O numero " << isPalindromeNumber << " nao eh Palindromo;";
    }

    return 0;
}


