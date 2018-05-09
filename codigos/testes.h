#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

using namespace std;

/** Teste de Unidade para Classe de Nome. Simula os seguintes cenarios: a criaçao de um objeto da classe, tentiva de armazenamento de atributo valido,
 * entativa de armazenamento de atributo invalido (lançamento de excecaoo) e destruicao de objeto utilizado.*/
class TUcNome
{
private:
    const char valid[20] = "Pedro"; /**< Constante char valida passada para teste de sucesso.*/
	const char invalid1[20] = "pedro"; /**< Constante char invalida passada para teste de falha.*/
	const char invalid2[20] = "Pedro2"; /**< Constante char invalida passada para teste de falha.*/
    const char invalid3[20] = "Pedro."; /**< Constante char invalida passada para teste de falha.*/

	cNome *nome;

	int estado; /**< Flag inteira. Marca o status do Teste de Unidade.*/

	/** Metodo Set Up. Criacao de um objeto da classe.*/
	void SetUp();

	/** Metodo Tear Down. Destruicao do objeto utilizado.*/
    void TearDown();
        /** Metodo de teste para sucesso. Sucesso significa passar com exito pelo metodo de validacao da classe dominio a que pertece.*/
    void TestarSucesso();
    /** Metodo de teste para falha. Falha significa nao ser validado pelo metodo de validacao da classe dominio a que pertente e ocorrencia de lancamente de excecao.*/
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

/** Teste de Unidade para Classe de Sobrenome. Simula os seguintes cenários: a criacao de um objeto da classe, tentiva de armazenamento de atributo valido,
 * entativa de armazenamento de atributo invalido (lancamento de excecao) e destruicao de objeto utilizado.*/
class TUcSobrenome
{
private:
    const char valid[20] = "Carvalho"; /**< Constante char valida para teste de sucesso.*/
	const char invalid1[20] = "carvalho"; /**< Constante char invalida passada para teste de falha.*/
	const char invalid2[20] = "Carvalho2"; /**< Constante char invalida passada para teste de falha.*/
    const char invalid3[20] = "Carvalho."; /**< Constante char invalida passada para teste de falha.*/

	cSobrenome *sobrenome;

	int estado; /**< Flag inteira. Marca o status do Teste de Unidade.*/

	/** Metodo Set Up. Criacao de um objeto da classe.*/
	void SetUp();
	/** Metodo Tear Down. Destruicao do objeto utilizado.*/
    void TearDown();
    /** Metodo de teste para sucesso. Sucesso significa passar com exito pelo metodo de validacao da classe dominio a que pertece.*/
    void TestarSucesso();
    /** Metodo de teste para falha. Falha significa não ser validado pelo metodo de validacao da classe dominio a que pertente e ocorrencia de lancamente de excecao.*/
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

/** Teste de Unidade para Classe de Telefone. Simula os seguintes cenários: a criação de um objeto da classe, tentiva de armazenamento de atributo válido,
 * entativa de armazenamento de atributo inválido (lançamento de exceção) e destruição de objeto utilizado.
  */
class TUcTelefone
{
private:
    const char valid[14] = "61 99817-4745"; /**< Constante char válida para teste de sucesso.*/
    const char invalid1[14] = "6199817-4745"; /**< Constante char inválida passada para teste de falha.*/
    const char invalid2[14] = "61 998174745"; /**< Constante char inválida passada para teste de falha.*/
    const char invalid3[14] = "6d 99817ab45"; /**< Constante char inválida passada para teste de falha.*/

    cTelefone *telefone;

    int estado; /**< Flag inteira. Marca o status do Teste de Unidade.*/

    /** Método Set Up. Criação de um objeto da classe.*/
    void SetUp();
    /** Método Tear Down. Destruição do objeto utilizado.*/
    void TearDown();
    /** Método de teste para sucesso. Sucesso significa passar com êxito pelo método de validação da classe domínio a que pertece.*/
    void TestarSucesso();
    /** Método de teste para falha. Falha significa não ser validado pelo método de validação da classe domínio a que pertente e ocorrência de lançamente de exceção.*/
    void TestarFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

/** Teste de Unidade para Classe de Endereço. Simula os seguintes cenários: a criação de um objeto da classe, tentiva de armazenamento de atributo válido,
 * entativa de armazenamento de atributo inválido (lançamento de exceção) e destruição de objeto utilizado.
 */
class TUcEndereco
{
private:
    const char valid[40] = "Condominio Jabuti"; /**< Constante char válida para teste de sucesso.*/
	const char invalid1[40] = "@#!$%% sul"; /**< Constante char inválida passada para teste de falha.*/
	const char invalid2[40] = " SQSW301 Bl A A 510"; /**< Constante char inválida passada para teste de falha.*/
    const char invalid3[40] = "SQSW301 Bl A A 510 "; /**< Constante char inválida passada para teste de falha.*/
    const char invalid4[40] = "SQSW301  Bl A A 510"; /**< Constante char inválida passada para teste de falha.*/
    const char invalid5[40] = "Condominio Boa Vista Lote 5 Casa 2"; /**< Constante char inválida passada para teste de falha.*/

	cEndereco *endereco;

	int estado; /**< Flag inteira. Marca o status do Teste de Unidade.*/

	/** Método Set Up. Criação de um objeto da classe.*/
	void SetUp();
	/** Método Tear Down. Destruição do objeto utilizado.*/
    void TearDown();
    /** Método de teste para sucesso. Sucesso significa passar com êxito pelo método de validação da classe domínio a que pertece.*/
    void TestarSucesso();
    /** Método de teste para falha. Falha significa não ser validado pelo método de validação da classe domínio a que pertente e ocorrência de lançamente de exceção.*/
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

/** Teste de Unidade para Classe de Data. Simula os seguintes cenários: a criação de um objeto da classe, tentiva de armazenamento de atributo válido,
 * entativa de armazenamento de atributo inválido (lançamento de exceção) e destruição de objeto utilizado.
  */
class TUcData
{
private:
    const char valid[11] = "22/03/2019"; /**< Constante char válida para teste de sucesso.*/
	const char invalid1[11] = "22032019"; /**< Constante char inválida passada para teste de falha.*/
	const char invalid2[11] = "32/03/2019"; /**< Constante char inválida passada para teste de falha.*/
    const char invalid3[11] = "22/13/2019"; /**< Constante char inválida passada para teste de falha.*/
    const char invalid4[11] = "22/03/2200"; /**< Constante char inválida passada para teste de falha.*/

	cData *data;

	int estado; /**< Flag inteira. Marca o status do Teste de Unidade.*/

	/** Método Set Up. Criação de um objeto da classe.*/
	void SetUp();
	/** Método Tear Down. Destruição do objeto utilizado.*/
    void TearDown();
    /** Método de teste para sucesso. Sucesso significa passar com êxito pelo método de validação da classe domínio a que pertece.*/
    void TestarSucesso();
    /** Método de teste para falha. Falha significa não ser validado pelo método de validação da classe domínio a que pertente e ocorrência de lançamente de exceção.*/
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

/** Teste de Unidade para Classe de Correio Eletrônico. Simula os seguintes cenários: a criação de um objeto da classe, tentiva de armazenamento de atributo válido,
 * entativa de armazenamento de atributo inválido (lançamento de exceção) e destruição de objeto utilizado.
  */
class TUcCorreioEletronico
{
private:
    const char valid[30] = "pedro.Pacn_10@gmail-cjr.com"; /**< Constante char válida para teste de sucesso.*/
	const char invalid1[30] = ".pedropacn@gmail.com"; /**< Constante char inválida passada para teste de falha.*/
	const char invalid2[30] = "pedropacn.@gmail.com"; /**< Constante char inválida passada para teste de falha.*/
    const char invalid3[30] = "pedro.Pacn_10@255"; /**< Constante char inválida passada para teste de falha.*/
    const char invalid4[30] = "pedro.Pacn_10@gmail.com-"; /**< Constante char inválida passada para teste de falha.*/
    const char invalid5[30] = "pedropacngmail.com"; /**< Constante char inválida passada para teste de falha.*/

	cCorreioEletronico *correioeletronico;

	int estado; /**< Flag inteira. Marca o status do Teste de Unidade.*/

	/** Método Set Up. Criação de um objeto da classe.*/
	void SetUp();
	/** Método Tear Down. Destruição do objeto utilizado.*/
    void TearDown();
    /** Método de teste para sucesso. Sucesso significa passar com êxito pelo método de validação da classe domínio a que pertece.*/
    void TestarSucesso();
    /** Método de teste para falha. Falha significa não ser validado pelo método de validação da classe domínio a que pertente e ocorrência de lançamente de exceção.*/
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

/** Teste de Unidade para Classe de Senha. Simula os seguintes cenários: a criação de um objeto da classe, tentiva de armazenamento de atributo válido,
 * entativa de armazenamento de atributo inválido (lançamento de exceção) e destruição de objeto utilizado.
  */
class TUcSenha
{
private:
    const char valid[15] = "Star2"; /**< Constante char válida para teste de sucesso.*/
	const char invalid1[15] = "Starwars25439"; /**< Constante char inválida passada para teste de falha.*/
	const char invalid2[15] = "star20"; /**< Constante char inválida passada para teste de falha.*/
    const char invalid3[15] = "Star"; /**< Constante char inválida passada para teste de falha.*/

    cSenha *senha;

	int estado; /**< Flag inteira. Marca o status do Teste de Unidade.*/

	/** Método Set Up. Criação de um objeto da classe.*/
	void SetUp();
	/** Método Tear Down. Destruição do objeto utilizado.*/
    void TearDown();
    /** Método de teste para sucesso. Sucesso significa passar com êxito pelo método de validação da classe domínio a que pertece.*/
    void TestarSucesso();
    /** Método de teste para falha. Falha significa não ser validado pelo método de validação da classe domínio a que pertente e ocorrência de lançamente de exceção.*/
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

/** Teste de Unidade para Classe de Texto de Definição. Simula os seguintes cenários: a criação de um objeto da classe, tentiva de armazenamento de atributo válido,
 * entativa de armazenamento de atributo inválido (lançamento de exceção) e destruição de objeto utilizado.
  */
class TUcTextoDef
{
private:
    const char valid[50] = "Quando vi aquele monte 28!"; /**< Constante char válida para teste de sucesso.*/
	const char invalid1[50] = "Quando vi aquela montanha no meio do caminho."; /**< Constante char inválida passada para teste de falha.*/


    cTextoDef *textodef;

	int estado; /**< Flag inteira. Marca o status do Teste de Unidade.*/

	/** Método Set Up. Criação de um objeto da classe.*/
	void SetUp();
	/** Método Tear Down. Destruição do objeto utilizado.*/
    void TearDown();
    /** Método de teste para sucesso. Sucesso significa passar com êxito pelo método de validação da classe domínio a que pertece.*/
    void TestarSucesso();
    /** Método de teste para falha. Falha significa não ser validado pelo método de validação da classe domínio a que pertente e ocorrência de lançamente de exceção.*/
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

/** Teste de Unidade para Classe de Idioma. Simula os seguintes cenários: a criação de um objeto da classe, tentiva de armazenamento de atributo válido,
 * entativa de armazenamento de atributo inválido (lançamento de exceção) e destruição de objeto utilizado.
  */
class TUcIdioma
{
private:
    const char valid[4] = "SPA"; /**< Constante char válida para teste de sucesso.*/
	const char invalid1[4] = "JPO"; /**< Constante char inválida passada para teste de falha.*/
	const char invalid2[4] = "spa"; /**< Constante char inválida passada para teste de falha.*/


    cIdioma *idioma;

	int estado; /**< Flag inteira. Marca o status do Teste de Unidade.*/

	/** Método Set Up. Criação de um objeto da classe.*/
	void SetUp();
	/** Método Tear Down. Destruição do objeto utilizado.*/
    void TearDown();
    /** Método de teste para sucesso. Sucesso significa passar com êxito pelo método de validação da classe domínio a que pertece.*/
    void TestarSucesso();
    /** Método de teste para falha. Falha significa não ser validado pelo método de validação da classe domínio a que pertente e ocorrência de lançamente de exceção.*/
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

/** Teste de Unidade para Classe de Termo. Simula os seguintes cenários: a criação de um objeto da classe, tentiva de armazenamento de atributo válido,
 * entativa de armazenamento de atributo inválido (lançamento de exceção) e destruição de objeto utilizado.
  */
class TUcClasseDeTermo
{
private:
    const char valid1[3] = "PT"; /**< Constante char válida para teste de sucesso.*/
    const char valid2[3] = "NP"; /**< Constante char válida para teste de sucesso.*/
	const char invalid[3] = "pt"; /**< Constante char inválida passada para teste de falha.*/


    cClasseDeTermo *classedetermo;

	int estado; /**< Flag inteira. Marca o status do Teste de Unidade.*/

	/** Método Set Up. Criação de um objeto da classe.*/
	void SetUp();
	/** Método Tear Down. Destruição do objeto utilizado.*/
    void TearDown();
    /** Método de teste para sucesso. Sucesso significa passar com êxito pelo método de validação da classe domínio a que pertece.*/
    void TestarSucesso();
    /** Método de teste para falha. Falha significa não ser validado pelo método de validação da classe domínio a que pertente e ocorrência de lançamente de exceção.*/
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

#endif TESTES_H_INCLUDED
