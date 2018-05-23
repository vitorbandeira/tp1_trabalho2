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
  /** Metodo Virtual Abstrato Menu. Exibe menu de opcao relativas a gestao de vocabulario, caso o usuario tenha sido autenticado com sucesso.*/
  virtual ResultadoVocabulario Menu(const ResultadoAutenticacao &user) throw(runtime_error) = 0;


  /** Metodo Virtual Abstrato Menu. Apresenta novas opcoes ao usuario caso ele tenha sido autenticado com sucesso. Implementado por CtrlIUVocabulario.*/
  virtual void Menu(const ResultadoAutenticacao &user) throw(runtime_error) = 0;
  /** Metodo Virtual Abstrato MostrarDados. Exibe dados do usuario. */
  virtual void MostrarDados() = 0;
  /** Metodo Virtual Abstrato AlterarDados. Oferece ao usuario opcoes referentes a alteracao de dados quaisquer de conta. Implementada por CtrlIUVocabulario.*/
  virtual void AlterarDados() = 0;
  /** Metodo Virtual Abstrato ApagarUsuario. Simula a delecao de um usuario e e implementada por CtrlIUVocabulario. */
  virtual void ApagarUsuario() = 0;
  /** Metodo Virtual Abstrato Listar. Lista vocabularios existentes. Implementada por CtrlIUVocabulario.*/
  virtual void Listar() = 0;
  /** Metodo Virtual Abstrato DadosVocabulario. Busca dados de um vocabulario existente fornecido pelo usuario. Implementada por CtrlIUVocabulario.*/
  virtual void DadosVocab() = 0;
  /** Metodo Virtual Abstrato ConsultarTermo. Consulta um termo fornecido pelo usuario. Implementado por CtrlIUVocabulario.*/
  virtual void ConsultarTermo() = 0;
  /** Metodo Virtual Abstrato ConsultarDefinicao. Consulta a definicao de um vocabulario fornecido pelo usuario. Implementado por CtrlIUVocabulario.*/
  virtual void ConsultarDefinicao() = 0;

  //desenvolvedor
  /** Metodo Virtual Abstrato CadastrarDev. Simula o cadastro de um desenvolvedor. Implementado por CtrlIUVocabulario*/
  virtual void CadastrarDev() = 0;
  /** Metodo Virtual Abstrato CriarVocabulario. Faz a tentativa de criar vocabulario conforme queira o usuario. Faz validacao de formato dos atributos de um Vocabulario (Nome, idioma e data). Implementado por CtrlIUVocabulario*/
  virtual void CriarVocab() = 0;
  /** Metodo Virtual Abstrato ApagarVocabulario. Apenas simula a delecao de um vocabulario. Implementado por CtrlIUVocabulario*/
  virtual void ApagarVocab() = 0;
  /** Metodo Virtual Abstrato EditarVocabulario. Simula a edicao de um vacabulario. Implementado por CtrlIUVocabulario*/
  virtual void EditarVocab() = 0;

  //administrador
  /** Metodo Virtual Abstrato EditarIdioma. Simula a edicao de um vocabulario. Implementado por CtrlIUVocabulario*/
  virtual void EditarIdioma() = 0;
};

/**
 * Interface de Vocabulario de Usuario na camada de Servico. Contem metodos abstratos para fazer gestao de vocabulario a nivel de Modulo de Servico (Stub).
 */
class ILNVocabulario
{
public:
  /** Metodo Virtual Abstrato Menu. Implementado por CtrlIUVocabulario.*/
  virtual void Menu(const ResultadoAutenticacao &user) = 0;
  /** Metodo MostrarDados. Simula a exibicao de dados de usuario.*/
  virtual void MostrarDados() throw(runtime_error) = 0;
  /** Metodo Virtual Abstrato AlterarDados. Simula a alteracao de dados pelo Stub correspondente (StubLNVocabulario).*/
  virtual void AlterarDados() = 0;
  /** Metodo Virtual Abstrato ApagarUsuario. Simula a delecao de um usuario pelo Stub correspondente (StubLNVocabulario).*/  
  virtual void ApagarUsuario() = 0;
  /** Metodo Virtual Abstrato Listar. Simula a listagem de alguns vocabularios "existentes".*/
  virtual void Listar() = 0;
  /** Metodo Virtual Abstrato DadosVocabulario. Simula dados de um vocabulario fornecido para pesquisa pelo usuario. Implementado por StubLNVocabulario.*/
  virtual void DadosVocab(const string &str) = 0;
  /** Metodo Virtual Abstrato ConsultarTermo. Simula a consulta de um termo fornecido pelo usuario. Implementado por StubLNVocabulario.*/
  virtual void ConsultarTermo(const string &str) = 0;
  /** Metodo Virtual Abstrato ConsultarTermo. Simula a consulta da definicao de um termo fornecido pelo usuario. Implementado por StubLNVocabulario.*/
  virtual void ConsultarDefinicao(const string &str) = 0;

  //desenvolvedor
  /** Metodo Virtual Abstrato CadastrarDev. Simula o cadastro de um Desenvolvedor.*/
  virtual void CadastrarDev() = 0;
  /** Metodo Virtual Abstrato CriarVocabulario. Simula a criacao de vocabulario pelo desenvolvedor.*/
  virtual void CriarVocab() = 0;
  /** Metodo Virtual Abstrato ApagarVocabulario. Simula a delecao de vocabulario pelo desenvolvedor.*/
  virtual void ApagarVocab() = 0;
  /** Metodo Virtual Abstrato EditarVocabulario. Simula a edicao de um vocabulario pelo desenvolvedor*/
  virtual void EditarVocab() = 0;

  //administrador
  /** Metodo Virtual Abstrato EditarIdioma. Simula a edicao do idioma de um vocabulario dado pelo usuario.*/
  virtual void EditarIdioma() = 0;

  /** Metodo Destrutor Virtual.*/
  virtual ~ILNVocabulario() {}
};

#endif // INTERFACES_H_INCLUDED
