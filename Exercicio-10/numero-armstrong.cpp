#include <iostream>
#include <cmath>

using namespace std;


int main () {
    /*Escreva um programa em C++ que leia um número inteiro e verifique se ele é um
    número armstrong. Um número armstrong (ou narcisista) é um número que é igual à
    soma de seus próprios dígitos elevados à quantidade de dígitos. Por exemplo, 153 é
    um número armstrong porque 1³ + 5³ + 3³ = 153.*/
    int number, digit, sum = 0;

    cout << "Digite um numero inteiro para saber se ele eh um numero Armstrong: ";
    cin >> number;
    int inputNumber = number;

    string numberString = to_string(number);

    int numberOfDigits = numberString.size();

   while(number != 0) {
        digit = number % 10;
        sum += pow(digit, numberOfDigits);
        number /= 10;
    } 

    string message = 
    (inputNumber == sum ? " é um número Armstrong! O resultado da soma das potências elevado ao total de digitos do numero eh: " 
    : 
    " não eh um número Armstrong. O resultado da soma das potências elevado ao total de digitos do numero eh: ");
    
    cout << inputNumber << message << sum << endl;

    return 0;
}