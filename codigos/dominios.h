#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <cstring>
#include <stdexcept>
#include <string.h>

/* Alunos: Vitor Ribas Bandeira (160148421) e Pedro Nunes (160141044) */


using namespace std;


/**
 * Domínio Nome. Uma classe que faz o papel de armazenar um nome válido.
 */

class cNome
{
private:
    /**
     * Constante de Validação. Utilizada no método de validação
     para estabelecer o tamanho máximo de nome.
     */
    const static int TAMANHO_MAX = 20;
    /**
     * String para nomes.
     */
    char string[20];
    /**
     * Método de Validação com lançamento de exceção. Valida um nome passado de acordo com alguns critérios.
     */
    void Validade(const char str[20]) throw (invalid_argument);
public:
    /** Método Construtor.
    */
    cNome() {};
    /** Método Destrutor.
    */
    ~cNome() {};
    /**
     * Método Construtor com validação de nome.
     */
    cNome(char string[20])
    {
        setNome(string);
    }/** Método Get. Retorna o conteúdo de um objeto Nome. */

    inline char * getNome()
    {
        return string;
    }
    /** Método Set. Tenta atribuir uma string ao objeto Nome, passando por um processo de validação. */
    inline void setNome (const char str [20]) throw(invalid_argument)
    {
        Validade(str);
        strcpy(string, str);
    }

};
/**
 * Domínio Sobrenome. Uma classe que faz o papel de armazenar um sobrenome válido.
 */

class cSobrenome
{
private:
    /**
     * Constante de Validação. Utilizada no método de validação
     para estabelecer o tamanho máximo de sobrenome.
     */
    const static int TAMANHO_MAX = 20;
    /**
     * String para sobrenomes.
     */
    char string[20];
    /**
     * Método de Validação com lançamento de exceção. Valida um sobrenome passado de acordo com alguns critérios.
     */
    void Validade(const char str[20]) throw (invalid_argument);
public:
    /** Método Construtor.
    */
    cSobrenome() {};
    /** Método Destrutor.
    */
    ~cSobrenome() {};
    /**
     * Método Construtor com validação de sobrenome.
     */
    cSobrenome(char string[20])
    {
        setSobrenome(string);
    }
    /** Método Get. Retorna o conteúdo de um objeto Sobrenome. */
    inline char * getSobrenome()
    {
        return string;
    }
    /** Método Set. Tenta atribuir uma string ao objeto Sobrenome, passando por um processo de validação. */
    inline void setSobrenome (const char str [20]) throw(invalid_argument)
    {
        Validade(str);
        strcpy(string, str);
    }

};
/**
 * Domínio Telefone. Uma classe que faz o papel de armazenar um telefone válido.
 */

class cTelefone
{
private:
    //AA NNNNN–NNNN
    /**
     * Constante de Validação. Utilizada no método de validação desta classe
     para estabelecer a posição de um caracter em branco válido.
     */
    const static int POS_ESPACO = 2;
    /**
     * Constante de Validação. Utilizada no método de validação desta classe
     para estabelecer a posição de um hífen válido.
     */
    const static int POS_HIFEN = 8;
    /**
     * String para telefones.
     */
    char numero[14];
    /**
     * Método de Validação com lançamento de exceção. Valida um telefone passado de acordo com alguns critérios.
     */
    void Validade(const char str[14]) throw (invalid_argument);
public:
    /** Método Construtor.
    */
    cTelefone() {};
    /** Método Destrutor.
    */
    ~cTelefone() {};
    /**
     * Método Construtor com validação de telefone.
     */
    cTelefone(char str[14])
    {
        setTelefone(str);
    }
    /** Método Get. Retorna o conteúdo de um objeto Telefone. */
    inline char * getTelefone()
    {
        return numero;
    }
    /** Método Set. Tenta atribuir uma string ao objeto Telefone, passando por um processo de validação. */
    inline void setTelefone(const char str[14]) throw(invalid_argument)
    {
        Validade(str);
        strcpy(numero, str);
    }

};
/**
 * Domínio Endereço. Uma classe que faz o papel de armazenar um endereço válido.
 */

class cEndereco
{
private:
    /**
     * Constante de Validação. Utilizada no método de validação desta classe
     para estabelecer o tamanho máximo para um endereço.
     */
    const static int TAMANHO_MAX = 20;
    /**
     * String para endereços.
     */
    char string[40];
    /**
     * Método de Validação com lançamento de exceção. Valida um endereço passado de acordo com alguns critérios.
     */
    void Validade(const char str[40]) throw (invalid_argument);
public:
    /** Método Construtor.
    */
    cEndereco() {};
    /** Método Destrutor.
    */
    ~cEndereco() {};
    /**
     * Método Construtor com validação de endereço.
     */
    cEndereco(char str[40])
    {
        setEndereco(str);
    }
    /** Método Set. Tenta atribuir uma string ao objeto Endereço, passando por um processo de validação. */
    inline void setEndereco(const char str[40]) throw (invalid_argument)
    {
        Validade(str);
        strcpy(string, str);
    }
    /** Método Get. Retorna o conteúdo de um objeto Endereço. */
    inline char * getEndereco()
    {
        return string;
    }
};
/**
 * Domínio Data. Uma classe que faz o papel de armazenar uma data válida.
 */

class cData
{
private:

    const static int LIMITE_ANOS = 2099; /**< Constante de validação. Guarda o número máximo válido de anos para uma data.*/
    const static int LIMITE_MESES = 12;  /**< Constante de validação. Guarda o número máximo válido de meses para uma data.*/
    int LIMITE_DIAS; /**< Inteiro passado ao método de validação, onde terá seu valor atribuído de acordo com o mês e o ano (bissexto ou não).*/
    const static int MINIMO_ANOS = 1900;  /**< Constante de validação. Guarda o número mínimo válido de anos para uma data.*/
    const static int MINIMO_MESES = 01;  /**< Constante de validação. Guarda o número mínimo válido de meses para uma data.*/
    const static int MINIMO_DIAS = 01;  /**< Constante de validação. Guarda o número mínimo válido de dias para uma data.*/

    const static int JANEIRO = 1; /**< Constante de validação. Constante inteira para Janeiro.*/
    const static int FEVEREIRO = 2; /**< Constante de validação. Constante inteira para Fevereiro.*/
    const static int MARCO = 3; /**<  Constante de validação. Constante inteira para Março.*/
    const static int ABRIL = 4; /**<  Constante de validação. Constante inteira para Abril.*/
    const static int MAIO = 5; /**<  Constante de validação. Constante inteira para Maio.*/
    const static int JUNHO = 6; /**<  Constante de validação. Constante inteira para Junho.*/
    const static int JULHO = 7; /**<  Constante de validação. Constante inteira para Julho.*/
    const static int AGOSTO = 8; /**< Constante de validação.  Constante inteira para Agosto.*/
    const static int SETEMBRO = 9; /**<  Constante de validação. Constante inteira para Setembro.*/
    const static int OUTUBRO = 10; /**<  Constante de validação. Constante inteira para Outubro.*/
    const static int NOVEMBRO = 11; /**<  Constante de validação. Constante inteira para Novembro.*/
    const static int DEZEMBRO = 12; /**<  Constante de validação. Constante inteira para Dezembro.*/


    const static int PRIMEIRA_BARRA = 2; /**<  Constante de validação. Constante inteira de formatação da data.*/
    const static int SEGUNDA_BARRA = 5; /**<  Constante de validação. Constante inteira de formatação da data. */

    /**
     * String para datas.
     */
    char string[11];

    /**
     * Método de Validação com lançamento de exceção. Valida uma data passada de acordo com alguns critérios.
     */
    void Validade(const char str[11]) throw (invalid_argument);

public:
    /** Método Construtor.
    */
    cData() {};
    /** Método Destrutor.
    */
    ~cData() {};
    /**
     * Método Construtor com validação de data.
     */
    cData(char str[11])
    {
        setData(str);
    }
    /** Método Set. Tenta atribuir uma string ao objeto Data, passando por um processo de validação. */
    void inline setData(const char str[11]) throw (invalid_argument)
    {
        Validade(str);
        strcpy(string,str);
    }
    /** Método Get. Retorna o conteúdo de um objeto Data. */
    inline char *getData()
    {
        return string;
    }

};

/**
 * Domínio Correio Eletrônico. Uma classe que faz o papel de armazenar um correio eletrônico (email) válido.
 */


class cCorreioEletronico
{
private:

    /**
     * String para correio eletronico.
     */
    char string[30];

    /**
     * Método de Validação com lançamento de exceção. Valida um correio eletrônico (email) passado de acordo com alguns critérios.
     */
    void Validade(const char str[30]) throw (invalid_argument);
public:
  std::string EMAIL_INVALIDO = "pedropacn@gmail.com";
  /** Método Construtor.
    */
  cCorreioEletronico(){};
  /** Método Destrutor.
    */
  ~cCorreioEletronico(){};
  /**
     * Método Construtor com validação de correio eletrônico (email).
     */
  cCorreioEletronico(char str[30])
  {
      setCorreioEletronico(str);
    }
    /** Método Set. Tenta atribuir uma string ao objeto Correio Eletrônico, passando por um processo de validação. */
    inline void setCorreioEletronico(const char str[30]) throw (invalid_argument)
    {
        Validade(str);
        strcpy(string, str);
    }
    /** Método Get. Retorna o conteúdo de um objeto Correio Eletrônico. */
    inline std::string getCorreioEletronico() const
    {
        return string;
    }
};
/**
 * Domínio Senha. Uma classe que faz o papel de armazenar uma senha válida.
 */

class cSenha
{
private:
    const static int TAMANHO_MAX = 8; /**< Constante inteira para validação referente ao tamanho máximo de senha.*/

    /**
     * String para senha.
     */
    char string[15];

    /**
     * Método de Validação com lançamento de exceção. Valida uma senha passada de acordo com alguns critérios.
     */
    void Validade(const char str[15]) throw (invalid_argument);
public:
  std::string SENHA_INVALIDA = "12345678";
  /** Método Construtor.
    */
  cSenha(){};
  /** Método Destrutor.
    */
  ~cSenha(){};
  /**
     * Método Construtor com validação de senha.
     */
  cSenha(char str[15])
  {
      setSenha(str);
    }
    /** Método Set. Tenta atribuir uma string ao objeto Senha, passando por um processo de validação. */
    inline void setSenha(const char str[15]) throw (invalid_argument)
    {
        Validade(str);
        strcpy(string, str);
    }
    /** Método Get. Retorna o conteúdo de um objeto Senha. */
    std::string getSenha() const
    {
        return string;
    }
};
/**
 * Domínio Texto de Definição. Uma classe que faz o papel de armazenar um texto de definição válido.
 */

class cTextoDef
{
private:
    const static int TAMANHO_MAX = 30; /**< Constante inteira para validação referente ao tamanho máximo de um texto de definição.*/

    /**
     * String para texto de definição.
     */
    char string[50];

    /**
     * Método de Validação com lançamento de exceção. Valida um texto de definição passado de acordo com alguns critérios.
     */
    void Validade(const char str[50]) throw (invalid_argument);
public:
    /** Método Construtor.
    */
    cTextoDef() {};
    /** Método Destrutor.
    */
    ~cTextoDef() {};
    /**
     * Método Construtor com validação de texto de definição.
     */
    cTextoDef(char str[50])
    {
        Validade(str);
        setTextoDef(str);
    }
    /** Método Set. Tenta atribuir uma string ao objeto Texto de Definição, passando por um processo de validação. */
    inline void setTextoDef(const char str[50]) throw (invalid_argument)
    {
        Validade(str);
        strcpy(string, str);
    }
    /** Método Get. Retorna o conteúdo de um objeto Texto de Definição. */
    inline char * getTextoDef()
    {
        return string;
    }
};
/**
 * Domínio Idioma. Uma classe que faz o papel de armazenar um idioma válido.
 */

class cIdioma
{
private:
    const char* INGLES = "ING"; /**< Ponteiro char para idioma válido Inglês.*/
    const char* FRANCES = "FRA"; /**< Ponteiro char para idioma válido Francês.*/
    const char* ALEMAO= "GER"; /**< Ponteiro char para idioma válido Alemão.*/
    const char* ITALIANO = "ITA"; /**< Ponteiro char para idioma válido Italiano.*/
    const char* PORTUGUES = "POR"; /**< Ponteiro char para idioma válido Português.*/
    const char* ESPANHOL = "SPA"; /**< Ponteiro char para idioma válido Espanhol.*/

    /**
     * String para idioma.
     */
    char string[4];

    /**
     * Método de Validação com lançamento de exceção. Valida um idioma passado de acordo com alguns critérios.
     */
    void Validade(const char str[4]) throw (invalid_argument);
public:
    /** Método Construtor.
    */
    cIdioma() {};
    /** Método Destrutor.
    */
    ~cIdioma() {};
    /**
     * Método Construtor com validação de idioma.
     */
    cIdioma(char str[4])
    {
        setIdioma(str);
    }
    /** Método Set. Tenta atribuir uma string ao objeto Idioma, passando por um processo de validação. */
    inline void setIdioma(const char str[4]) throw (invalid_argument)
    {
        Validade(str);
        strcpy(string, str);
    }
    /** Método Get. Retorna o conteúdo de um objeto Idioma. */
    inline char * getIdioma()
    {
        return string;
    }
};
/**
 * Domínio Classe de Termo. Uma classe que faz o papel de armazenar uma classe de termo válida.
 */

class cClasseDeTermo
{
private:
    const char* TERMO_PT = "PT"; /**< Ponteiro char para classe de termo válida PT (preferred term).*/
    const char* TERMO_NP = "NP"; /**< Ponteiro char para classe de termo válida NP (non preferred term).*/

    /**
     * String para classe de termo.
     */
    char string[3];

    /**
     * Método de Validação com lançamento de exceção. Valida uma classe de termo passada de acordo com alguns critérios.
     */
    void Validade(const char str[3]) throw (invalid_argument);
public:
    /** Método Construtor.
    */
    cClasseDeTermo() {};
    /** Método Destrutor.
    */
    ~cClasseDeTermo() {};
    /**
     * Método Construtor com validação de classe de termo.
     */
    cClasseDeTermo(char str[3])
    {
        setClasseDeTermo(str);
    }
    /** Método Set. Tenta atribuir uma string ao objeto Classe de Termo, passando por um processo de validação. */
    inline void setClasseDeTermo(const char str[3]) throw (invalid_argument)
    {
        Validade(str);
        strcpy(string, str);
    }
    /** Método Get. Retorna o conteúdo de um objeto Classe de Termo. */
    inline char * getClasseDeTermo()
    {
        return string;
    }
};


#endif DOMINIOS_H_INCLUDED
