#include "stubs.h"

//Defini��es de constantes.

const int StubLNAutenticacao::TRIGGER_FALHA;
const int StubLNAutenticacao::TRIGGER_ERRO_SISTEMA;

// EXEMPLO
// --------------------------------------------------------

// Defini��es de m�todo da classe stub do controlador da l�gica de neg�cio de autentica��o.

ResultadoAutenticacao StubLNAutenticacao::autenticar(const Matricula &matricula, const Senha &senha) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNAutenticacao::autenticar" << endl ;

    cout << "Matricula = " << matricula.getValor() << endl ;
    cout << "Senha     = " << senha.getValor()     << endl ;

    ResultadoAutenticacao resultado;

    // Diferentes comportamentos dependendo do valor da matr�cula.

    switch(matricula.getValor()){
        case TRIGGER_FALHA:
            resultado.setValor(ResultadoAutenticacao::FALHA);
            break;
        case TRIGGER_ERRO_SISTEMA:
            throw runtime_error("Erro de sistema");
        default:
            resultado.setValor(ResultadoAutenticacao::SUCESSO);
            resultado.setMatricula(matricula);
        }

    return resultado;
}

