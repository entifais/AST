#include <vector>
#include <iostream>
#include <string>
#include <cstring>

#include "parser.h"
using namespace std;
void parser::tokenize(string const &str, const char* space,vector<string> &out){
    char *token = strtok(const_cast<char*>(str.c_str()), space);
    while (token != nullptr){
        out.push_back(string(token));
        token = strtok(nullptr, space);
    }
}

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

void tokenize(std::string const &str, const char* delim,
            std::vector<std::string> &out)
{
    char *token = strtok(const_cast<char*>(str.c_str()), delim);
    while (token != nullptr)
    {
        out.push_back(std::string(token));
        token = strtok(nullptr, delim);
    }
}
 
int main()
{
    std::string s = "we are professional blogger";
    const char* delim = " ";
 
    std::vector<std::string> out;
    tokenize(s, delim, out);
 
    for (auto &s: out) {
        std::cout << s << '\n';
    }
 
    return 0;
}

*/