#include <iostream>
#include <fstream> //usada pra manipular arquivos txt
#include <string> //usada tbm para os arquivos txt
#include "produto.h"
using namespace std;

const string NOME_ARQUIVO = "produto.txt";

void inserirProduto() {
    Produto p;
    cout << "Digite o nome do produto: ";
    cin.ignore();
    getline(cin, p.nome);
    cout << "Digite o preco do produto: ";
    cin >> p.preco;
    cout << "Digite a quantidade do produto: ";
    cin >> p.quantidade;

    ofstream arquivo(NOME_ARQUIVO, ios::app);
    if (arquivo.is_open()) {
        arquivo << p.nome << ", " << p.preco << ", " << p.quantidade << endl;
        arquivo.close();

        cout << "Produto adicionado com sucesso!" << endl;
    } else {
        cout << "Erro ao abrir arquivo!" << endl;
    }
}

