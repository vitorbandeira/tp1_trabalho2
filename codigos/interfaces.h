#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

#include <stdexcept>

using namespace std;

// Declara��o adiantada.

class ILNAutenticacao;

// Declara��o de interface para servi�o de autentica��o na camada de apresenta��o.

class IUAutenticacao
{
  public:
    // M�todo por meio do qual � solicitado servi�o.

    virtual ResultadoAutenticacao autenticar() throw(runtime_error) = 0;

    // M�todo por meio do qual � estabelecida liga��o (link) com a controladora na camada de servi�o.

    virtual void setCntrLNAutenticacao(ILNAutenticacao *) = 0;

    // M�todo destrutor virtual.

    virtual ~IUAutenticacao() {}
};

// Declara��o de interface para servi�o de autentica��o na camada de servi�o.

class ILNAutenticacao
{
  public:
    // M�todo por meio do qual � solicitado servi�o.

    virtual ResultadoAutenticacao autenticar(const cCorreioEletronico &, const cSenha &) throw(runtime_error) = 0;

    // M�todo destrutor virtual.

    virtual ~ILNAutenticacao() {}
};

// Declara��o adiantada.

class ILNGestao;

// Declara��o de interface para servi�o de autentica��o na camada de apresenta��o.

class IUGestao
{
  public:
    // M�todo por meio do qual � solicitado servi�o.

    virtual ResultadoGestao criarUsuario() throw(runtime_error) = 0;

    // M�todo por meio do qual � estabelecida liga��o (link) com a controladora na camada de servi�o.

    virtual void setCntrLNGestao(ILNGestao *) = 0;

    // M�todo destrutor virtual.

    virtual ~IUGestao() {}
};

// Declara��o de interface para servi�o de autentica��o na camada de servi�o.

class ILNGestao
{
  public:
    // M�todo por meio do qual � solicitado servi�o.

    virtual ResultadoGestao criarUsuario(const cCorreioEletronico &, const cSenha &) throw(runtime_error) = 0;

    // M�todo destrutor virtual.

    virtual ~ILNGestao() {}
};

#endif // INTERFACES_H_INCLUDED
