#include <vector>
#include <iostream>
#include <string>
#include "parser.h"
//https://github.com/jero98772/toma_nota/blob/master/clases/lenguajes_programacion/parcial2/parcial2.cpp
int main(){
	parser p;
	string txt;cin>>txt;
	vector<string> vec = p.tokenizer();

	return 0;
}