#include "stubs.h"
using namespace std;
    //Defini��es de constantes.

// EXEMPLO
// --------------------------------------------------------

// Defini��es de m�todo da classe stub do controlador da l�gica de neg�cio de autentica��o.

ResultadoAutenticacao StubLNAutenticacao::autenticar(const cCorreioEletronico &mail, const cSenha &senha) throw(runtime_error) {

    ResultadoAutenticacao resultado;

    // Diferentes comportamentos dependendo do valor da matr�cula.

    if(strcmp(mail.getCorreioEletronico().c_str(), TRIGGER_FALHA.c_str()) == 0)
        resultado.setValor(ResultadoAutenticacao::FALHA);
    else if(strcmp(mail.getCorreioEletronico().c_str(), TRIGGER_ERRO_SISTEMA.c_str()) == 0)
        throw runtime_error("Erro de sistema");
    else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
        resultado.setMail(mail);
    }

    return resultado;
}

ResultadoGestao StubLNGestao::criarLeitor(const cCorreioEletronico &mail, const cSenha &senha, const cNome &nome, const cSobrenome &sobrenome) throw(runtime_error)
{

    ResultadoGestao resultado;

    // Diferentes comportamentos dependendo do valor da matr�cula.

    if (strcmp(mail.getCorreioEletronico().c_str(), TRIGGER_FALHA.c_str()) == 0)
        resultado.setValor(ResultadoAutenticacao::FALHA);
    else if (strcmp(mail.getCorreioEletronico().c_str(), TRIGGER_ERRO_SISTEMA.c_str()) == 0)
        throw runtime_error("Erro de sistema");
    else
    {
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
        resultado.setMail(mail);
    }
    cout << "Usuário criado com sucesso" << endl;

    return resultado;
}

ResultadoGestao StubLNGestao::criarDesenvolvedor(   const cCorreioEletronico &mail, 
                                                    const cSenha &senha,
                                                    const cNome &nome, 
                                                    const cSobrenome &sobrenome, 
                                                    const cData &data) throw(runtime_error)
{

    ResultadoGestao resultado;

    // Diferentes comportamentos dependendo do valor da matr�cula.

    if (strcmp(mail.getCorreioEletronico().c_str(), TRIGGER_FALHA.c_str()) == 0)
        resultado.setValor(ResultadoAutenticacao::FALHA);
    else if (strcmp(mail.getCorreioEletronico().c_str(), TRIGGER_ERRO_SISTEMA.c_str()) == 0)
        throw runtime_error("Erro de sistema");
    else
    {
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
        resultado.setMail(mail);
    }
    cout << "Usuário criado com sucesso" << endl;

    return resultado;
}

ResultadoGestao StubLNGestao::criarAdministrador(   const cCorreioEletronico &mail, 
                                                    const cSenha &senha, 
                                                    const cNome &nome, 
                                                    const cSobrenome &sobrenome, 
                                                    const cData &data, 
                                                    const cEndereco &endereco, 
                                                    const cTelefone &telefone) throw(runtime_error)
{

    ResultadoGestao resultado;

    // Diferentes comportamentos dependendo do valor da matr�cula.

    if (strcmp(mail.getCorreioEletronico().c_str(), TRIGGER_FALHA.c_str()) == 0)
        resultado.setValor(ResultadoAutenticacao::FALHA);
    else if (strcmp(mail.getCorreioEletronico().c_str(), TRIGGER_ERRO_SISTEMA.c_str()) == 0)
        throw runtime_error("Erro de sistema");
    else
    {
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
        resultado.setMail(mail);
    }
    cout << "Usuário criado com sucesso" << endl;

    return resultado;
}

ResultadoGestao StubLNGestao::apagarUsuario(const cCorreioEletronico &mail, const cSenha &senha) throw(runtime_error)
{

    ResultadoGestao resultado;

    // Diferentes comportamentos dependendo do valor da matr�cula.

    if (strcmp(mail.getCorreioEletronico().c_str(), TRIGGER_FALHA.c_str()) == 0)
        resultado.setValor(ResultadoAutenticacao::FALHA);
    else if (strcmp(mail.getCorreioEletronico().c_str(), TRIGGER_ERRO_SISTEMA.c_str()) == 0)
        throw runtime_error("Erro de sistema");
    else
    {
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
        resultado.setMail(mail);
    }
    cout << "Usuário apagado com sucesso" << endl;

    return resultado;
}