// Exemplos desenvolvidos para ilustrar a sintaxe da linguagem.

#include <stdexcept>
#include <iostream>
#include <string>

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"
#include "controladoras.h"
#include "stubs.h"

using namespace std;

int main()
{

    // EXEMPLO
    // -----------------------------------------------------------

    // Liga��o entre controladora na camada de apresenta��o e stub.

    // Instancia as controladoras.

    IUAutenticacao  *cntrIUAutenticacao = new CntrIUAutenticacao();
    ILNAutenticacao *stubLNAutenticacao = new StubLNAutenticacao();

    // Liga inst�ncia da controladora de interacao a inst�ncia do stub na camada de servi�o.

    cntrIUAutenticacao->setCntrLNAutenticacao(stubLNAutenticacao);

    // Para facilitar o teste informa os valores inv�lidos.

    cout << endl << "VALORES DOS TRIGGERS:" << endl << endl;
    cout << "Matricula invalida          = " << Matricula::MATRICULA_INVALIDA << endl;
    cout << "Senha invalida              = " << Senha::SENHA_INVALIDA << endl;
    cout << "Trigger de falha            = " << StubLNAutenticacao::TRIGGER_FALHA << endl;
    cout << "Trigger de erro de sistema  = " << StubLNAutenticacao::TRIGGER_ERRO_SISTEMA << endl;

    ResultadoAutenticacao resultado;

    while(true){

        // Simula a tela de apresentacao (tela inicial) de sistema.

        cout << endl << "Tela de apresentacao de sistema." << endl;

        try{

            // Ilustra soliciatacao de servi�o de autentica��o.

            resultado = cntrIUAutenticacao->autenticar();
        }
        catch(const runtime_error &exp){
                 cout << "Erro de sistema." << endl;
        }

        // Critica o resultado da autentica��o.

        if(resultado.getValor() == ResultadoAutenticacao::SUCESSO) {
            break;
        }
    }

    delete cntrIUAutenticacao;
    delete stubLNAutenticacao;

    return 0;
}
