#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "Interfaces.h"

#include <stdexcept>
#include <iostream>
#include <typeinfo>

using namespace std;

// Declara��o de classe stub da interface ILNAutenticacao.

class StubLNAutenticacao : public ILNAutenticacao
{

  public:
    // Defini��es de valores a serem usados como gatilhos para notifica��es de erros.

    string TRIGGER_FALHA = "pedropacn@gmail.com";
    string TRIGGER_ERRO_SISTEMA = "turval.go@gmail.com";

    // Declara��o de m�todo previsto na interface.

    ResultadoAutenticacao autenticar(const cCorreioEletronico &, const cSenha &) throw(runtime_error);
};

class StubLNGestao : public ILNGestao
{

  public:
    string TRIGGER_FALHA = "pedropacn@gmail.com";
    string TRIGGER_ERRO_SISTEMA = "turval.go@gmail.com";

    ResultadoGestao criarLeitor             (const cCorreioEletronico &, 
                                            const cSenha &, 
                                            const cNome &, 
                                            const cSobrenome &) throw(runtime_error);

    ResultadoGestao criarDesenvolvedor      (const cCorreioEletronico &, 
                                            const cSenha &, 
                                            const cNome &, 
                                            const cSobrenome &, 
                                            const cData &) throw(runtime_error);
                                            
    ResultadoGestao criarAdministrador      (const cCorreioEletronico &, 
                                            const cSenha &, 
                                            const cNome &, 
                                            const cSobrenome &, 
                                            const cData &, 
                                            const cEndereco &, 
                                            const cTelefone &) throw(runtime_error);
};



#endif // STUBS_H_INCLUDED
