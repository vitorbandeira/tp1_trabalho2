#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "Interfaces.h"

#include <stdexcept>
#include <iostream>
#include <typeinfo>

using namespace std;


/** Modulo de simulacao Autenticacao na camada de servico. Herda e implementa os metodo abstrato declarado na Interface provida e contem TRIGGERS para a funcionalidade de Autenticao de usuario. */
class StubLNAutenticacao : public ILNAutenticacao
{

  public:

/** Gatilho para falha.*/
    string TRIGGER_FALHA = "pedropacn@gmail.com";

/** Gatilho para falha de sistema.*/
    string TRIGGER_ERRO_SISTEMA = "turval.go@gmail.com";

/** Gatilho para falha de sistema.*/
    string TRIGGER_DESENVOLVEDOR = "dev@gmail.com";

/** Gatilho para falha de sistema.*/
    string TRIGGER_ADMINISTRADOR = "admin@gmail.com";

/** Metodo de Autenticacao da Interface da camada de servico.*/
    ResultadoAutenticacao autenticar(const cCorreioEletronico &, const cSenha &) throw(runtime_error);
};

/** Modulo de simulacao de Gestao de Usuario na camada de servico. Herda e implementa os metodos abstratos declarados na Interface provida e contem TRIGGERS para a funcionalidade de Gestao de Usuario.*/
class StubLNGestao : public ILNGestao
{

  public:
/** Gatilho para falha.*/
    string TRIGGER_FALHA = "pedropacn@gmail.com";

/** Gatilho para falha de sistema.*/
    string TRIGGER_ERRO_SISTEMA = "turval.go@gmail.com";

/** Metodo criarLeitor. Implementa o mesmo metodo abstrato declarado na Interface correspondente, simulando a criacao de usuario Leitor. Recebe todos os dados validos relativos para criacao de um Leitor. */
    ResultadoGestao criarLeitor            (const cCorreioEletronico &,
                                            const cSenha &,
                                            const cNome &,
                                            const cSobrenome &) throw(runtime_error);

/** Metodo criarDesenvolvedor. Implementa o mesmo metodo abstrato declarado na Interface correspondente, simulando a criacao de usuario Desenvolvedor. Recebe todos os dados validos relativos para criacao de um Desenvolvedor.*/
    ResultadoGestao criarDesenvolvedor     (const cCorreioEletronico &,
                                            const cSenha &,
                                            const cNome &,
                                            const cSobrenome &,
                                            const cData &) throw(runtime_error);

/** Metodo criarAdministrador. Implementa o mesmo metodo abstrato declarado na Interface correspondente, simulando a criacao de usuario Administrador. Recebe todos os dados validos relativos para criacao de um Administrador. */
    ResultadoGestao criarAdministrador     (const cCorreioEletronico &,
                                            const cSenha &,
                                            const cNome &,
                                            const cSobrenome &,
                                            const cData &,
                                            const cEndereco &,
                                            const cTelefone &) throw(runtime_error);

};

/** Modulo de simulacao Vocabulario na camada de servico. Herda e implementa os metodo abstrato declarado na Interface provida e contem TRIGGERS para a funcionalidade de Autenticao de usuario. */
class StubLNVocabulario : public ILNVocabulario
{
    private:
        ResultadoAutenticacao user;

        void MostrarDados();
        void AlterarDados();
        void ApagarUsuario();
        void Listar();
        void DadosVocab(string str);
        void ConsultarTermo(string str);
        void ConsultarDefinicao(string str);

        //desenvolvedor
        void CadastrarDev();
        void CriarVocab();
        void ApagarVocab();
        void EditarVocab();

        //administrador
        void EditarIdioma();

     public:
        /** Metodo de Vocabulario da Interface da camada de servico.*/
        ResultadoVocabulario Menu(const ResultadoAutenticacao &user) throw(runtime_error);
};
#endif // STUBS_H_INCLUDED
