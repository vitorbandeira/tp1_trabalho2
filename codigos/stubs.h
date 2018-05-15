#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "Interfaces.h"

#include <stdexcept>
#include <iostream>
#include <typeinfo>

using namespace std;

// Declara��o de classe stub da interface ILNAutenticacao.

class StubLNAutenticacao:public ILNAutenticacao{

public:

    // Defini��es de valores a serem usados como gatilhos para notifica��es de erros.

    const static char * TRIGGER_FALHA        = "pedropacn@gmail.com";
    const static char * TRIGGER_ERRO_SISTEMA = "turval.go@gmail.com";

    // Declara��o de m�todo previsto na interface.

    ResultadoAutenticacao autenticar(const cCorreioEletronico&, const cSenha&) throw(runtime_error);
};


#endif // STUBS_H_INCLUDED
