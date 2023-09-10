#include <iostream>
#include <ctime>


using namespace std;

int main () {
    // Escreva um programa em C++ que simule um jogo de adivinhação. O programa deve
    // gerar um número aleatório entre 1 e 100, e o usuário deve tentar adivinhar esse
    // número. O jogo deve informar se o palpite está alto, baixo ou correto, e continuar até
    // que o usuário acerte o número.
    srand(time(NULL));
    int randomNumber = 0;
    int userGuesses;
    int min = 1, max = 100;
    int attempts = 0;

    randomNumber = (rand() % 100) + 1;
    cout << randomNumber << endl;

    cout << "Um numero aleatorio entre 1 e 100 foi gerado." << endl << "Que numero eh esse?: ";
    cin >> userGuesses; 

    if(userGuesses > 100 || userGuesses < 1) {
        cout << "Numero invalido. Digite um numero entre 1 e 100: ";
    }

    do{
        attempts++;
        if(userGuesses > randomNumber){
            max = userGuesses;
            cout << "Seu palpite está alto!" << endl;
            cout << "O numero esta entre " << min << " e " << max << endl;
        }


        if(userGuesses < randomNumber){
            min = userGuesses;
            cout << "Seu palpite está baixo!" << endl;
            cout << "O numero esta entre " << min << " e " << max << endl;
        }

        if(userGuesses != randomNumber) {
            cout << "Tente outro numero: ";
            cin >> userGuesses;
        }

        if(userGuesses == randomNumber) {
            cout << "Parabéns! Voce adivinhou o numero! " << endl 
            << "Numero aleatorio: " << randomNumber << endl << "Numero digitado: " << userGuesses << endl;
            cout << "Houveram " << attempts + 1 << " Tentativas";
        }

    } while(userGuesses != randomNumber);

      
    return 0;
}