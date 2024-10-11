#ifndef VERIFICA_H
#define VERIFICA_H;

#include <string>
using namespace std;

// Verifica se a senha tem 6 caracteres
bool verificarSenha(const string& senha){
    if(senha.length() != 6) {
        return false;
    }
    return true;
}

#endif