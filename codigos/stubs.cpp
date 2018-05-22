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
    else if(strcmp(mail.getCorreioEletronico().c_str(), TRIGGER_DESENVOLVEDOR.c_str()) == 0){
        resultado.tipoUsuario = resultado.DESENVOLVEDOR;
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
        resultado.setMail(mail);
        resultado.setSenha(senha);
    }
    else if(strcmp(mail.getCorreioEletronico().c_str(), TRIGGER_ADMINISTRADOR.c_str()) == 0){
        resultado.tipoUsuario = resultado.ADMINISTRADOR;
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
        resultado.setMail(mail);
        resultado.setSenha(senha);
    }
    else{
        resultado.tipoUsuario = resultado.LEITOR;
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
        resultado.setMail(mail);
        resultado.setSenha(senha);
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

ResultadoVocabulario StubLNVocabulario::Menu(const ResultadoAutenticacao &user) throw(runtime_error){
    this->user = user;
}
string StubLNVocabulario::MostrarNome()
{
    string str = "Abextado";
    return str;
}
string StubLNVocabulario::MostrarSobreome()
{
    string str = "Ronaldinho";
    return str;
}
string StubLNVocabulario::MostrarSenha()
{
    return user.getSenha().getSenha();
}
string StubLNVocabulario::MostrarEmail()
{
    return user.getMail().getCorreioEletronico();
}
string StubLNVocabulario::MostrarData()
{
    string str = "29/02/2016";
    return str;
}
string StubLNVocabulario::MostrarEndereco()
{
    string str = "Buraco das Araras";
    return str;
}
string StubLNVocabulario::MostrarTelefone()
{
    string str = "61 98765-4321";
    return str;
}
void StubLNVocabulario::AlterarDados()
{
    cout << "Dados alterados com sucesso" << endl;
}
void StubLNVocabulario::ApagarUsuario()
{
    cout << "Usuário apagado com sucesso" << endl;
}
void StubLNVocabulario::Listar()
{
    cout << "Vocabulários" << endl;
    cout << "AAAA" << endl;
    cout << "BBBB" << endl;
    cout << "CCCC" << endl;
}
void StubLNVocabulario::DadsoVocab(string str)
{
    if(strcmp(str.c_str(), "AAAA") == 0)
    {
        cout << "Desenvolvedor(es) : " << endl;
        cout << "   Sena" << endl;
        cout << "   Guga" << endl;
        cout << "   Pelé" << endl;
        cout << "Termo(s) : " << endl;
        cout << "   Ganhar" << endl;
        cout << "   Vencer" << endl;
        cout << "   Triunfar" << endl;
    }
    else if(strcmp(str.c_str(), "BBBB") == 0)
    {
        cout << "Desenvolvedor(es) : " << endl;
        cout << "   Arnaldo" << endl;
        cout << "   Arnoudo" << endl;
        cout << "   Arnildo" << endl;
        cout << "Termo(s) : " << endl;
        cout << "   Manga" << endl;
        cout << "   Assistir" << endl;
        cout << "   Meia" << endl;
    }
    else if(strcmp(str.c_str(), "CCCC") == 0)
    {
        cout << "Desenvolvedor(es) : " << endl;
        cout << "   Arnaldo" << endl;
        cout << "   Arnoudo" << endl;
        cout << "   Arnildo" << endl;
        cout << "Termo(s) : " << endl;
        cout << "Vitoria" << endl;
        cout << "Derrota" << endl;
        cout << "Empate" << endl;
    }
    else
        cout << "Vocabulário não encontrado" << endl;
}
void StubLNVocabulario::ConsultarTermo(string str)
{
    if (strcmp(str.c_str(), "Ganhar") == 0)
    {
        cout << "Vitoria : " << endl;
        cout << "Termo não preferido" << endl;
        cout << "Definições : " << "1" << endl;
    }
    else if (strcmp(str.c_str(), "Vencer") == 0)
    {
        cout << "Vitoria : " << endl;
        cout << "Termo não preferido" << endl;
        cout << "Definições : " << "1" << endl;
    }
    else if (strcmp(str.c_str(), "Triunfar") == 0)
    {
        cout << "Vitoria : " << endl;
        cout << "Termo não preferido" << endl;
        cout << "Definições : " << "1" << endl;
    }



    else if (strcmp(str.c_str(), "Manga") == 0)
    {
        cout << "Manga : " << endl;
        cout << "Termo preferido" << endl;
        cout << "Definições : " << "2" << endl;
    }
    else if (strcmp(str.c_str(), "Assistir") == 0)
    {
        cout << "Assistir : " << endl;
        cout << "Termo preferido" << endl;
        cout << "Definições : " << "2" << endl;
    }
    else if (strcmp(str.c_str(), "Meia") == 0)
    {
        cout << "Meia : " << endl;
        cout << "Termo preferido" << endl;
        cout << "Definições : " << "2" << endl;
    }



    else if (strcmp(str.c_str(), "Vitoria") == 0)
    {
        cout << "Vitoria : " << endl;
        cout << "Termo preferido" << endl;
        cout << "Definições : " << "1" << endl;
    }
    else if (strcmp(str.c_str(), "Derrota") == 0)
    {
        cout << "Derrota : " << endl;
        cout << "Termo preferido" << endl;
        cout << "Definições : "
             << "1" << endl;
    }
    else if (strcmp(str.c_str(), "Empate    ") == 0)
    {
        cout << "Empate : " << endl;
        cout << "Termo preferido" << endl;
        cout << "Definições : "
             << "1" << endl;
    }
    else
        cout << "Termo não encontrado" << endl;
}
void StubLNVocabulario::ConsultarDefinicao(string str)
{
    if (strcmp(str.c_str(), "Ganhar") == 0)
    {
        cout << "Vitoria : " << endl;
        cout << "Termo não preferido" << endl;
        cout << "Definições : "
             << "1" << endl;
    }
    else if (strcmp(str.c_str(), "Vencer") == 0)
    {
        cout << "Vitoria : " << endl;
        cout << "Termo não preferido" << endl;
        cout << "Definições : "
             << "1" << endl;
    }
    else if (strcmp(str.c_str(), "Triunfar") == 0)
    {
        cout << "Vitoria : " << endl;
        cout << "Termo não preferido" << endl;
        cout << "Definições : "
             << "1" << endl;
    }




    else if (strcmp(str.c_str(), "Manga") == 0)
    {
        cout << "Manga : " << endl;
        cout <<  "Parte da camisa localizada nos braços." << endl;
        cout <<  "Fruta doce." << endl;
    }
    else if (strcmp(str.c_str(), "Assistir") == 0)
    {
        cout << "Assistir : " << endl;
        cout <<  "Ajudar." << endl;
        cout <<  "Ver algo." << endl;
    }
    else if (strcmp(str.c_str(), "Meia") == 0)
    {
        cout << "Meia : " << endl;
        cout << "Vestimenta para pé." << endl;
        cout << "Metade." << endl;
    }




    else if (strcmp(str.c_str(), "Vitoria") == 0)
    {
        cout << "Vitoria : " << endl;
        cout << "Terminar esse trabaho." << endl;
    }
    else if (strcmp(str.c_str(), "Derrota") == 0)
    {
        cout << "Derrota : " << endl;
        cout << "Reprovar nessa matéria." << endl;
    }
    else if (strcmp(str.c_str(), "Derrota") == 0)
    {
        cout << "Empate : " << endl;
        cout << "Quando uma competição acaba sem ganhador nem perdedor." << endl;
    }
    else
        cout << "Termo não encontrado" << endl;
}

//desenvolvedor
void CadastrarDev()
{
    cout << "Desenvolvedor cadastrdo com sucesso" << endl;
}
void CriarVocab()
{
    cVocabControlado  vocab;
    char entrada[20];
    cout << "Nome do novo vocabulário : " << endl;
    cin >> entrada;
    vocab.setNome(entrada);
    cout << "Idioma : " << endl;
    cin >> entrada;
    vocab.setIdioma(entrada);
    cout << "Data de criação : " << endl;
    cin >> entrada;
    vocab.setData(entrada);
}
void ApagarVocab()
{
    cout << "Vocabulario apagado" << endl;
}
void EditarVocab()
{
    cout << "Dados alterados com sucesso" << endl;
}
//administrador
void EditarIdioma()
{
    cout << "Idioma alterados com sucesso" << endl;
}
