#include <iostream>
#include <vector>
using namespace std;

int main () {
 int isPalindromeNumber, number, newDigit, reverseNumber = 0;

 cout << "Digite um numero para saber se ele eh Palindromo: ";
 cin >> number;

 isPalindromeNumber = number;

    while(number != 0) {
        newDigit = number % 10;
        reverseNumber = reverseNumber * 10 + newDigit;
        number /= 10;
    }

    if(isPalindromeNumber == reverseNumber) {
        cout << "O numero " << isPalindromeNumber << " eh Palindromo;";
    } else {
        cout << "O numero " << isPalindromeNumber << " nao eh Palindromo;";
    }

    return 0;
}


