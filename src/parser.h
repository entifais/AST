#ifndef parser_h
#define parser_h
#include <vector>
#include <iostream>
#include <string>
class cli{
	vector<string> tokens;
	public:
		vector<string> tokenizer(string words);
		void printtokens();
};
#endif