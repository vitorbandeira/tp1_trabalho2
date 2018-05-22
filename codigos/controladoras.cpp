#include "controladoras.h"
#include "stdio.h"
#include "interfaces.h"
#include <string>
#include <iostream>

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
    else if (resultadoA.getValor() == ResultadoAutenticacao::DESENVOLVEDOR)
        resultadoA.tipoUsuario = resultadoA.DESENVOLVEDOR;
    else if (resultadoA.getValor() == ResultadoAutenticacao::ADMINISTRADOR)
        resultadoA.tipoUsuario = resultadoA.ADMINISTRADOR;
    else
        resultadoA.tipoUsuario = resultadoA.LEITOR;

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

void CntrIUVocabulario::Menu(const ResultadoAutenticacao &user) throw(runtime_error)
{
    this->user = user;
    
    ResultadoVocabulario resultadoV;
    cout << "O que deseja fazer?" << endl;
    cout << "0 - Sair" << endl;
    cout << "1 - Mostrar dados" << endl;
    cout << "2 - Alterar dados" << endl;
    cout << "3 - Apagar usuário" << endl;
    cout << "4 - Listar vocabulários" << endl;
    cout << "5 - Apresentar dados de vocabulário controlado" << endl;
    cout << "6 - Consultar termo" << endl;
    cout << "7 - Consultar definição de termo" << endl;
    if (user.tipoUsuario == user.DESENVOLVEDOR || user.tipoUsuario == user.ADMINISTRADOR)
    {
        cout << "8 - Cadastrar como desenvolvedor de vocabulário controlado" << endl;
        cout << "9 - Criar definição de vocabulário" << endl;
        cout << "10 - Apagar definição de vocabulário" << endl;
        cout << "11 - Editar definição de vocabulário" << endl;
        if (user.tipoUsuario == user.DESENVOLVEDOR)
        {
            cout << "12 - Editar idioma de vocabulário" << endl;
        }
    }
    int escolha = 0;
    char str[20];
    cin >> escolha;

    switch (escolha)
    {
    case 0:
        break;
    case 1:
        cntrLNVocabulario->MostrarDados();
        break;
    case 2:
        AlterarDados();
        break;
    case 3:
        cntrLNVocabulario->ApagarUsuario();
        break;
    case 4:
        cntrLNVocabulario->Listar();
        break;
    case 5:
        cout << "Nome do vocabulário : " << endl;
        char str[20];
        cin >> str;
        cntrLNVocabulario->DadosVocab(str);
        break;
    case 6:
        cout << "Nome do vocabulário : " << endl;
        cin >> str;
        cntrLNVocabulario->ConsultarTermo(str);
        break;
    case 7:
        cout << "Nome do vocabulário : " << endl;
        cin >> str;
        cntrLNVocabulario->ConsultarDefinicao(str);
        break;
    default:
        cout << "cheguei aqui\n";
        break;
    }
}

void CntrIUVocabulario::MostrarDados()
{
    cntrLNVocabulario->MostrarDados();
}
void CntrIUVocabulario::AlterarDados()
{
    int escolha = 0;
    while (!(0 < escolha && escolha < 4))
    {
        cout << "Qual campo deseja alterar?" << endl;
        cout << "1 - Nome" << endl;
        cout << "2 - sobrenome" << endl;
        cout << "3 - Senha" << endl;
        cout << "4 - E-mail" << endl;
        if (user.tipoUsuario <= user.DESENVOLVEDOR)
        {
            cout << "5 - Data" << endl;
            if (user.tipoUsuario == user.DESENVOLVEDOR)
            {
                cout << "6 - Data de nascimento" << endl;
                cout << "7 - Telefone" << endl;
                cout << "8 - Endereco" << endl;
            }
        }
        int escolha = -1;
        cin >> escolha;
        cout << "Novo valor : " << endl;
        char str[20];
        cin >> str;

        while (true)
        {
            switch (escolha)
            {
            case 1:
                cntrLNVocabulario->AlterarDados();
                break;
            case 2:
                cntrLNVocabulario->AlterarDados();
                break;
            case 3:
                cntrLNVocabulario->AlterarDados();
                break;
            case 4:
                cntrLNVocabulario->AlterarDados();
                break;
            case 5:
                cntrLNVocabulario->AlterarDados();
                break;
            case 6:
                cntrLNVocabulario->AlterarDados();
                break;
            case 7:
                cntrLNVocabulario->AlterarDados();
                break;
            case 8:
                cntrLNVocabulario->AlterarDados();
                break;

            default:
                cout << "Entrada invalida" << endl;
                break;
            }
        }
    }
}
void CntrIUVocabulario::ApagarUsuario()
{
    cntrLNVocabulario->ApagarUsuario();
    cout << "Usuário apagado" << endl;
}
void CntrIUVocabulario::Listar()
{
    cntrLNVocabulario->Listar();
}
void CntrIUVocabulario::DadosVocab()
{
    cout << "Nome do vocabulário : " << endl;
    char str[20];
    cin >> str;
    cntrLNVocabulario->DadosVocab(str);
}
void CntrIUVocabulario::ConsultarTermo()
{
    cout << "Nome do vocabulário : " << endl;
    char str[20];
    cin >> str;
    cntrLNVocabulario->ConsultarTermo(str);
}
void CntrIUVocabulario::ConsultarDefinicao()
{
    cout << "Nome do vocabulário : " << endl;
    char str[20];
    cin >> str;
    cntrLNVocabulario->ConsultarDefinicao(str);
}
void CntrIUVocabulario::CadastrarDev()
{
    cntrLNVocabulario->CadastrarDev();
}
void CntrIUVocabulario::CriarVocab()
{
    cntrLNVocabulario->CriarVocab();
}
void CntrIUVocabulario::ApagarVocab()
{
    cntrLNVocabulario->ApagarVocab();
}
void CntrIUVocabulario::EditarVocab()
{
    cntrLNVocabulario->EditarVocab();
}
void CntrIUVocabulario::EditarIdioma()
{
    cntrLNVocabulario->EditarIdioma();
}
