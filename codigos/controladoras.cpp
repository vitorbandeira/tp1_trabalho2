#include "controladoras.h"
#include "stdio.h"

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

ResultadoGestao CntrIUGestao::criarLeitor() throw(runtime_error)
{

    ResultadoGestao resultadoG;
    cCorreioEletronico email;
    cSenha senha;
    cNome nome;
    cSobrenome sobrenome;
    char entrada[20];

    // Solicitar email, senha e tipo da conta.

    while (true)
    {
        try
        {
            cout << "Digite o endereço de e-mail : ";
            cin >> entrada;
            email.setCorreioEletronico(entrada);
            cout << "Digite a senha : ";
            cin >> entrada;
            senha.setSenha(entrada);
            cout << "Digite o Nome : ";
            cin >> entrada;
            nome.setNome(entrada);
            cout << "Digite o sobrenome : ";
            cin >> entrada;
            sobrenome.setSobrenome(entrada);

            break;
        }
        catch (const invalid_argument &exp)
        {
            cout << endl
                 << "Dado em formato incorreto." << endl;
        }
    }

    // Solicitar autentica��o.

    resultadoG = cntrLNGestao->criarLeitor(email, senha, nome, sobrenome);

    // Informar resultado da autentica��o.

    if (resultadoG.getValor() == ResultadoAutenticacao::FALHA)
        cout << endl
             << "Falha na autenticacao." << endl;

    return resultadoG;
}

ResultadoGestao CntrIUGestao::criarDesenvolvedor() throw(runtime_error)
{

    ResultadoGestao resultadoG;
    cCorreioEletronico email;
    cSenha senha;
    cNome nome;
    cSobrenome sobrenome;
    cData data;
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
            cout << "Digite a senha : ";
            cin >> entrada;
            senha.setSenha(entrada);
            cout << "Digite o Nome : ";
            cin >> entrada;
            nome.setNome(entrada);
            cout << "Digite o sobrenome : ";
            cin >> entrada;
            sobrenome.setSobrenome(entrada);
            cout << "Digite a data de nascimento : ";
            cin >> entrada;
            data.setData(entrada);

            break;
        }
        catch (const invalid_argument &exp)
        {
            cout << endl
                 << "Dado em formato incorreto." << endl;
        }
    }

    // Solicitar autentica��o.

    resultadoG = cntrLNGestao->criarDesenvolvedor(email, senha, nome, sobrenome, data);

    // Informar resultado da autentica��o.

    if (resultadoG.getValor() == ResultadoAutenticacao::FALHA)
        cout << endl
             << "Falha na autenticacao." << endl;

    return resultadoG;
}

ResultadoGestao CntrIUGestao::criarAdministrador() throw(runtime_error)
{

    ResultadoGestao resultadoG;
    cCorreioEletronico email;
    cSenha senha;
    cNome nome;
    cSobrenome sobrenome;
    cData data;
    cTelefone telefone;
    cEndereco endereco;
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
            cout << "Digite a senha : ";
            cin >> entrada;
            senha.setSenha(entrada);
            cout << "Digite o Nome : ";
            cin >> entrada;
            nome.setNome(entrada);
            cout << "Digite o sobrenome : ";
            cin >> entrada;
            sobrenome.setSobrenome(entrada);
            cout << "Digite a data de nascimento : ";
            cin >> entrada;
            data.setData(entrada);
            getchar();
            cout << "Digite a telefone : ";
            scanf("%[^\n]%*c", entrada);
            telefone.setTelefone(entrada);
            cout << "Digite a endereço : ";
            cin >> entrada;
            endereco.setEndereco(entrada);

            break;
        }
        catch (const invalid_argument &exp)
        {
            cout << endl
                 << "Dado em formato incorreto." << endl;
        }
    }

    // Solicitar autentica��o.

    resultadoG = cntrLNGestao->criarAdministrador(email, senha, nome, sobrenome, data, endereco, telefone);

    // Informar resultado da autentica��o.

    if (resultadoG.getValor() == ResultadoAutenticacao::FALHA)
        cout << endl
             << "Falha na autenticacao." << endl;

    return resultadoG;
}

ResultadoGestao CntrIUGestao::apagarUsuario() throw(runtime_error)
{

    ResultadoGestao resultadoG;
    cCorreioEletronico email;
    cSenha senha;
    char entrada[20];

    // Solicitar email, senha e tipo da conta.

    while (true)
    {
        try
        {
            cout << "Digite o endereço de e-mail : ";
            cin >> entrada;
            email.setCorreioEletronico(entrada);
            cout << "Digite a senha : ";
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

    resultadoG = cntrLNGestao->apagarUsuario(email, senha);

    // Informar resultado da autentica��o.

    if (resultadoG.getValor() == ResultadoAutenticacao::FALHA)
        cout << endl
             << "Falha na autenticacao." << endl;

    return resultadoG;
}