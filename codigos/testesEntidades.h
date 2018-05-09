#ifndef TESTES_ENTIDADES_H_INCLUDED
#define TESTES_ENTIDADES_H_INCLUDED

#include "entidades.h"


/** Teste de Unidade para entidade Leitor. Criacao de um objeto da classe Leitor com seus atributos correspondentes.*/
class TUcLeitor {

private:

    // Definições de constantes para evitar numeros mágicos.

    const char NOME_TESTE[20] = "Ricardo"; /**< Constante char valida para teste de unidade.*/
    const char SOBRENOME_TESTE[20] = "Silva"; /**< Constante char valida para teste de unidade.*/
    const char CORREIO_ELETRONICO_TESTE[30] = "pedro.Pacn_10@gmail-cjr.com"; /**< Constante char valida para teste de unidade.*/
    const char SENHA_TESTE[15] = "Star2"; /**< Constante char valida para teste de unidade.*/


    // Referência para o objeto a ser testado.

    cLeitor *leitor; /** Ponteiro objeto. Criacao do ponteiro do objeto a ser criado pelo metodo SetUp ().*/

    // Estado do teste.

    int estado; /**< Flag inteira. Marca o status do Teste de Unidade.*/

    // Declarações de métodos.

    /** Metodo Set Up. Criacao de um objeto da classe.*/
    void SetUp();

    /** Metodo Tear Down. Destruicao do objeto utilizado.*/
    void TearDown();

    /** Metodo de teste para sucesso. Sucesso significa criar com sucesso um objeto dessa entidade com atributos validos.*/
    void TestarSucesso();


public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    /** Metodo Run. Executa o teste de unidade para a entidade (SetUp, TestarSucesso e TearDown).*/
    int run(){};
};


/** Teste de Unidade para entidade Desenvolvedor. Criacao de um objeto da classe Leitor com seus atributos correspondentes.*/
class TUcDesenvolvedor {

private:

    // Definições de constantes para evitar numeros mágicos.

    const char NOME_TESTE[20] = "Ricardo"; /**< Constante char valida para teste de unidade.*/
    const char SOBRENOME_TESTE[20] = "Silva"; /**< Constante char valida para teste de unidade.*/
    const char CORREIO_ELETRONICO_TESTE[30] = "pedro.Pacn_10@gmail-cjr.com"; /**< Constante char valida para teste de unidade.*/
    const char SENHA_TESTE[15] = "Star2"; /**< Constante char valida para teste de unidade.*/
    const char DATA_TESTE[11] = "22/03/2019"; /**< Constante char valida para teste de unidade.*/


    // Referência para o objeto a ser testado.

    cDesenvolvedor *desenvolvedor; /** Ponteiro objeto. Criacao do ponteiro do objeto a ser criado pelo metodo SetUp ().*/

    // Estado do teste.

    int estado; /**< Flag inteira. Marca o status do Teste de Unidade.*/

    // Declarações de métodos.

    /** Metodo Set Up. Criacao de um objeto da classe.*/
    void SetUp();

    /** Metodo Tear Down. Destruicao do objeto utilizado.*/
    void TearDown();

    /** Metodo de teste para sucesso. Sucesso significa criar com sucesso um objeto dessa entidade com atributos validos.*/
    void TestarSucesso();


public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    /** Metodo Run. Executa o teste de unidade para a entidade (SetUp, TestarSucesso e TearDown).*/
    int run(){};
};


/** Teste de Unidade para entidade Administrador. Criacao de um objeto da classe Leitor com seus atributos correspondentes.*/
class TUcAdministrador {

private:

    // Definições de constantes para evitar numeros mágicos.

    const char NOME_TESTE[20] = "Ricardo"; /**< Constante char valida para teste de unidade.*/
    const char SOBRENOME_TESTE[20] = "Silva"; /**< Constante char valida para teste de unidade.*/
    const char CORREIO_ELETRONICO_TESTE[30] = "pedro.Pacn_10@gmail-cjr.com"; /**< Constante char valida para teste de unidade.*/
    const char SENHA_TESTE[15] = "Star2"; /**< Constante char valida para teste de unidade.*/
    const char DATA_TESTE[11] = "22/03/2019"; /**< Constante char valida para teste de unidade.*/
    const char ENDERECO_TESTE[40] = "Condominio Jabuti"; /**< Constante char valida para teste de unidade.*/


    // Referência para o objeto a ser testado.

    cAdministrador *administrador ; /** Ponteiro objeto. Criacao do ponteiro do objeto a ser criado pelo metodo SetUp ().*/

    // Estado do teste.

    int estado; /**< Flag inteira. Marca o status do Teste de Unidade.*/

    // Declarações de métodos.

    /** Metodo Set Up. Criacao de um objeto da classe.*/
    void SetUp();

    /** Metodo Tear Down. Destruicao do objeto utilizado.*/
    void TearDown();

    /** Metodo de teste para sucesso. Sucesso significa criar com sucesso um objeto dessa entidade com atributos validos.*/
    void TestarSucesso();


public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    /** Metodo Run. Executa o teste de unidade para a entidade (SetUp, TestarSucesso e TearDown).*/
    int run(){};
};


/** Teste de Unidade para entidade Vocabulario Controlado. Criacao de um objeto da classe Leitor com seus atributos correspondentes.*/
class TUcVocabControlado {

private:

    // Definições de constantes para evitar numeros mágicos.

    const char NOME_TESTE[20] = "Ricardo"; /**< Constante char valida para teste de unidade.*/
    const char IDIOMA_TESTE[4] = "SPA"; /**< Constante char valida para teste de unidade.*/
    const char DATA_TESTE[11] = "22/03/2019"; /**< Constante char valida para teste de unidade.*/



    // Referência para o objeto a ser testado.

    cVocabControlado *vocabcontrolado; /**< Ponteiro objeto. Criacao do ponteiro do objeto a ser criado pelo metodo SetUp ().*/

    // Estado do teste.

    int estado; /**< Flag inteira. Marca o status do Teste de Unidade.*/

    // Declarações de métodos.

    /** Metodo Set Up. Criacao de um objeto da classe.*/
    void SetUp();
    /** Metodo Tear Down. Destruicao do objeto utilizado.*/
    void TearDown();

    /** Metodo de teste para sucesso. Sucesso significa criar com sucesso um objeto dessa entidade com atributos validos.*/
    void TestarSucesso();


public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    /** Metodo Run. Executa o teste de unidade para a entidade (SetUp, TestarSucesso e TearDown).*/
    int run(){};
};


/** Teste de Unidade para entidade Leitor. Criacao de um objeto da classe Leitor com seus atributos correspondentes.*/
class TUcTermo {

private:

    // Definições de constantes para evitar numeros mágicos.

    const char NOME_TESTE[20] = "Ricardo"; /**< Constante char valida para teste de unidade.*/
    const char CLASSE_DE_TERMO_TESTE[3] = "PT"; /**< Constante char valida para teste de unidade.*/
    const char DATA_TESTE[11] = "22/03/2019"; /**< Constante char valida para teste de unidade.*/

    // Referência para o objeto a ser testado.

    cTermo *termo; /** Ponteiro objeto. Criacao do ponteiro do objeto a ser criado pelo metodo SetUp ().*/

    // Estado do teste.

    int estado; /**< Flag inteira. Marca o status do Teste de Unidade.*/

    // Declarações de métodos.

    /** Metodo Set Up. Criacao de um objeto da classe.*/
    void SetUp();

    /** Metodo Tear Down. Destruicao do objeto utilizado.*/
    void TearDown();

    /** Metodo de teste para sucesso. Sucesso significa criar com sucesso um objeto dessa entidade com atributos validos.*/
    void TestarSucesso();


public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    /** Metodo Run. Executa o teste de unidade para a entidade (SetUp, TestarSucesso e TearDown).*/
    int run(){};
};


/** Teste de Unidade para entidade Definicao. Criacao de um objeto da classe Leitor com seus atributos correspondentes.*/
class TUcDefinicao {

private:

    // Definições de constantes para evitar numeros mágicos.

    const char TEXTO_DEFINICAO_TESTE[50] = "Quando vi aquele monte 28!"; /**< Constante char valida para teste de unidade.*/
    const char DATA_TESTE[11] ="22/03/2019"; /**< Constante char valida para teste de unidade.*/



    // Referência para o objeto a ser testado.

    cDefinicao *definicao; /** Ponteiro objeto. Criacao do ponteiro do objeto a ser criado pelo metodo SetUp ().*/

    // Estado do teste.

    int estado; /**< Flag inteira. Marca o status do Teste de Unidade.*/

    // Declarações de métodos.

    /** Metodo Set Up. Criacao de um objeto da classe.*/
    void SetUp();

    /** Metodo Tear Down. Destruicao do objeto utilizado.*/
    void TearDown();

    /** Metodo de teste para sucesso. Sucesso significa criar com sucesso um objeto dessa entidade com atributos validos.*/
    void TestarSucesso();


public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    /** Metodo Run. Executa o teste de unidade para a entidade (SetUp, TestarSucesso e TearDown).*/
    int run(){};
};

#endif  TESTES_ENTIDADES_H_INCLUDED
