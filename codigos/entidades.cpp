#include <iostream>
#include "entidades.h"
#include <string.h>

using namespace std;

void cLeitor::Validade(const char str[8]){
	char nom[20];
	strcpy(nom, this->nome->getNome());
    if(strlen(nom) <= strlen(str)){
    	for (int i = 0; i < strlen(str); ++i)
    	{
    		if(str[i] == nom[0] && i+strlen(nom)<strlen(str)){
    			char temp[8];
    			for (int j = 0; j < strlen(nom); ++j)
    				temp[j] = str[i+j];
    			if(strcmp(str, temp) == 0)
    				throw invalid_argument ("Nome contido na senha.");
    		}
    	}
    }
}
