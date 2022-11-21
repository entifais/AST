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
	txt="hola mundo como estas ?";
    vector<std::string> out;
    p.tokenize(txt, " ", out);
    for (auto &txt: out) {
        cout <<txt<< '\n';
    }
	
	//vector<string> vec = p.tokenizer();
 
 
 
	p.printtokens();
	return 0;
}