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

    cData temp_data;
    char temp2[11] = "12/06/1998";
    temp_data.setData(temp2);
    cout << temp_data.getData() << endl;

    int escolha = 0;

    cout << "1 - Autentiacar" << endl;
    cout << "2 - Gestão" << endl;

    cin >> escolha;


    // EXEMPLO
    // -----------------------------------------------------------

    // Liga��o entre controladora na camada de apresenta��o e stub.

    // Instancia as controladoras.
    
    switch (escolha)
    {
        case 1:{
            IUAutenticacao  *cntrIUAutenticacao = new CntrIUAutenticacao();
            ILNAutenticacao *stubLNAutenticacao = new StubLNAutenticacao();

            // Liga inst�ncia da controladora de interacao a inst�ncia do stub na camada de servi�o.

            cntrIUAutenticacao->setCntrLNAutenticacao(stubLNAutenticacao);

            ResultadoAutenticacao resultadoA;

            while(true){

                // Simula a tela de apresentacao (tela inicial) de sistema.

                cout << endl << "Tela de apresentacao de sistema." << endl;

                try{

                    // Ilustra soliciatacao de servi�o de autentica��o.

                    resultadoA = cntrIUAutenticacao->autenticar();
                }
                catch(const runtime_error &exp){
                        cout << "Erro de sistema." << endl;
                }

                // Critica o resultado da autentica��o.

                if(resultadoA.getValor() == ResultadoAutenticacao::SUCESSO) {
                    break;
                }
            }

            delete cntrIUAutenticacao;
            delete stubLNAutenticacao;
            break;
        }
        case 2:{
            IUGestao *cntrIUGestao  = new CntrIUGestao();
            ILNGestao *stubLNGestao = new StubLNGestao();

            cntrIUGestao->setCntrLNGestao(stubLNGestao);

            ResultadoGestao resultadoG;

            while (true)
            {

                // Simula a tela de apresentacao (tela inicial) de sistema.

                cout << endl << "Tela de apresentacao de sistema." << endl;

                try
                {
                    bool controle = true;
                    while(controle)
                    {
                        cout << "Qual tipo de usuário deseja criar?" << endl;
                        cout << "1 - Leitor"        << endl;
                        cout << "2 - Desenvolvedor" << endl;
                        cout << "3 - Administrador" << endl;
                        cout << "4 - Sair"          << endl;
                        escolha = 0;
                        cin >> escolha;
                        switch (escolha)
                        {
                        case 1:
                            resultadoG = cntrIUGestao->criarLeitor();
                            controle = false;
                            break;
                        case 2:
                            resultadoG = cntrIUGestao->criarDesenvolvedor();
                            controle = false;
                            break;
                        case 3:
                            resultadoG = cntrIUGestao->criarAdministrador();
                            controle = false;
                            break;
                        case 4:
                            return 1;
                        default:
                            controle = true;
                            break;
                        }
                    }
                }
                catch (const runtime_error &exp)
                {
                    cout << "Erro de sistema." << endl;
                }

                // Critica o resultado da autentica��o.

                if (resultadoG.getValor() == ResultadoAutenticacao::SUCESSO)
                {
                    break;
                }
            }

            delete cntrIUGestao;
            delete stubLNGestao;
            break;
        }
        default:{
            break;
        }
    }

    return 0;
}
