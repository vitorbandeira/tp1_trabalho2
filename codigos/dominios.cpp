#include "dominios.h"
#include <string.h>
#include <stdlib.h>

using namespace std;

bool Minuscula(char ch)
{
    if('a' <= ch && ch <= 'z')
        return true;
    return false;
}

bool Maiuscula(char ch)
{
    if('A' <= ch && ch <= 'Z')
        return true;
    return false;
}

bool Letra(char ch)
{
    if(Minuscula(ch) || Maiuscula(ch))
        return true;
    return false;
}

bool Numero(char ch)
{
    if('0' <= ch && ch <= '9')
        return true;
    return false;
}

//FUNÇÕES DA CLASSE NOME
void cNome::Validade(const char str[20]) throw (invalid_argument)
{
    if(strlen(str)>TAMANHO_MAX)
        throw invalid_argument ("Tamanho de nome excedido.");

    else if(!Maiuscula(str[0]))
        throw invalid_argument ("Não comeca com letra maiuscula");
    for (unsigned int i = 1; i < strlen(string); ++i)
    {
        if(str[i] == '\0')
            break;
        if(!Letra(str[i]))
            throw invalid_argument ("Caracter não alfabetico");
    }
}

//MÉTODOS DA CLASSE SOBRENOME

void cSobrenome::Validade(const char str[20]) throw (invalid_argument)
{
    if(strlen(str)>TAMANHO_MAX)
        throw invalid_argument ("Tamanho de nome excedido.");

    else if(!Maiuscula(str[0]))
        throw invalid_argument ("Não comeca com letra maiuscula");
    for (unsigned int i = 1; i < strlen(string); ++i)
    {
        if(str[i] == '\0')
            break;
        if(!Letra(str[i]))
            throw invalid_argument ("Caracter não alfabetico");
    }
}
//FUNÇÕES DA CLASSE TELEFONE

void cTelefone::Validade(const char str[14]) throw (invalid_argument)
{
    for (int i = 0; i < 14; ++i)
    {
        if(i == POS_ESPACO)
            if(str[i] != ' ')
                throw invalid_argument ("Numero invalido.");
            else if(i == POS_HIFEN)
                if(str[i] != '-')
                    throw invalid_argument ("Numero invalido.");
                else if(!Numero(str[i]))
                    throw invalid_argument ("Numero invalido.");
    }
}

//FUNÇÕES DA CLASSE ENDEREÇO


void cEndereco::Validade(const char str[40]) throw (invalid_argument)
{

    if(str[0] == ' ')
        throw invalid_argument ("Endereco nao pode comecar com espaco vazio.");
    if (str[strlen(str)-1] == ' ')
        throw invalid_argument ("Endereco nao pode terminar com espaco vazio.");
    if (strlen(str)>TAMANHO_MAX)
        throw invalid_argument ("Endereco com mais de 20 caracteres.");
    for (unsigned int i = 0; i < strlen(str)-1; ++i)
    {
        if(str[i] == ' ' && str[i+1] == ' ')
            throw invalid_argument ("Dois espacos em branco seguidos.");
        if(!Letra(str[i]))
            throw invalid_argument ("Caracter não alfabetico");
    }
}

//FUNÇÕES DA CLASSE DATA


void cData::Validade(const char str[11]) throw (invalid_argument)
{

    char data[11];
    int dia_int, mes_int, ano_int, i;
    char *dia_char, *mes_char, *ano_char;
    char* aux[4];
    char* iterador;


    if (str[PRIMEIRA_BARRA] != '/' && str[SEGUNDA_BARRA] != '/' )
        throw invalid_argument ("Formatacao incorreta.");


    strcpy(data,str); //PRESERVA A STRING ORIGINAL str

    iterador = strtok (data,"/");
    while (iterador != NULL)
    {
        aux[i]=iterador;
        iterador = strtok (NULL, "/");
        i++;
    }

    dia_char = aux[0];
    mes_char = aux[1];
    ano_char = aux[2];
    dia_int = atoi(dia_char);
    mes_int = atoi(mes_char);
    ano_int = atoi(ano_char);

    if (ano_int < MINIMO_ANOS || ano_int > LIMITE_ANOS)
        throw invalid_argument ("Data invalida.");

    if (mes_int < MINIMO_MESES || mes_int > LIMITE_MESES)
        throw invalid_argument ("Data invalida.");

    if (dia_int < MINIMO_DIAS)
        throw invalid_argument ("Data invalida.");

    if (mes_int == JANEIRO ||mes_int== MARCO|| mes_int == MAIO|| mes_int == JULHO || mes_int == AGOSTO|| mes_int == OUTUBRO || mes_int == DEZEMBRO )
        LIMITE_DIAS = 31;
    else if (mes_int == ABRIL || mes_int == JUNHO|| mes_int == SETEMBRO || mes_int == NOVEMBRO)
        LIMITE_DIAS = 30;
    else if ( mes_int == FEVEREIRO)
    {
        if ((ano_int % 4 == 0 ) && (ano_int % 100 != 0 || ano_int % 400 == 0))//ano bissexto
            LIMITE_DIAS = 29;
    }
    else
        LIMITE_DIAS = 28;

    if (dia_int>LIMITE_DIAS)
        throw invalid_argument ("Data invalida");
}

//FUNÇÕES DA CLASSE CORREIO ELETRÔNICO

void cCorreioEletronico::Validade(const char str[20]) throw (invalid_argument)
{

    int posicao = -1;
    //Parte local
    for (int i = 0; i < strlen(str); ++i)
        if (str[i] == '@')
            posicao = i;
    if(posicao == -1)
        throw invalid_argument ("Sem @ no endeco de email.");
    if (str[0] == '.')
        throw invalid_argument ("Email iniciado por '.'.");
    if (str[posicao-1] == '.')
        throw invalid_argument ("Email com '.' antes de @.");
    //Domínio
    bool numerico = true;
    for (int i = posicao+1; i < strlen(str); ++i)
        if(!Numero(str[i]))
            numerico = false;
    if(numerico)
        throw invalid_argument ("Email com parte completamente numerica");
    if(str[posicao+1] == '.')
        throw invalid_argument ("Email com '.' depois de @.");
    if(str[strlen(str)-1] == '.')
        throw invalid_argument ("Email terminado por '.'.");
    if(str[posicao+1] == '-')
        throw invalid_argument ("Email com '-' depois de @.");
    if(str[strlen(str)-1] == '-')
        throw invalid_argument ("Email terminado por '-'.");

}

//FUNÇÕES DA CLASSE SENHA


void cSenha::Validade(const char str[15]) throw (invalid_argument)
{

    bool upper = false, lower = false, number = false;
    if(strlen(str) > TAMANHO_MAX)
        throw invalid_argument ("Tamanho de senha excede o permitido.");
    for (int i = 0; i < 8; ++i)
    {
        if(Numero(str[i]))
            number = true;
        if(Maiuscula(str[i]))
            upper = true;
        if(Minuscula(str[i]))
            lower = true;
    }
    if(!upper)
        throw invalid_argument ("Sem letra maiuscula.");
    if(!lower)
        throw invalid_argument ("Sem letra minuscula.");
    if(!number)
        throw invalid_argument ("Sem caracter numerico.");
}

//FUNÇÕES DA CLASSE TEXTO


void cTextoDef::Validade(const char str [50]) throw (invalid_argument)
{

    if(strlen(str) > TAMANHO_MAX)
        throw invalid_argument ("Tamanho de texto excede o permitido.");


}
//FUNÇÕES DA CLASSE IDIOMA


void cIdioma::Validade(const char str[4]) throw (invalid_argument)
{

    for (int i = 0; i < 3; ++i)
        if(!Maiuscula(str[i]))
            throw invalid_argument ("Idioma invalido em formato.");
    if (strcmp(str,INGLES)!=0 && strcmp(str,FRANCES)!=0 && strcmp(str,PORTUGUES)!=0 && strcmp(str,ITALIANO)!=0 && strcmp(str,ESPANHOL)!=0 && strcmp(str,ALEMAO)!=0)
        throw invalid_argument ("Idioma nao suportado.");
}

//FUNÇÕES DA CLASSE CLASSE DE TERMO


void cClasseDeTermo::Validade(const char str [3]) throw (invalid_argument)
{
    if(strcmp(str, TERMO_PT) != 0 && strcmp(str, TERMO_NP) != 0)

        throw invalid_argument ("Termo invalido");
}
