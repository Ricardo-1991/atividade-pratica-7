#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main () {
    // Desenvolva um programa que receba a matrícula (apenas números) e 3 notas de um
    // grupo de alunos. A cada aluno cadastrado o programa deve perguntar se deseja
    // prosseguir com outro. Em seguida, calcule a média de cada aluno e imprima os dados
    // da seguinte forma:

    // Criando uma matriz (vetor de vetores) usando std::vector
    std::vector<std::vector<float>> matriz;
    int qtdNotas = 3;
    int novasLinhas = 1;
    char answer;
    float media = 0;

    for (int i = 0; i < novasLinhas; i++) {
            vector<float> linha; 
            int matricula;
            float total = 0;
            cout << "Informe a matricula do aluno" <<endl;
            cin >> matricula;
            linha.push_back(matricula);
        for (int j = 0; j < qtdNotas; j++) {
            float grade;
            cout << "Informe a nota [" << j + 1 << "]";
            cin >> grade;
            linha.push_back(grade);
            total += grade;
        }
        media = total / qtdNotas;
        linha.push_back(media);
        matriz.push_back(linha);

            cout << "Deseja criar um novo cadastro? (s/n)" << endl;
            cin >> answer;
            if(answer == 's'){
                novasLinhas++;
            } else {
                break;
            }
    }
    
    for (int i = 0; i < matriz.size(); i++) {
            cout<< "Matricula         " << "Nota1      " << "Nota2      " << "Nota3      " << "Media"  <<endl;
            cout<< "========================================================" <<endl;
        for (int j = 0; j < matriz[i].size(); j++) {
            cout << fixed << setprecision(2) << matriz[i][j] << "       ";
        }
            cout << endl;
            cout << endl;
    }


    return 0;
}

