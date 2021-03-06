#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED

#include "interfaces.h"
#include "dominios.h"

#include <stdexcept>
#include <iostream>

using namespace std;


/** Controladora para Modulo de Autenticacao na camada de Aprensentacao. Incorpora e implementa os metodos abstratos da interface que oferece. */
class CntrIUAutenticacao : public IUAutenticacao
{

  private:

/**Atributo link. Cria referencia para o servidor (Stub) */
    ILNAutenticacao *cntrLNAutenticacao;

  public:
/**Metodo Autenticar. E chamado para fazer o papel da autenticação de FORMATO e pode lançar excecao.*/
    ResultadoAutenticacao autenticar() throw(runtime_error);

/**Metodo "link". Metodo por meio do qual e estabelecida ligacao (link) com a controladora na camada de servico (Stub). */
    void setCntrLNAutenticacao(ILNAutenticacao *);
};

void inline CntrIUAutenticacao::setCntrLNAutenticacao(ILNAutenticacao *cntrLNAutenticacao)
{
    this->cntrLNAutenticacao = cntrLNAutenticacao;
}

/** Controladora para Modulo de Gestao de Usuario na camada de Aprensentacao. Incorpora e implementa os metodos abstratos da interface que oferece. */

class CntrIUGestao : public IUGestao
{

  private:

    /**Atributo link. Cria referencia para o servidor (Stub) */
    ILNGestao *cntrLNGestao;

  public:

    /** Metodo criarLeitor. Da inicio a criacao de um usuario Leitor e faz validacao dos dados fornecidos. */
    ResultadoGestao criarLeitor() throw(runtime_error);
    /** Metodo criarDesenvolvedor. Da inicio a criacao de um usuario Desenvolvedor e faz validacao dos dados fornecidos. */
    ResultadoGestao criarDesenvolvedor() throw(runtime_error);
    /** Metodo criarAdministrador. Da inicio a criacao de um usuario Administrador e faz validacao dos dados fornecidos. */
    ResultadoGestao criarAdministrador() throw(runtime_error);
    /** Metodo apagarUsuario. Apaga uma conta de usuario. */
    ResultadoGestao apagarUsuario() throw(runtime_error);

    /** Metodo "link". Metodo por meio do qual e estabelecida ligacao (link) com a controladora na camada de servico (Stub).*/
    void setCntrLNGestao(ILNGestao *);
};

void inline CntrIUGestao::setCntrLNGestao(ILNGestao *cntrLNGestao)
{
    this->cntrLNGestao = cntrLNGestao;
}

/** Controladora para Modulo de Vocabulario na camada de Aprensentacao. Incorpora e implementa os metodos abstratos da interface que oferece. */
class CntrIUVocabulario : public IUVocabulario
{

  private:
    /**Atributo link. Cria referencia para o servidor (Stub) */
    ILNVocabulario *cntrLNVocabulario;
    /** Atributo Usuario.*/
    ResultadoAutenticacao user;
protected:
    //leitor
    /** Metodo MostrarDados. Documentada em IUVocabulario.*/
    void MostrarDados();
    /** Metodo AlterarDados. Documentada em IUVocabulario.*/
    void AlterarDados();
    /** Metodo ApagarDados. Documentada em IUVocabulario.*/
    void ApagarUsuario();
    /** Metodo Listar. Documentada em IUVocabulario.*/
    void Listar();
    /** Metodo DadosVocabulario. Documentada em IUVocabulario.*/
    void DadosVocab();
    /** Metodo ConsultarTermo. Documentada em IUVocabulario.*/
    void ConsultarTermo();
    /** Metodo ConsultarDefinicao. Documentada em IUVocabulario.*/
    void ConsultarDefinicao();
    /** Metodo MostrarDados. Documentada em IUVocabulario.*/

    //desenvolvedor
    void CadastrarDev();
    /** Metodo CadastrarDesenvolvedor. Documentada em IUVocabulario.*/
    void CriarVocab();
    /** Metodo CriarVocabulario. Documentada em IUVocabulario.*/
    void ApagarVocab();
    /** Metodo EditarVocabulario. Documentada em IUVocabulario.*/
    void EditarVocab();

    //administrador
    /** Metodo EditarIdioma. Documentada em IUVocabulario.*/
    void EditarIdioma();

  public:
    /** Metodo Menu. Documentada em IUVocabulario.*/
    ResultadoVocabulario Menu(const ResultadoAutenticacao &user) throw(runtime_error);

    /**Metodo "link". Metodo por meio do qual e estabelecida ligacao (link) com a controladora na camada de servico (Stub). */
    void setCntrLNVocabulario(ILNVocabulario *);
};

void inline CntrIUVocabulario::setCntrLNVocabulario(ILNVocabulario *cntrLNVocabulario)
{
    this->cntrLNVocabulario = cntrLNVocabulario;
}

#endif // CONTROLADORAS_H_INCLUDED
