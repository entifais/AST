#ifndef parser_h
#define parser_h
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class parser{
	vector<string> tokens;
	public:
		parser();
		vector<string> tokenizer(string words);
		void printtokens();
		void tokenize(string const &str, const char* space,vector<string> &out);
};
#endif