#include <vector>
#include <iostream>
#include <string>
#include "parser.h"
using namespace std;
//https://github.com/jero98772/toma_nota/blob/master/clases/lenguajes_programacion/parcial2/parcial2.cpp
int main(){
	parser p;
	string txt;
	//getline(cin,txt);
	//cout<<txt<<endl;
	txt="el nada";
	vector<string> out;
	p.tokenize(txt, " ", out);
	//p.printtokens(out);
	int pos=p.buscarVerbo(out,"verbos.txt");
	if (pos==-1){
		cout<<"se encontro mas de un verbo o no se encontro ningun verbo, la oracion no es valida y revise la ortografia"<<endl;
	}
	int esValido=p.validar(out,"txt/sustantivos.txt",pos);
	if(esValido==1){
		cout<<"La oracion es valida"<<endl;
	}
	return 0;
}