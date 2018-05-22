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

    int escolha = 0;

    cout << "1 - Autenticar" << endl;
    cout << "2 - Gestao" << endl;

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

            while(true)
            {

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

                if(resultadoA.getValor() == ResultadoAutenticacao::SUCESSO)
                {
                    cout << "email: " << resultadoA.getMail().getCorreioEletronico().c_str() << endl
                    << "senha: " << resultadoA.getSenha().getSenha().c_str() << endl;
                    IUVocabulario *cntrIUVocabulario = new CntrIUVocabulario();
                    ILNVocabulario *stubLNVocabulario = new StubLNVocabulario();

                    // Liga inst�ncia da controladora de interacao a inst�ncia do stub na camada de servi�o.

                    cntrIUVocabulario->setCntrLNVocabulario(stubLNVocabulario);

                    ResultadoVocabulario resultadoV;
                    char ch = 'n';
                    do{
                        try
                        {
                            // cout << "Cheguei aqui" << endl;
                            cntrIUVocabulario->Menu(resultadoA);


                        }
                        catch (const runtime_error)
                        {
                            cout << "Erro de sistema." << endl;
                        }
                        cout << "Realizar outra operação?" << endl;
                        cout << "s/n" << endl;
                        cin >> ch;
                    }while(ch == 's');
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
                        cout << "O que deseja fazer?" << endl;
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
