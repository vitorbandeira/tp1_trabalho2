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
  string TRIGGER_DESENVOLVEDOR = "desenvolvedor@g.com";
  string TRIGGER_ADMINISTRADOR = "administrador@g.com";

  // Declara��o de m�todo previsto na interface.

  ResultadoAutenticacao autenticar(const cCorreioEletronico &, const cSenha &) throw(runtime_error);
};

class StubLNGestao : public ILNGestao
{

public:
  string TRIGGER_FALHA = "pedropacn@gmail.com";
  string TRIGGER_ERRO_SISTEMA = "turval.go@gmail.com";

  ResultadoGestao criarLeitor(const cCorreioEletronico &,
                              const cSenha &,
                              const cNome &,
                              const cSobrenome &) throw(runtime_error);

  ResultadoGestao criarDesenvolvedor(const cCorreioEletronico &,
                                     const cSenha &,
                                     const cNome &,
                                     const cSobrenome &,
                                     const cData &) throw(runtime_error);

  ResultadoGestao criarAdministrador(const cCorreioEletronico &,
                                     const cSenha &,
                                     const cNome &,
                                     const cSobrenome &,
                                     const cData &,
                                     const cEndereco &,
                                     const cTelefone &) throw(runtime_error);

  ResultadoGestao apagarUsuario(const cCorreioEletronico &,
                                const cSenha &) throw(runtime_error);
};

class StubLNVocabulario : public ILNVocabulario
{
private:
ResultadoAutenticacao user;
string MostrarNome();
string MostrarSobreome();
string MostrarSenha();
string MostrarEmail();
string MostrarData();
string MostrarEndereco();
string MostrarTelefone();
void AlterarDados();
void ApagarUsuario();
void Listar();
void DadsoVocab(string str);
void ConsultarTermo(string str);
void ConsultarDefinicao(string str);
void CadastrarDev();
void CriarVocab();
void ApagarVocab();
void EditarVocab();
void EditarIdioma();

public:
  // Defini��es de valores a serem usados como gatilhos para notifica��es de erros.

  string TRIGGER_FALHA         = "FAIL";
  string TRIGGER_ERRO_SISTEMA  = "SYS_FAIL";

  // Declara��o de m�todo previsto na interface.
  ResultadoVocabulario Menu(const ResultadoAutenticacao &) throw(runtime_error);

};


#endif STUBS_H_INCLUDED
