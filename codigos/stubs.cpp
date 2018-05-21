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
    else if(strcmp(mail.getCorreioEletronico().c_str(), TRIGGER_DESENVOLVEDOR.c_str()) == 0)
        resultado.tipoUsuario = resultado.DESENVOLVEDOR;
    else if(strcmp(mail.getCorreioEletronico().c_str(), TRIGGER_ADMINISTRADOR.c_str()) == 0)
        resultado.tipoUsuario = resultado.ADMINISTRADOR;
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

ResultadoVocabulario StubLNVocabulario::Menu(const ResultadoAutenticacao &user){
    this->user = user;
    //leitor
    void MostrarDados();
    void AlterarDados();
    void ApagarUsuario();
    void Listar();
    void DadsoVocab();
    void ConsultarTermo();
    void ConsultarDefinicao();

    //desenvolvedor
    void CadastrarDev();
    void CriarVocab();
    void ApagarVocab();
    void EditarVocab();
    //administrador
    void EditarIdioma();
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
        cout << "   Arnaldo" << endl;
        cout << "   Arnoudo" << endl;
        cout << "   Arnildo" << endl;
        cout << "Termo(s) : " << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        

    }
    else if(strcmp(str.c_str(), "BBBB") == 0)
    {
        
    }
    else if(strcmp(str.c_str(), "CCCC") == 0)
    {
        
    }
    else
    {
        
    }
    
    
}
void StubLNVocabulario::ConsultarTermo(string str)
{

}
void StubLNVocabulario::ConsultarDefinicao(string str)
{

}

//desenvolvedor
void CadastrarDev()
{

}
void CriarVocab()
{

}
void ApagarVocab()
{

}
void EditarVocab()
{

}
//administrador
void EditarIdioma()
{

}