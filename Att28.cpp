#include <iostream>
using namespace std;
const int N = 6;

// Função para imprimir a matriz
void imprimirMatriz(int matriz[N][N]) {
    int terraRetirada = 0; // vai guardar o tanto de terra a ser retirada do terreno!
    for(int i = 2; i < 6; i++){
        for(int j = 3; j < 6; j++){ // os laços foi feito pra passar so nas areas desejadas do terreno!
        
                cout << matriz[i][j] << "-"; // So coloquei pra mostrar que acertamos os campos que devemos acessar pra contar a terra!
                terraRetirada = terraRetirada + (matriz[i][j] - 10); // Atualiza a quantia de terra que devemos retirar, caso seja mais q 10, adiciona, caso seja menos, subtrai!
                cout << "TERRA:"<< terraRetirada << endl; // Exibe a cada casa da matriz a quantia de terra que se deve tirar ou colocar!
        }
        cout<<endl;
    }
    cout << terraRetirada; // total a se retirar do terreno!
}

int main() {
    // Criando e inicializando a matriz
    int matriz[N][N] = {
        {1, 3, 3, 5, 6, 7},
        {2, 1, 2, 5, 7, 9},
        {2, 4, 5, 9, 2, 15},
        {5, 8, 8, 2, 13, 12},
        {5, 6, 5, 8, 14, 16},
        {5, 5, 7, 12, 14, 15}
    };

    // Passando a matriz para a função
    imprimirMatriz(matriz);

    return 0;
}
