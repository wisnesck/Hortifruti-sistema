#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
using namespace std;

struct Produto {
    string nome;
    int quantidade;
    double preco;
};

void inserirProduto();

#endif