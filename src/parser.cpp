#include <vector>
#include <iostream>
#include <string>
#include <cstring>//para usar el metodo strtok
#include <fstream>

#include "parser.h"
using namespace std;
void parser::tokenize(string const &str, const char* space,vector<string> &out){
    char *token = strtok(const_cast<char*>(str.c_str()), space);
    while (token != nullptr){
        out.push_back(string(token));
        token = strtok(nullptr, space);
    }
}

void  parser::printtokens(vector<string> &vec){
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<endl;
	}
}
int parser::buscarVerbo(vector<string> &tokens, string nombreArchivo){
    //ifstream archivo(nombreArchivo.c_str());
    ifstream archivo;
    archivo.open(nombreArchivo,ios::in);
    string linea;
    int validaciones=0;
    int pos;
    for(int i = 0; i < tokens.size(); i++){//desde uno por que el sujeto deberia estar una posicion del arreglo, las posicones serain tokens
        //while (getline(archivo, linea)) {
        if(archivo.fail()){
            cout<<"error!"<<endl;
        }
        if(archivo.is_open()){
            do{
                archivo>>linea;
                cout<<tokens[i]<<"\t=\t"<<linea<<"\n---------"<<endl;
                if(tokens[i]==linea){
                    validaciones++;
                    pos=i;
                }//nos quedamos bucando otro verbo y si lo hay esta malo y retornamos un numero de error
                if(validaciones>=2){
                    cout<<"2 o mas verbos"<<endl;
                    return -1;
                } 
            }while(!archivo.fail());
        }
        else{
            cout<<"error abriendo el archivo"<<endl;
        }
    }
    if(validaciones==1){
        return pos;
    }
    if(validaciones==0){
        return -1;
    }
}
int parser::validar(vector<string> &tokens, string nombreArchivo,int pos){
    ifstream archivo(nombreArchivo.c_str());//abre un archivo de sustantivos
    string linea;
    int validaciones=0;
    for(int i = pos; 0 < i; i--){
        while (getline(archivo, linea)) {
            if(tokens[i]==linea){
                return 1;
            }
        }
    }
    return -1;
}
parser::parser(){}
