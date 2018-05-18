#include "testes.h"
#include <string.h>

void TUcNome::SetUp(){
    nome = new cNome();
	estado = SUCESSO;
}

void TUcNome::TearDown(){
	delete nome;
}

void TUcNome::TestarSucesso()
{
    try
    {
        nome->setNome(valid);
        if (strcmp (nome->getNome(), valid) != 0)
        {
            estado = FALHA;
        }
        else
            cout << "Teste de SUCESSO para NOME executado com exito!" << endl;
    }
    catch(invalid_argument excecao)
    {
        estado = FALHA;
    }

}

void TUcNome::TestarFalha(){
	try{
		nome->setNome(invalid1);
            estado = FALHA;
		nome->setNome(invalid2);
            estado = FALHA;
		nome->setNome(invalid3);
            estado = FALHA;
	}
	catch(invalid_argument excecao){
		cout << "Teste de FALHA para NOME executado com exito!" << endl;
		return;
	}
}

int TUcNome::run(){
	SetUp();
    TestarSucesso();
    TestarFalha();
    TearDown();
    return estado;
}


void TUcSobrenome::SetUp(){
    sobrenome = new cSobrenome();
	estado = SUCESSO;
}

void TUcSobrenome::TearDown(){
	delete sobrenome;
}

void TUcSobrenome::TestarSucesso()
{
    try
    {
        sobrenome->setSobrenome(valid);
        if (strcmp (sobrenome->getSobrenome(), valid) != 0)
        {
            estado = FALHA;
        }
        else
            cout << "Teste de SUCESSO para SOBRENOME executado com exito!" << endl;
    }
    catch(invalid_argument excecao)
    {
        estado = FALHA;
    }

}

void TUcSobrenome::TestarFalha(){
	try{
		sobrenome->setSobrenome(invalid1);
            estado = FALHA;
		sobrenome->setSobrenome(invalid2);
            estado = FALHA;
		sobrenome->setSobrenome(invalid3);
            estado = FALHA;
	}
	catch(invalid_argument excecao){
		cout << "Teste de FALHA para SOBRENOME executado com exito!" << endl;
		return;
	}
}

int TUcSobrenome::run(){
	SetUp();
    TestarSucesso();
    TestarFalha();
    TearDown();
    return estado;
}


// Métodos de teste para o dominio de Telefone


void TUcTelefone::SetUp(){
    telefone = new cTelefone();
	estado = SUCESSO;
}

void TUcTelefone::TearDown(){
	delete telefone;
}

void TUcTelefone::TestarSucesso()
{
    try
    {
        telefone->setTelefone(valid);
        if (strcmp (telefone->getTelefone(), valid) != 0)
        {
            estado = FALHA;
        }
        else
            cout << "Teste de SUCESSO para TELEFONE executado com exito!" << endl;
    }
    catch(invalid_argument excecao)
    {
        estado = FALHA;
    }

}

void TUcTelefone::TestarFalha(){
	try{
		telefone->setTelefone(invalid1);
			estado = FALHA;
		telefone->setTelefone(invalid2);
			estado = FALHA;
		telefone->setTelefone(invalid3);
			estado = FALHA;
	}
	catch(invalid_argument excecao){
		cout << "Teste de FALHA para TELEFONE executado com exito!" << endl;
		return;
	}
}

int TUcTelefone::run(){
	SetUp();
    TestarSucesso();
    TestarFalha();
    TearDown();
    return estado;
}



void TUcEndereco::SetUp(){
    endereco = new cEndereco();
	estado = SUCESSO;
}

void TUcEndereco::TearDown(){
	delete endereco;
}

void TUcEndereco::TestarSucesso()
{
    try
    {
        endereco->setEndereco(valid);
        if (strcmp (endereco->getEndereco(), valid) != 0)
        {
            estado = FALHA;
        }
        else
            cout << "Teste de SUCESSO para ENDERECO executado com exito!" << endl;
    }
    catch(invalid_argument excecao)
    {
        cout << endereco->getEndereco() << endl;
        estado = FALHA;
    }

}

void TUcEndereco::TestarFalha(){
	try{
		endereco->setEndereco(invalid1);
			estado = FALHA;
		endereco->setEndereco(invalid2);
			estado = FALHA;
		endereco->setEndereco(invalid3);
			estado = FALHA;
        endereco->setEndereco(invalid4);
			estado = FALHA;
        endereco->setEndereco(invalid5);
			estado = FALHA;

	}
	catch(invalid_argument excecao){
		cout << "Teste de FALHA para ENDERECO executado com exito!" << endl;
		return;
	}
}

int TUcEndereco::run(){
	SetUp();
    TestarSucesso();
    TestarFalha();
    TearDown();
    return estado;
}



void TUcData::SetUp(){
    data = new cData();
	estado = SUCESSO;
}

void TUcData::TearDown(){
	delete data;
}

void TUcData::TestarSucesso()
{
    try
    {
        data->setData(valid);
        if (strcmp (data->getData(), valid) != 0)
        {
            estado = FALHA;
        }
        else
            cout << "Teste de SUCESSO para DATA executado com exito!" << endl;
    }
    catch(invalid_argument excecao)
    {
        estado = FALHA;
    }

}

void TUcData::TestarFalha(){
	try{
		data->setData(invalid1);
			estado = FALHA;
		data->setData(invalid2);
			estado = FALHA;
		data->setData(invalid3);
			estado = FALHA;
	}
	catch(invalid_argument excecao){
		cout << "Teste de FALHA para DATA executado com exito!" << endl;
		return;
	}
}

int TUcData::run(){
	SetUp();
    TestarSucesso();
    TestarFalha();
    TearDown();
    return estado;
}

void TUcCorreioEletronico::SetUp(){
    correioeletronico = new cCorreioEletronico();
	estado = SUCESSO;
}

void TUcCorreioEletronico::TearDown(){
	delete correioeletronico;
}

void TUcCorreioEletronico::TestarSucesso()
{
    try
    {
        correioeletronico->setCorreioEletronico(valid);
        if (strcmp (correioeletronico->getCorreioEletronico().c_str(), valid) != 0)
        {
            estado = FALHA;
        }
        else
            cout << "Teste de SUCESSO para CORREIO ELETRONICO executado com exito!" << endl;
    }
    catch(invalid_argument excecao)
    {
        estado = FALHA;
    }

}

void TUcCorreioEletronico::TestarFalha(){
	try{

		correioeletronico->setCorreioEletronico(invalid1);
			estado = FALHA;
		correioeletronico->setCorreioEletronico(invalid2);
			estado = FALHA;
		correioeletronico->setCorreioEletronico(invalid3);
			estado = FALHA;
        correioeletronico->setCorreioEletronico(invalid4);
			estado = FALHA;
        correioeletronico->setCorreioEletronico(invalid5);
			estado = FALHA;
		}

	catch(invalid_argument excecao){
		cout << "Teste de FALHA para CORREIO ELETRONICO executado com exito!" << endl;
		return;
	}
}

int TUcCorreioEletronico::run(){
	SetUp();
    TestarSucesso();
    TestarFalha();
    TearDown();
    return estado;
}



void TUcSenha::SetUp(){
    senha = new cSenha();
	estado = SUCESSO;
}

void TUcSenha::TearDown(){
	delete senha;
}

void TUcSenha::TestarSucesso()
{
    try
    {
        senha->setSenha(valid);
        if (strcmp (senha->getSenha().c_str(), valid) != 0)
        {
            estado = FALHA;
        }
        else
            cout << "Teste de SUCESSO para SENHA executado com exito!" << endl;
    }
    catch(invalid_argument excecao)
    {
        estado = FALHA;
    }

}

void TUcSenha::TestarFalha(){
	try{
		senha->setSenha(invalid1);
			estado = FALHA;
		senha->setSenha(invalid2);
			estado = FALHA;
		senha->setSenha(invalid3);
			estado = FALHA;

	}
	catch(invalid_argument excecao){
		cout << "Teste de FALHA para SENHA executado com exito!" << endl;
		return;
	}
}

int TUcSenha::run(){
	SetUp();
    TestarSucesso();
    TestarFalha();
    TearDown();
    return estado;
}




void TUcTextoDef::SetUp(){
    textodef = new cTextoDef();
	estado = SUCESSO;
}

void TUcTextoDef::TearDown(){
	delete textodef;
}

void TUcTextoDef::TestarSucesso()
{
    try
    {
        textodef->setTextoDef(valid);
        if (strcmp (textodef->getTextoDef(), valid) != 0)
        {
            estado = FALHA;
        }
        else
            cout << "Teste de SUCESSO para TEXTO DE DEFINICAO executado com exito!" << endl;
    }
    catch(invalid_argument excecao)
    {
        estado = FALHA;
    }

}

void TUcTextoDef::TestarFalha(){
	try{
		textodef->setTextoDef(invalid1);
			estado = FALHA;
	}
	catch(invalid_argument excecao){
		cout << "Teste de FALHA para TEXTO DE DEFINICAO executado com exito!" << endl;
		return;
	}
}

int TUcTextoDef::run(){
	SetUp();
    TestarSucesso();
    TestarFalha();
    TearDown();
    return estado;
}





void TUcIdioma::SetUp(){
    idioma = new cIdioma();
	estado = SUCESSO;
}

void TUcIdioma::TearDown(){
	delete idioma;
}

void TUcIdioma::TestarSucesso()
{
    try
    {
        idioma->setIdioma(valid);
        if (strcmp (idioma->getIdioma(), valid) != 0)
        {
            estado = FALHA;
        }
        else
            cout << "Teste de SUCESSO para IDIOMA executado com exito!" << endl;
    }
    catch(invalid_argument excecao)
    {
        estado = FALHA;
    }

}

void TUcIdioma::TestarFalha(){
	try{
		idioma->setIdioma(invalid1);
			estado = FALHA;
        idioma->setIdioma(invalid2);
			estado = FALHA;
	}
	catch(invalid_argument excecao){
		cout << "Teste de FALHA para IDIOMA executado com exito!" << endl;
		return;
	}
}

int TUcIdioma::run(){
	SetUp();
	TestarSucesso();
	TestarFalha();
    TearDown();
    return estado;
}






void TUcClasseDeTermo::SetUp(){
    classedetermo = new cClasseDeTermo();
	estado = SUCESSO;
}

void TUcClasseDeTermo::TearDown(){
	delete classedetermo;
}

void TUcClasseDeTermo::TestarSucesso()
{
    try
    {
        classedetermo->setClasseDeTermo(valid1);
        classedetermo->setClasseDeTermo(valid2);
        if (strcmp (classedetermo->getClasseDeTermo(), valid1) != 0 && strcmp (classedetermo->getClasseDeTermo(), valid2) != 0)
        {
            estado = FALHA;

        }
        else
            cout << "Teste de SUCESSO para CLASSE DE TERMO executado com exito!" << endl;
    }
    catch(invalid_argument excecao)
    {
        estado = FALHA;

    }

}

void TUcClasseDeTermo::TestarFalha(){
	try{
		classedetermo->setClasseDeTermo(invalid);
			estado = FALHA;
	}
	catch(invalid_argument excecao){
		cout << "Teste de FALHA para CLASSE DE TERMO executado com exito!" << endl;
		return;
	}
}

int TUcClasseDeTermo::run(){
	SetUp();
    TestarSucesso();
    TestarFalha();
    TearDown();
    return estado;
}
