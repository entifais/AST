#include <vector>
#include <iostream>
#include <string>
#include "parser.h"
using namespace std;
//https://github.com/jero98772/toma_nota/blob/master/clases/lenguajes_programacion/parcial2/parcial2.cpp
int main(){
	parser p;
	string txt;
	getline(cin,txt);
	//cout<<txt<<endl;
	//txt="el gato corre";
	vector<string> out;
	p.tokenize(txt, " ", out);
	//p.printtokens(out);
	int pos=p.buscarVerbo(out,"src/txt/verbos.txt");
	if (pos==-1){
		cout<<"---------\n"<<"no se encontro ningun verbo, la oracion no es valida y revise la ortografia"<<endl;
	}else{
		cout<<"sustantivos"<<endl;
		int esValido=p.validar(out,"src/txt/sustantivos.txt",pos);
		cout<<pos<<endl<<esValido<<endl;
		if(esValido==1){
			cout<<"---------\n\n"<<"La oracion es valida\n"<<"---------"<<endl;
		}else{
			cout<<"---------\n\n"<<"La NO oracion es valida\n"<<"---------"<<endl;
		}
	}
	return 0;
}