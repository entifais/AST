#ifndef parser_h
#define parser_h
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class parser{
	public:
		parser();
		void printtokens(vector<string> &vec);
		void tokenize(string const &str, const char* space,vector<string> &out);
		int buscarVerbo(vector<string> &tokens,string nombreArchivo);
		int validar(vector<string> &tokens,string nombreArchivo,int pos);


};
#endif