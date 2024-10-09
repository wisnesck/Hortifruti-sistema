#include <iostream>
using namespace std;

int main() {

    string usuario;
    int senha;

    cout << "\tTELA DE LOGIN!\n" << endl;
    cout << "\nPor favor, digite os dados abaixo para acessar: \n" << endl;
    
    cout << "Usuario: ";
    cin >> usuario;

    cout << "Senha: ";
    cin >> senha;
    
    if(usuario == "admim" && senha == 123456) {
        cout << "\n\tDados corretos! \nBem vindo(a) ao nosso sistema!";
        //LIMPAR A TELA DEPOIS DISSO E CHAMAR O MENU PRINCIPAL
    } else {
        cout << "\nDados incorretos, verifique e tente novamente!";
    }

    return 0;
}


/* criar usuario 
criar senha de apenas 6 numeros inteiros positivos.
*/