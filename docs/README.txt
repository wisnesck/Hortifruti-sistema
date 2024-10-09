Documentação do Sistema de Gerenciamento de Estoque para Hortifruti 

Introdução:

Este é um sistema simples de gerenciamento de estoque para um hortifruti. Ele permite que o usuário insira, exiba, busque e exclua produtos em estoque. O sistema é desenvolvido em C++ e utiliza um vetor para armazenar os produtos e suas quantidades.

Funcionalidades
O sistema oferece as seguintes funcionalidades:

Inserir Produto: Permite adicionar um novo produto ou atualizar a quantidade de um produto já existente.
Exibir Produtos: Exibe todos os produtos em estoque, junto com suas quantidades.
Buscar Produtos: Permite pesquisar um produto específico pelo nome.
Excluir um Produto: Permite remover um produto do estoque.
Sair do Sistema: Encerra o programa.

---------------------------------------------------------------------------------------------

Guia de Uso
Execução do Programa: Ao executar o programa, o menu principal será exibido com as opções disponíveis.
Navegação no Menu: O usuário pode escolher uma das opções digitando o número correspondente e pressionando "Enter".

Inserir Produto: Se a opção 1 for selecionada:
O programa solicitará o nome do produto e a quantidade.
Se o produto já existir, a quantidade será atualizada.
Se o produto não existir, ele será adicionado ao estoque.
O usuário será perguntado se deseja adicionar outro produto.

Exibir Produtos: Se a opção 2 for selecionada:
O programa listará todos os produtos e suas quantidades. Se não houver produtos, exibirá uma mensagem indicando que o estoque está vazio.
Buscar Produtos: Se a opção 3 for selecionada:
O programa solicitará o nome do produto a ser buscado e exibirá os detalhes se o produto for encontrado.

Excluir um Produto: Se a opção 4 for selecionada:
O programa exibirá uma lista de produtos e solicitará o nome do produto a ser removido.
Se o produto for encontrado, ele será excluído do estoque.

Sair do Sistema: Se a opção 5 for selecionada, o programa será encerrado.

---------------------------------------------------------------------------------------------

Estrutura do Código

1. Função menu()
Exibe o menu principal com as opções disponíveis.
Lê a entrada do usuário para escolher a opção desejada.

2. Função main()
Inicializa as variáveis necessárias para o funcionamento do sistema, como produtos (vetor que armazena pares de nome e quantidade dos produtos).

Executa um loop while que mantém o programa em execução até que a opção de sair seja selecionada (opcao != 5).

Controla o fluxo do programa com uma estrutura switch baseada na entrada do usuário:

Case 1: Inserir Produto.
Adiciona um novo produto ao vetor ou atualiza a quantidade se o produto já existir.
Solicita ao usuário se deseja continuar adicionando produtos.

Case 2: Exibir Produtos.
Lista todos os produtos e quantidades no estoque.
Exibe uma mensagem se o estoque estiver vazio.

Case 3: Buscar Produtos.
Solicita o nome do produto a ser buscado.
Pesquisa o produto no vetor e exibe seus detalhes se encontrado.
Exibe uma mensagem se o produto não for encontrado.

Case 4: Excluir um Produto.
Lista todos os produtos no estoque.
Solicita o nome do produto a ser excluído.
Remove o produto do vetor se ele for encontrado.

Default: Exibe a mensagem de saída e encerra o loop.

---------------------------------------------------------------------------------------------

Detalhes Técnicos

Armazenamento: Os produtos são armazenados em um vetor de pares (vector<pair<string, int>>), onde o string representa o nome do produto e o int representa a quantidade.

Estruturas de Controle: São utilizadas estruturas de controle como while, do-while, e for para gerenciar o fluxo do programa e a interação com o usuário.

Validação: Existem verificações para evitar operações em um vetor vazio e para garantir que as operações de busca e exclusão sejam realizadas corretamente.

---------------------------------------------------------------------------------------------

Exemplo de Uso

O usuário executa o programa e seleciona a opção 1 para inserir um produto.
O usuário insere "Maçã" como nome do produto e "10" como quantidade.
O usuário escolhe exibir os produtos (opção 2) e vê que "Maçã" está listada com a quantidade "10".
O usuário adiciona outro produto "Banana" com quantidade "5".
O usuário busca pelo produto "Banana" e vê que ele está em estoque com a quantidade "5".
O usuário decide excluir "Maçã" do estoque (opção 4) e o sistema remove o produto com sucesso.
O usuário encerra o programa selecionando a opção 5.

---------------------------------------------------------------------------------------------

Melhorias Futuras

Para um sistema de hortifruti, além das funcionalidades já implementadas, as seguintes melhorias podem ser consideradas para tornar o sistema mais completo e funcional:

Atualizar Produto: Adicionar uma opção para modificar as informações de um produto existente, como nome ou quantidade.

Visualizar Relatórios: Implementar relatórios detalhados sobre os produtos em estoque, produtos mais vendidos, e produtos com estoque baixo.

Estoque Mínimo: Definir um estoque mínimo para cada produto e alertar quando um produto atingir esse limite, ajudando a manter um controle mais eficiente.

Cadastrar Categorias: Permitir a categorização dos produtos, como "Frutas", "Legumes", "Verduras", etc., para facilitar a organização e a consulta.

Registrar Vendas: Adicionar uma opção para registrar vendas, reduzindo automaticamente a quantidade dos produtos vendidos no estoque.

Histórico de Transações: Manter um registro detalhado das operações feitas no sistema, como vendas, inserções, e exclusões, para fins de auditoria e análise.

Consulta de Vendas por Período: Oferecer relatórios de vendas por período (diário, semanal, mensal), ajudando a analisar o desempenho do hortifruti.

Aplicar Descontos/Promoções: Implementar uma ferramenta para aplicar descontos em certos produtos, seja por quantidade ou por promoções específicas.