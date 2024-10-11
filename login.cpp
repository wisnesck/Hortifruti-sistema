#include <iostream>
#include <string>
using namespace std;

int main()
{

    string usuario, senha;
    string usuarioCorreto = "admin";
    string senhaCorreta = "123456";

    cout << "\tTELA DE LOGIN!\n" << endl;
    cout << "\nPor favor, digite os dados abaixo para acessar: \n" << endl;

    cout << "Usuario: ";
    cin >> usuario;

    cout << "Senha: ";
    cin >> senha;

    if (usuario == usuarioCorreto && senha == senhaCorreta) {
        if (verificarSenha(senha)) {
            cout << "\n\tDados corretos! \nBem vindo(a) ao nosso sistema!";
        } else {
            cout << "\nDados incorretos, verifique e tente novamente!";
        }

        // LIMPAR A TELA DEPOIS DISSO E CHAMAR O MENU PRINCIPAL
    }

    return 0;
}

/* criar usuario
criar senha de apenas 6 numeros inteiros positivos.
*/