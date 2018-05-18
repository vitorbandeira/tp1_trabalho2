#include "stubs.h"
using namespace std;
    //Defini��es de constantes.

// EXEMPLO
// --------------------------------------------------------

// Defini��es de m�todo da classe stub do controlador da l�gica de neg�cio de autentica��o.

ResultadoAutenticacao StubLNAutenticacao::autenticar(const cCorreioEletronico &mail, const cSenha &senha) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNAutenticacao::autenticar" << endl ;

    cout << "Endereço Eletrônico = " << mail.getCorreioEletronico().c_str() << endl;
    cout << "Senha     = " << senha.getSenha().c_str() << endl;

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

ResultadoGestao StubLNGestao::criarUsuario(const cCorreioEletronico &mail, const cSenha &senha) throw(runtime_error){

    // Apresentar dados recebidos.

    cout << endl << "StubLNGestao::criarUsuario" << endl;

    cout << "Endereço Eletrônico = " << mail.getCorreioEletronico().c_str() << endl;
    cout << "Senha = " << senha.getSenha().c_str() << endl;
    cout << "Tipo de usuário = " << endl;

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

    return resultado;
}