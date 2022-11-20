#include <vector>
#include <iostream>
#include <string>
#include "parser.h"
using namespace std;
vector<string> parser::tokenizer(string words){
	//vector<string> tokens;
	int pos1=0;
	int pos2;
	for(int i=0;i<=words.size()+1;i++){
		if(words[i]==' '){
			cout<<"espacio"<<endl;
			pos2=i;
			this->tokens.push_back(words.substr(pos1,pos2));
			pos1=i+1;
		 }
		 if(i==words.size()){
		 	this->tokens.push_back(words.substr(pos2+1,i));
		 }
		cout<<words[i]<<"\t"<<pos1<<"\t"<<pos2<<endl;
	}
	return this->tokens;
}
void  parser::printtokens(){
	for(int i=0;i<this->tokens.size();i++){
		cout<<this->tokens[i]<<endl;

	}
}
parser::parser(){}
/*


*/