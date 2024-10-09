/*

>>>> INSERIR PRODUTO

void inserirProduto(vector<pair<string, int>> *produtos) { 
  
    string nomeProduto, continuar;
    int qntProduto;
    //falta o preco

    do
    {
        cout << "Digite o nome do Produto: " << endl;
        cout << ">> ";
        cin.ignore();
        getline(cin, nomeProduto);
        cout << endl;
        cout << "Digite a quantidade: " << endl;
        cin >> qntProduto;
        cout << endl;

        bool produtoEncontrado = false;

        // ver se o produto digitado ja esta na lista (se tiver, vai somar o valor atual com o valor que ja possuia nele anteriormente)
        // percorre minha lista
        // verifica se ja possui esse produto na lista
        // se ja tiver,acrescenta a quantidade no produto ja existente

        for (int i = 0; i < produtos->size(); i++) {
            if ((*produtos)[i].first == nomeProduto) {
                (*produtos)[i].second += qntProduto;
                produtoEncontrado = true;
                cout << "Quantidade atualizada para o produto: " << nomeProduto << endl;
                break;
            }
        }

        // condição feita para acrescentar um novo produto na lista, caso esse produto digitado ainda não esteja nela.
        // sintaxe ".push_back" -> armazena o produto e a quantidade

        if (!produtoEncontrado) {
            produtos->push_back(make_pair(nomeProduto, qntProduto));
            cout << endl;
            cout << "Produto adicionado com sucesso!" << endl;
            cout << endl;
        }

        // verifica se precisa adicionar outro produto

        while (true) {
            cout << "Deseja adicionar outro produto? (s/n): ";
            cin >> continuar;
            cout << endl;

            if (continuar == "s" || continuar == "S" || continuar == "n" || continuar == "N") {
                break;
            } else {
                cout << "Opcao invalida! Por favor, digite 's' para sim ou 'n' para nao.\n"
                     << endl;
            }
        }

    } while (continuar == "s" || continuar == "S");
    
     // while -> vai repetir todo esse processo sempre que digitar S ou s -> obs: usei o do while, porque ele vai sempre executar o menu pelo menos uma vez antes de testar o codigo (mesmo que dê errado).
     
}

>>>> LISTAR PRODUTO

// funçao em vetor, fazendo realocaçao de ponteiros para economizar memoria
// condiçao para quando nao tiver nenhum produto na lista
//  se tiver produtos em estoque, vai executar
//  percorrer toda a lista de produtos
//  mostra todos os produtos na lista

void listarProdutos(vector<pair<string, int>> *produtos) {

    if (produtos->empty()) {
        cout << "Nenhum produto em estoque!" << endl;
    } else {
        cout << "Produtos em estoque: " << endl;
        for (size_t i = 0; i < produtos->size(); i++) {
            cout << "ID:" << i + 1 << " - Produto: " << produtos->at(i).first 
            << " - Quantidade: " << produtos->at(i).second << endl;
        }
    }

    cout << endl;
}

*/
