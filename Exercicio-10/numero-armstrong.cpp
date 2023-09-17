#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main () {
    /*Escreva um programa em C++ que leia um número inteiro e verifique se ele é um
    número armstrong. Um número armstrong (ou narcisista) é um número que é igual à
    soma de seus próprios dígitos elevados à quantidade de dígitos. Por exemplo, 153 é
    um número armstrong porque 1³ + 5³ + 3³ = 153.*/
    int number, digit = 0, sum = 0, multi = 1;

    cout << "Digite um numero inteiro para saber se ele eh um numero Armstrong: ";
    cin >> number;
    int inputNumber = number;

    string numberString = to_string(number);

    int numberOfDigits = numberString.size();

   while(number != 0) {
        digit = number % 10;
        for(int i = 0; i < numberOfDigits; i++) {
            multi *= digit;
        }
        sum += multi;
        multi = 1;
        number /= 10;
    }

    string message = 
    (inputNumber == sum ? " eh um nusmero Armstrong! O resultado da soma das potencias elevado ao total de digitos do numero eh: " 
    : 
    " nao eh um numero Armstrong. O resultado da soma das potencias elevado ao total de digitos do numero eh: ");
    
    cout << inputNumber << message << sum << endl;

    return 0;
}