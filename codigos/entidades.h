#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED


#include <iostream>
#include <cstring>
#include "dominios.h"

using namespace std;

class Resultado
{

  protected:
	int valor;

  public:
	// Declarações de possíveis resultados.

	const static int SUCESSO = 0;
	const static int FALHA = 1;

	void setValor(int valor)
	{
		this->valor = valor;
	}

	int getValor() const
	{
		return valor;
	}
};

class ResultadoAutenticacao : public Resultado
{

  private:
	cCorreioEletronico email;

  public:
	void setMail(const cCorreioEletronico &email)
	{ // passagem por referência.
		this->email = email;
	}

	cCorreioEletronico getMail() const
	{
		return email;
	}
};

class ResultadoGestao : public Resultado
{

  private:
	cCorreioEletronico email;

  public:
	void setMail(const cCorreioEletronico &email)
	{ // passagem por referência.
		this->email = email;
	}

	cCorreioEletronico getMail() const
	{
		return email;
	}
};

class ResultadoVocabulario : public Resultado
{

  private:
	cCorreioEletronico email;

  public:
	void setMail(const cCorreioEletronico &email)
	{ // passagem por referência.
		this->email = email;
	}

	cCorreioEletronico getMail() const
	{
		return email;
	}
};

/** Entidade Leitor. Classe que possui como atributos os Dominios: Nome, sobrenome, correio eletronico (email) e senha.*/
class cLeitor
{
private:
	cNome *nome; /** Atributo nome. Atributo do tipo dominio Nome.*/
	cSobrenome *sobrenome; /** Atributo sobrenome. Atributo do tipo dominio Sobrenome.*/
	cCorreioEletronico *correioeletronico; /** Atributo correio eletronico. Atributo do tipo dominio Correio eletronico.*/
	cSenha *senha; /** Atributo senha. Atributo do tipo dominio Senha.*/
	/** Metodo de Validade. Deve verificar a hipotese de haver o nome do leitor no interior de sua senha.*/
	void Validade(const char str[8]);
public:
    /** Metodo Construtor.*/
	cLeitor(){
	nome = new cNome;
	sobrenome = new cSobrenome;
	correioeletronico = new cCorreioEletronico;
	senha = new cSenha;
	};

	/** Metodo Destrutor.*/
	~cLeitor(){
	    delete nome;
        delete sobrenome;
        delete correioeletronico;
        delete senha;
	};
    /** Metodo Set Nome para entidade Leitor.*/
	void inline setNome(const char str[20]){
        nome->setNome(str);
	}

	/** Metodo Get Nome para entidade Leitor.*/
	inline string getNome(){
        return nome->getNome();
	}

	/** Metodo Set Sobrenome para entidade Leitor.*/
	void inline setSobrenome(const char str[20]){
	    sobrenome->setSobrenome(str);
	}

	/** Metodo Get Sobrenome para entidade Leitor.*/
	inline string getSobrenome(){
        return sobrenome->getSobrenome();
	}

	/** Metodo Set Correio Eletronico para entidade Leitor.*/
	void inline setCorreioEletronico(const char str[20]){
	    correioeletronico->setCorreioEletronico(str);
	}

	/** Metodo Get Correio Eletronico para entidade Leitor.*/
	inline string getCorreioEletronico(){
        return correioeletronico->getCorreioEletronico();
	}

	/** Metodo Set Senha para entidade Leitor.*/
	void inline setSenha(const char str[8]) throw (invalid_argument){
	    Validade(str);
	    senha->setSenha(str);
	}

	/** Metodo Get Senha para entidade Leitor.*/
	inline string getSenha(){
        return senha->getSenha();
	}

};

/** Entidade Desenvolvedor. Classe que possui como atributos os Dominios: Nome, sobrenome, correio eletronico (email), senha e data.*/
class cDesenvolvedor
{
private:
    cNome * nome; /** Atributo nome. Atributo do tipo dominio Nome.*/
	cSobrenome * sobrenome; /** Atributo sobrenome. Atributo do tipo dominio Sobrenome.*/
	cCorreioEletronico * correioeletronico; /** Atributo correio eletronico. Atributo do tipo dominio Correio eletronico.*/
	cSenha * senha; /** Atributo senha. Atributo do tipo dominio Senha.*/
	cData * data; /** Atributo Data. Atributo do tipo dominio Data.*/
	/** Metodo de Validade. Deve verificar a hipotese de haver o nome do desenvolvedor no interior de sua senha.*/
    void Validade(char str[8]);
public:
    /** Metodo Construtor.*/
	cDesenvolvedor(){
	nome = new cNome;
	sobrenome = new cSobrenome;
	correioeletronico = new cCorreioEletronico;
	senha = new cSenha;
	data = new cData;
	};

	/** Metodo Destrutor.*/
	~cDesenvolvedor(){
	    delete nome;
        delete sobrenome;
        delete correioeletronico;
        delete senha;
        delete data;
	};

	/** Metodo Set Nome para entidade Desenvolvedor.*/
	void inline setNome(const char str[20]){
        nome->setNome(str);
	}

	/** Metodo Get Nome para entidade Desenvolvedor.*/
	inline string getNome(){
        return nome->getNome();
	}

	/** Metodo Set Sobrenome para entidade Desenvolvedor.*/
	void inline setSobrenome(const char str[20]){
	    sobrenome->setSobrenome(str);
	}

	/** Metodo Get Sobrenome para entidade Desenvolvedor.*/
	inline string getSobrenome(){
        return sobrenome->getSobrenome();
	}

	/** Metodo Set Correio Eletronico para entidade Desenvolvedor.*/
	void inline setCorreioEletronico(const char str[20]){
	    correioeletronico->setCorreioEletronico(str);
	}

	/** Metodo Get Correio Eletronico para entidade Desenvolvedor.*/
	inline string getCorreioEletronico(){
        return correioeletronico->getCorreioEletronico();
	}

	/** Metodo Set Senha para entidade Desenvolvedor*/
	void inline setSenha(const char str[8]){
	    senha->setSenha(str);
	}

	/** Metodo Get Senha para entidade Desenvolvedor.*/
	inline string getSenha(){
        return senha->getSenha();
	}

	/** Metodo Set Data para entidade Desenvolvedor.*/
	void inline setData(const char str[11]){
	    data->setData(str);
	}

	/** Metodo Get Data para entidade Desenvolvedor.*/
	inline string getData(){
        return data->getData();
	}
};


/** Entidade Administrador. Classe que possui como atributos os Dominios: Nome, sobrenome, correio eletronico (email), senha e endereco.*/
class cAdministrador
{
private:
    cNome * nome; /** Atributo nome. Atributo do tipo dominio Nome.*/
	cSobrenome * sobrenome; /** Atributo sobrenome. Atributo do tipo dominio Sobrenome.*/
	cCorreioEletronico * correioeletronico; /** Atributo Correio eletronico. Atributo do tipo dominio Correio eletronico.*/
	cSenha * senha; /** Atributo Senha. Atributo do tipo dominio Senha.*/
	cData * data; /** Atributo Data. Atributo do tipo dominio Data.*/
	cEndereco * endereco; /** Atributo Endereco. Atributo do tipo dominio Endereco.*/
	/** Metodo de Validade. Deve verificar a hipotese de haver o nome do administrador no interior de sua senha.*/
    void Validade(char str[8]);

public:

    /** Metodo Construtor.*/
	cAdministrador(){
	nome = new cNome;
	sobrenome = new cSobrenome;
	correioeletronico = new cCorreioEletronico;
	senha = new cSenha;
	data = new cData;
	endereco = new cEndereco;
	};

	/** Metodo Destrutor.*/
	~cAdministrador(){
	    delete nome;
        delete sobrenome;
        delete correioeletronico;
        delete senha;
        delete data;
        delete endereco;
	};

	/** Metodo Set Nome para entidade Administrador.*/
	void inline setNome(const char str[20]){
        nome->setNome(str);
	}

	/** Metodo Get Nome para entidade Administrador.*/
	inline string getNome(){
        return nome->getNome();
	}

	/** Metodo Set Sobrenome para entidade Administrador.*/
	void inline setSobrenome(const char str[20]){
	    sobrenome->setSobrenome(str);
	}

	/** Metodo Get Sobrenome para entidade Administrador.*/
	inline string getSobrenome(){
        return sobrenome->getSobrenome();
	}

	/** Metodo Set Correio Eletronico para entidade Administrador.*/
	void inline setCorreioEletronico(const char str[20]){
	    correioeletronico->setCorreioEletronico(str);
	}

	/** Metodo Get Correio Eletronico para entidade Administrador.*/
	inline string getCorreioEletronico(){
        return correioeletronico->getCorreioEletronico();
	}

	/** Metodo Set Senha para entidade Administrador.*/
	void inline setSenha(const char str[8]){
	    senha->setSenha(str);
	}

	/** Metodo Get Senha para entidade Administrador.*/
	inline string getSenha(){
        return senha->getSenha();
	}

	/** Metodo Set Data para entidade Administrador.*/
	void inline setData(const char str[11]){
	    data->setData(str);
	}

	/** Metodo Get Data para entidade Administrador.*/
	inline string getData(){
        return data->getData();
	}

	/** Metodo Set Endereco para entidade Administrador.*/
	void inline setEndereco(const char str[11]){
	    endereco->setEndereco(str);
	}

	/** Metodo Get Endereco para entidade Administrador.*/
	inline string getEndereco(){
        return getEndereco();
	}


};
/** Entidade Vocabulario Controlado. Classe que possui como atributos os Dom�nios: Nome, idioma e data.*/
class cVocabControlado
{
private:
    cNome * nome; /** Atributo Nome. Atributo do tipo dominio Nome.*/
    cIdioma * idioma; /** Atributo Idioma. Atributo do tipo dominio Idioma.*/
    cData * data; /** Atributo Data. Atributo do tipo dominio Data.*/

public:

    /** Metodo Construtor.*/
	cVocabControlado(){
		nome = new cNome;
		idioma = new cIdioma;
		data = new cData;
	};

	/** Metodo Destrutor.*/
	~cVocabControlado(){
		delete nome;
		delete idioma;
		delete data;
	};

    /** Metodo Set Nome para entidade Vocabulario Controlado.*/
	void inline setNome(const char str[20]){
	    nome->setNome(str);
	}

	/** Metodo Get Nome para entidade Vocabulario Controlado.*/
	inline string getNome(){
        return nome->getNome();
	}

    /** Metodo Set Idioma para entidade Vocabulario Controlado.*/
	void inline setIdioma(const char str[20]){
	    idioma->setIdioma(str);
	}

    /** Metodo Get Idioma para entidade Vocabulario Controlado.*/
	inline string getIdioma(){
        return idioma->getIdioma();
	}

	/** Metodo Set Data para entidade Vocabulario Controlado.*/
    void inline setData(const char str[11]){
	    data->setData(str);
	}

	/** Metodo Get Data para entidade Vocabulario Controlado.*/
	inline string getData(){
        return data->getData();
	}
};


/** Entidade Termo. Classe que possui como atributos os Dom�nios: Nome, classe de termo e data.*/
class cTermo
{
private:
    cNome * nome; /** Atributo Nome. Atributo do tipo dominio nome.*/
    cClasseDeTermo * classedetermo; /** Atributo classe de termo. Atributo do tipo dominio Classe de termo.*/
    cData * data; /** Atributo data. Atributo do tipo dominio Data.*/

public:

    /** Metodo Construtor.*/
	cTermo(){
		nome = new cNome;
		classedetermo = new cClasseDeTermo;
		data = new cData;
	};

	/** Metodo Destrutor.*/
	~cTermo(){
		delete nome;
		delete classedetermo;
		delete data;
	};

	/** Metodo Set Nome para entidade Termo.*/
	void inline setNome(const char str[20]){
	    nome->setNome(str);
	}

	/** Metodo Get Nome para entidade Termo.*/
	inline cNome getNome(){
        return nome->getNome();
	}

	/** Metodo Set Data para entidade Termo.*/
	void inline setData(const char str[11]){
	    data->setData(str);
	}

	/** Metodo Get Data para entidade Termo.*/
	inline string getData(){
        return data->getData();
	}

	/** Metodo Set Classe de Termo para entidade Termo.*/
	void inline setClasseDeTermo(const char str[2]){
	    classedetermo->setClasseDeTermo(str);
	}

	/** Metodo Get Classe de Termo para entidade Termo.*/
	inline string getClasseDeTermo(){
        return classedetermo->getClasseDeTermo();
	}

};

/** Entidade Definicao. Classe que possui como atributos os Dominios: Texto de definicao e data.*/
class cDefinicao
{
private:
    cTextoDef * textodef; /** Atributo texto de definicao. Atributo do tipo dominio Texto de Definicao.*/
    cData * data; /** Atributo data. Atributo do tipo dominio Data.*/

public:

    /** Metodo Construtor.*/
	cDefinicao(){
		textodef = new cTextoDef;
		data = new cData;
	};

	/** Metodo Destrutor.*/
	~cDefinicao(){
		delete textodef;
		delete data;
	};

	/** Metodo Set Data para entidade Definicao.*/
    void inline setData(const char str[11]){
	    data->setData(str);
	}

	/** Metodo Get Data para entidade Definicao.*/
	inline string getData(){
        return data->getData();
	}

	/** Metodo Set Texto de Definicao para entidade Definicao.*/
	void inline setTextoDef(const char str[30]){
	    textodef->setTextoDef(str);
	}

	/** Metodo Get Texto de Definicao para entidade Definicao.*/
	inline cTextoDef getTextoDef(){
        return textodef->getTextoDef();
	}
};


#endif ENTIDADES_H_INCLUDED
