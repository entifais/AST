#include <vector>
#include <iostream>
#include <string>
using namespace std;
vector<string> parser::tokenizer(string words){
	//vector<string> tokens;
	int pos1=0;
	int pos2;
	for(int i=0;i<=words.length()+1;i++){
		if(words[i]==' '){
			pos2=i;
			this->tokens.push_back(words.substr(pos1,pos2))
			pos1=i+1;
		 }
		 if(i==words.length()){
		 	this->tokens.push_back(words.substr(pos1,i))
		 }
	}
	return this->tokens;
}
void  parser::printtokens(){
	for(int i=0;i<this->tokens.length();i++){
		cout<<this->tokens[i]

	}
}