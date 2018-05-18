#include "controladoras.h"

// Defini��es de m�todos da classe CntrIUAutenticacao.

ResultadoAutenticacao CntrIUAutenticacao::autenticar() throw(runtime_error)
{

    ResultadoAutenticacao resultadoA;
    cCorreioEletronico email;
    cSenha senha;
    char entrada[20];

    // Solicitar email e senha.

    while (true)
    {

        cout << endl
             << "Autenticacao de usuario." << endl
             << endl;

        try
        {
            cout << "Digite o endereço de e-mail : ";
            cin >> entrada;
            email.setCorreioEletronico(entrada);
            cout << "Digite a senha     : ";
            cin >> entrada;
            senha.setSenha(entrada);
            break;
        }
        catch (const invalid_argument &exp)
        {
            cout << endl
                 << "Dado em formato incorreto." << endl;
        }
    }

    // Solicitar autentica��o.

    resultadoA = cntrLNAutenticacao->autenticar(email, senha);

    // Informar resultado da autentica��o.

    if (resultadoA.getValor() == ResultadoAutenticacao::FALHA)
        cout << endl
             << "Falha na autenticacao." << endl;

    return resultadoA;
}

ResultadoGestao CntrIUGestao::criarUsuario() throw(runtime_error)
{

    ResultadoGestao resultadoG;
    cCorreioEletronico email;
    cSenha senha;
    char entrada[20];

    // Solicitar email, senha e tipo da conta.

    while (true)
    {

        cout << endl
             << "Autenticacao de usuario." << endl
             << endl;

        try
        {
            cout << "Digite o endereço de e-mail : ";
            cin >> entrada;
            email.setCorreioEletronico(entrada);
            cout << "Digite a senha     : ";
            cin >> entrada;
            senha.setSenha(entrada);
            cout << "Digite o tipo da conta : " << endl;
            cout << "1 - Leitor : " << endl;
            cout << "2 - Desenvolvedor : " << endl;
            cout << "3 - Administrador : " << endl;
            int tipo = 0;
            cin >> tipo;
            if (1 > tipo || tipo > 3)
                throw invalid_argument("Esse tipo de conta não existe");

            break;
        }
        catch (const invalid_argument &exp)
        {
            cout << endl
                 << "Dado em formato incorreto." << endl;
        }
    }

    // Solicitar autentica��o.

    resultadoG = cntrLNGestao->criarUsuario(email, senha);

    // Informar resultado da autentica��o.

    if (resultadoG.getValor() == ResultadoAutenticacao::FALHA)
        cout << endl
             << "Falha na autenticacao." << endl;

    return resultadoG;
}
