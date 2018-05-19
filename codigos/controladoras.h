#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED

#include "interfaces.h"
#include "dominios.h"

#include <stdexcept>
#include <iostream>

using namespace std;

// Declara��o de classe controladora de intera��o para o servi�o de autentica��o.

class CntrIUAutenticacao : public IUAutenticacao
{

  private:
    // Refer�ncia para servidor.

    ILNAutenticacao *cntrLNAutenticacao;

  public:
    ResultadoAutenticacao autenticar() throw(runtime_error);

    void setCntrLNAutenticacao(ILNAutenticacao *);
};

void inline CntrIUAutenticacao::setCntrLNAutenticacao(ILNAutenticacao *cntrLNAutenticacao)
{
    this->cntrLNAutenticacao = cntrLNAutenticacao;
}

class CntrIUGestao : public IUGestao
{

  private:
    // Refer�ncia para servidor.

    ILNGestao *cntrLNGestao;

  public:
    ResultadoGestao criarLeitor() throw(runtime_error);
    ResultadoGestao criarDesenvolvedor() throw(runtime_error);
    ResultadoGestao criarAdministrador() throw(runtime_error);

    void setCntrLNGestao(ILNGestao *);
};

void inline CntrIUGestao::setCntrLNGestao(ILNGestao *cntrLNGestao)
{
    this->cntrLNGestao = cntrLNGestao;
}

#endif // CONTROLADORAS_H_INCLUDED
