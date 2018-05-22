#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

#include <stdexcept>

using namespace std;

// Declaracao adiantada.

class ILNAutenticacao;

/**
 * Interface de Autenticacao na camada de Apresentacao. Contem metodos abstratos para dar inicio ao processo de autenticacao de formato em um Ḿodulo de Apresentacao..
 */
class IUAutenticacao
{
  public:

/**Metodo Abstrato Autenticar. E chamado para fazer o papel da autenticação de FORMATO e pode lançar excecao. */
    virtual ResultadoAutenticacao autenticar() throw(runtime_error) = 0;


/**Metodo "link". Metodo por meio do qual e estabelecida ligacao (link) com a controladora na camada de servico. */
    virtual void setCntrLNAutenticacao(ILNAutenticacao *) = 0;


/**Metodo Destrutor virtual. */
    virtual ~IUAutenticacao() {}
};


/**
 * Interface de Autenticacao na camada de Servico. Contem metodos abtratos para dar inicio ao processo de autenticacao em um Modulo de Servico (Stub).
 */
class   ILNAutenticacao
{
  public:

/**Metodo Abstrato Autenticar. E chamado para fazer o papel da autenticação e pode lançar excecao. Recebe um email e senha de usuario. */
    virtual ResultadoAutenticacao autenticar(const cCorreioEletronico &, const cSenha &) throw(runtime_error) = 0;

/**Metodo Destrutor Virtual. */
    virtual ~ILNAutenticacao() {}
};

// Declaracao adiantada.

class ILNGestao;

/** Interface de Gestao de Usuario na camada de Apresentacao. Contem metodos abstratos para dar inicio a gestao de usuario/contas.
 * Tais metodos sao implementados pelo Modulo responsavel e basicamente fazem chegagem de Formato dos dados fornecidos.
 */
class IUGestao
{
public:
  /** Metodo Abstrato criarLeitor. Da inicio a criacao de um usuario Leitor e faz validacao dos dados fornecidos. Implementada pelo modulo CtrlIUGestao. */
  virtual ResultadoGestao criarLeitor() throw(runtime_error) = 0;

  /** Metodo Abstrato criarDesenvolvedor. Da inicio a criacao de um usuario Desenvolvedor e faz validacao dos dados fornecidos. Implementada pelo modulo CtrlIUGestao.*/
  virtual ResultadoGestao criarDesenvolvedor() throw(runtime_error) = 0;

  /** Metodo Abstrato criar Administrador. Da inicio a criacao de um usuario Administrador e faz a validacao dos dados fornecidos. Implementada pelo modulo CtrlIUGestao.*/
  virtual ResultadoGestao criarAdministrador() throw(runtime_error) = 0;

  /** Metodo "link". Metodo por meio do qual e estabelecida ligacao (link) com a controladora na camada de servico (Stub).*/
  virtual void setCntrLNGestao(ILNGestao *) = 0;

  /** Metodo Destrutor Virtual.*/
  virtual ~IUGestao() {}
};

/**
 * Interface de Gestao de Usuario na camada de Servico. Contem metodos abtratos para fazer gestao de usuario a nivel de Modulo de Servico (Stub).
 */
class ILNGestao
{
public:
  /** Metodo Abstrato criarLeitor. Cria o usuario Leitor apos feita a etapa de validacao de formato. Implementada pelo modulo de Servico (Stub). */
  virtual ResultadoGestao criarLeitor(const cCorreioEletronico &, const cSenha &, const cNome &, const cSobrenome &) throw(runtime_error) = 0;

  /** Metodo Abstrato criarDesenvolvedor. Cria o usuario Desenvolvedor apos feita a etapa de validacao de formato. Implementada pelo modulo de Servico (Stub). */
  virtual ResultadoGestao criarDesenvolvedor(const cCorreioEletronico &, const cSenha &, const cNome &, const cSobrenome &, const cData &) throw(runtime_error) = 0;

  /** Metodo Abstrato criarAdministrador. Cria o usuario Administrador apos feita a etapa de validacao de formato. Implementada pelo modulo de Servico (Stub). */
  virtual ResultadoGestao criarAdministrador(const cCorreioEletronico &, const cSenha &, const cNome &, const cSobrenome &, const cData &, const cEndereco &, const cTelefone &) throw(runtime_error) = 0;

  /** Metodo Destrutor Virtual.*/
  virtual ~ILNGestao() {}
};

class ILNVocabulario;

/** Interface de Vocabulario de Usuario na camada de Apresentacao. Contem metodos abstratos para dar inicio a vocabulario de usuario/contas.
 * Tais metodos sao implementados pelo Modulo responsavel e basicamente fazem chegagem de Formato dos dados fornecidos.
 */
class IUVocabulario
{
public:

  /** Metodo "link". Metodo por meio do qual e estabelecida ligacao (link) com a controladora na camada de servico (Stub).*/
  virtual void setCntrLNVocabulario(ILNVocabulario *) = 0;

  /** Metodo Destrutor Virtual.*/
  virtual ~IUVocabulario() {}
  virtual ResultadoVocabulario Menu(const ResultadoAutenticacao &user) throw(runtime_error) = 0;

  virtual void MostrarDados() = 0;
  virtual void AlterarDados() = 0;
  virtual void ApagarUsuario() = 0;
  virtual void Listar() = 0;
  virtual void DadosVocab() = 0;
  virtual void ConsultarTermo() = 0;
  virtual void ConsultarDefinicao() = 0;

  //desenvolvedor
  virtual void CadastrarDev() = 0;
  virtual void CriarVocab() = 0;
  virtual void ApagarVocab() = 0;
  virtual void EditarVocab() = 0;

  //administrador
  virtual void EditarIdioma() = 0;
};

/**
 * Interface de Vocabulario de Usuario na camada de Servico. Contem metodos abtratos para fazer vocabulario de usuario a nivel de Modulo de Servico (Stub).
 */
class ILNVocabulario
{
public:
  virtual void Menu(const ResultadoAutenticacao &user) = 0;
  virtual void MostrarDados() throw(runtime_error) = 0;
  virtual void AlterarDados() = 0;
  virtual void ApagarUsuario() = 0;
  virtual void Listar() = 0;
  virtual void DadosVocab(const string &str) = 0;
  virtual void ConsultarTermo(const string &str) = 0;
  virtual void ConsultarDefinicao(const string &str) = 0;

  //desenvolvedor
  virtual void CadastrarDev() = 0;
  virtual void CriarVocab() = 0;
  virtual void ApagarVocab() = 0;
  virtual void EditarVocab() = 0;

  //administrador
  virtual void EditarIdioma() = 0;

  /** Metodo Destrutor Virtual.*/
  virtual ~ILNVocabulario() {}
};

#endif // INTERFACES_H_INCLUDED
