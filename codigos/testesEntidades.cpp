#include "testesEntidades.h"
#include <string.h>

void TUcLeitor::SetUp(){
    leitor = new cLeitor();
	estado = SUCESSO;
}

void TUcLeitor::TearDown(){
	delete leitor;
}

void TUcLeitor::TestarSucesso()
{
    try
    {
        leitor->setNome(NOME_TESTE);
        leitor->setSobrenome(SOBRENOME_TESTE);
        leitor->setCorreioEletronico(CORREIO_ELETRONICO_TESTE);
        leitor->setSenha(SENHA_TESTE);
        if (strcmp (leitor->getNome(), NOME_TESTE) != 0 || strcmp (leitor->getSobrenome(), SOBRENOME_TESTE) != 0 || strcmp (leitor->getCorreioEletronico(), CORREIO_ELETRONICO_TESTE) != 0 || strcmp (leitor->getSenha(), SENHA_TESTE) != 0)
        {
            estado = FALHA;
        }
        else
            cout << "Teste de SUCESSO para ENTIDADE LEITOR executado com exito!" << endl;
    }
    catch(invalid_argument excecao)
    {
        estado = FALHA;
    }

}
int TUcLeitor::run(){
	SetUp();
    TestarSucesso();
    TearDown();
    return estado;
}




void TUcDesenvolvedor::SetUp(){
    desenvolvedor = new cDesenvolvedor();
	estado = SUCESSO;
}

void TUcDesenvolvedor::TearDown(){
	delete desenvolvedor;
}

void TUcDesenvolvedor::TestarSucesso()
{
    try
    {
        desenvolvedor->setNome(NOME_TESTE);
        desenvolvedor->setSobrenome(SOBRENOME_TESTE);
        desenvolvedor->setCorreioEletronico(CORREIO_ELETRONICO_TESTE);
        desenvolvedor->setSenha(SENHA_TESTE);
        desenvolvedor->setData(DATA_TESTE);
        if (strcmp (desenvolvedor->getNome(), NOME_TESTE) != 0 || strcmp (desenvolvedor->getSobrenome(), SOBRENOME_TESTE) != 0 || strcmp (desenvolvedor->getCorreioEletronico(), CORREIO_ELETRONICO_TESTE) != 0 || strcmp (desenvolvedor->getSenha(), SENHA_TESTE) != 0 || strcmp (desenvolvedor->getData(), DATA_TESTE) != 0)
        {
            estado = FALHA;
        }
        else
            cout << "Teste de SUCESSO para ENTIDADE DESENVOLVEDOR executado com exito!" << endl;
    }
    catch(invalid_argument excecao)
    {
        estado = FALHA;
    }

}
int TUcDesenvolvedor::run(){
	SetUp();
    TestarSucesso();
    TestarFalha();
    TearDown();
    return estado;
}




void TUcAdministrador::SetUp(){
    administrador = new cAdministrador();
	estado = SUCESSO;
}

void TUcAdministrador::TearDown(){
	delete administrador;
}

void TUcAdministrador::TestarSucesso()
{
    try
    {
        administrador->setNome(NOME_TESTE);
        administrador->setSobrenome(SOBRENOME_TESTE);
        administrador->setCorreioEletronico(CORREIO_ELETRONICO_TESTE);
        administrador->setSenha(SENHA_TESTE);
        administrador->setData(DATA_TESTE);
        if (strcmp (administrador->getNome(), NOME_TESTE) != 0 || strcmp (administrador->getSobrenome(), SOBRENOME_TESTE) != 0 || strcmp (administrador->getCorreioEletronico(), CORREIO_ELETRONICO_TESTE) != 0 || strcmp (administrador->getSenha(), SENHA_TESTE) != 0 || strcmp (administrador->getData(), DATA_TESTE) != 0 || strcmp (administrador->getENDERECO(), ENDERECO_TESTE) != 0)
        {
            estado = FALHA;
        }
        else
            cout << "Teste de SUCESSO para ENTIDADE ADMINISTRADOR executado com exito!" << endl;
    }
    catch(invalid_argument excecao)
    {
        estado = FALHA;
    }

}
int TUcAdministrador::run(){
	SetUp();
    TestarSucesso();
    TestarFalha();
    TearDown();
    return estado;
}




void TUcVocabControlado::SetUp(){
    vocabcontrolado = new cVocabControlado();
	estado = SUCESSO;
}

void TUcVocabControlado::TearDown(){
	delete vocabcontrolado;
}

void TUcVocabControlado::TestarSucesso()
{
    try
    {
        vocabcontrolado->setNome(NOME_TESTE);
        vocabcontrolado->setIdioma(IDIOMA_TESTE);
        vocabcontrolado->setData(DATA_TESTE);

        if (strcmp (vocabcontrolado->getNome(), NOME_TESTE) != 0 || strcmp (vocabcontrolado->getIdioma(), IDIOMA_TESTE) != 0 || strcmp (vocabcontrolado->getData(), DATA_TESTE) != 0)
        {
            estado = FALHA;
        }
        else
            cout << "Teste de SUCESSO para ENTIDADE VOCABULARIO CONTROLADO executado com exito!" << endl;
    }
    catch(invalid_argument excecao)
    {
        estado = FALHA;
    }

}
int TUcVocabControlado::run(){
	SetUp();
    TestarSucesso();
    TearDown();
    return estado;
}




void TUcTermo::SetUp(){
    termo = new cTermo();
	estado = SUCESSO;
}

void TUcTermo::TearDown(){
	delete termo;
}

void TUcTermo::TestarSucesso()
{
    try
    {
        termo->setNome(NOME_TESTE);
        termo->setClasseDeTermo(CLASSE_DE_TERMO_TESTE);
        termo->setData(DATA_TESTE);

        if (strcmp (termo->getNome(), NOME_TESTE) != 0 || strcmp (termo->getClasseDeTermo(), CLASSE_DE_TERMO_TESTE) != 0 || strcmp (termo->getData(), DATA_TESTE) != 0)
        {
            estado = FALHA;
        }
        else
            cout << "Teste de SUCESSO para ENTIDADE TERMO executado com exito!" << endl;
    }
    catch(invalid_argument excecao)
    {
        estado = FALHA;
    }

}
int TUcTermo::run(){
	SetUp();
    TestarSucesso();
    TearDown();
    return estado;
}


void TUcDefinicao::SetUp(){
    definicao = new cDefinicao();
	estado = SUCESSO;
}

void TUcDefinicao::TearDown(){
	delete definicao;
}

void TUcDefinicao::TestarSucesso()
{
    try
    {
        definicao->setTextoDef(TEXTO_DEFINICAO_TESTE);
        definicao->setData(DATA_TESTE);

        if (strcmp (definicao->getTextoDef(), TEXTO_DEFINICAO_TESTE) != 0 || strcmp (termo->getData(), DATA_TESTE) != 0)
        {
            estado = FALHA;
        }
        else
            cout << "Teste de SUCESSO para ENTIDADE DEFINICAO executado com exito!" << endl;
    }
    catch(invalid_argument excecao)
    {
        estado = FALHA;
    }

}
int TUcDefinicao::run(){
	SetUp();
    TestarSucesso();
    TearDown();
    return estado;
}
