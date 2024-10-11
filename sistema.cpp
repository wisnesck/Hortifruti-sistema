#include <iostream>
#include <fstream> //usada pra manipular arquivos txt
#include <string> //usada tbm para os arquivos txt
#include <vector>
#include <limits>
#include "produto.h"
using namespace std;

int opcao = 0;


//OPÇÃO MENU

void menu() {
    cout << "-------------- MENU --------------" << endl;
    cout << "----------------------------------" << endl;
    cout << "---- Digite a opcao desejada: ----" << endl;
    cout << endl;
    cout << "\t1. Inserir Produto" << endl;
    cout << "\t2. Exibir Produtos" << endl;
    cout << "\t3. Buscar Produtos" << endl;
    cout << "\t4. Excluir um Produto" << endl;
    cout << "\t5. Sair do Sistema" << endl;
    cout << endl; // espaçamento entre as linhas
    cin >> opcao;
    cout << endl;

    // condicao para nao dar erro caso insiram letras e nao forme um loop infinito
    // Limpa o erro
    // Ignora a entrada inválida
    // Redefine opcao para evitar saídas indesejadas

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        opcao = 0;
        cout << "Opcao invalida! Digite um numero valido!" << endl;
    }
}

//---------------------------------------------------------------------------------------------------------
//INSERIR PRODUTO



//---------------------------------------------------------------------------------------------------------
//LISTAR PRODUTOS

void listarProdutos() {
    ifstream arquivo(NOME_ARQUIVO);
    string linha;

    if(arquivo.is_open()) {
        while(getline(arquivo, linha)){
            size_t pos1 = linha.find(",");
            size_t pos2 = linha.find(",", pos1 + 1);

            string nome = linha.substr(0, pos1);
            float preco = stof(linha.substr(pos1 + 1, pos2 - pos1 - 1));
            int quantidade = stoi(linha.substr(pos2 + 1));

            cout << "Nome: " << nome << ", Preco: " << preco << " , Quantidade: " << quantidade <<endl;
        }

        arquivo.close();
    } else {
        cout << "Erro ao abrir o arquivo!" << endl;
    }
}

//---------------------------------------------------------------------------------------------------------
// BUSCAR PRODUTO

// usa colchetes porque estou declarando uma variavel dentro desse bloco case
// forma compacta de um loop for para iterar sobre todos os elementos do vetor produtos
// vou ver se o prod digitado é = a algum produto da lista
// se tiver esse produto na lista, irá aparecer ele e a quantidade dele.


void buscarProduto(vector<pair<string,int>>* produtos) {
    string nomeBusca;

    cout << "Digite o nome do produto para buscar: ";
    cin.ignore();
    getline(cin, nomeBusca);
    bool encontrado = false;

    for (const auto &produto : *produtos) {
        if (produto.first == nomeBusca) {
            cout << "\nNome: " << produto.first << " - Quantidade: " << produto.second << endl;
            encontrado = true;

        break;
        }
    }

    // condição para caso não tiver na lista o produto digitado na busca.

    if (!encontrado) {
            cout << "Produto nao encontrado!" << endl;
    }

    cout << endl;

}

//---------------------------------------------------------------------------------------------------------
//EXCLUIR PRODUTO

// percorre todos os itens da lista novamente
// vou mostrar novamente os produtos que possuo na minha lista

void excluirProduto(vector<pair<string, int>>* produtos) {

    string delProduto;

    cout << "Qual desses itens deseja deletar?" << endl;

    cout << endl;

    if (produtos->empty()) {
        cout << "Não possui nenhum produto na sua lista" << endl;
    } else {
        for (size_t i = 0; i < produtos->size(); i++) {

            cout << "ID:" << i + 1 << " - Produto: " << (*produtos)[i].first << " - Quantidade: " << (*produtos)[i].second << endl;
        }

        cout << endl;
        cout << "Digite o nome do produto para remover: " << endl;
        cin.ignore();
        getline(cin, delProduto);
        cout << endl;

        bool produtoEncontrado = false;

        // percorre a lista de novo
        // se prod (indice dele) que digitou tiver na lista
        // ".eraser" -> sintaxe para apagar o indice onde esta esse produto
        // boolean true confirmando a exclusão do item

        for (size_t i = 0; i < produtos->size(); i++) {
            if ((*produtos)[i].first == delProduto) {
                produtos->erase(produtos->begin() + i);

                cout << "Produto " << delProduto << " removido com sucesso!" << endl;
                produtoEncontrado = true;

                break;
            }
        }

        // condiçao caso o produto não tenha sido encontrado

        if (!produtoEncontrado) {
            cout << "Produto nao encontrado!" << endl;
        }
    }

    cout << endl;

//---------------------------------------------------------------------------------------------------------
//FUNÇAO PRINCIPAL

}

int main() {

    vector<pair<string, int>> produtos;

    do {

        menu();

        switch (opcao) {

            case 1:
                inserirProduto();
                break;
            case 2:
                listarProdutos();
                break;
            case 3: 
                buscarProduto(&produtos);
                break;
            case 4: 
                excluirProduto(&produtos);
                break;
            default:
                cout << "Saindo..." << endl;
        }
    } while (opcao != 5);

    return 0;
    
}
