#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line, word;
	
	while(getline(stream,line)){
		vector<string> numbers;
		vector<string> words;
		vector<string>::iterator iter;
		stringstream s(line);
		while(getline(s,word,',')) {
			if(isalpha(word[0]))
				words.push_back(word);
			else if(isdigit(word[0]))
				numbers.push_back(word);
		}
		for(iter=words.begin(); iter!=words.end(); ++iter) {
			if(distance(iter,words.end())!=1)
                                cout << *iter << ",";
			else 
				cout << *iter;
		}
		
		if(numbers.size() > 0 && words.size()>0)
			cout << "|";

		for(iter=numbers.begin(); iter!=numbers.end(); ++iter) {
                	if(distance(iter,numbers.end())!=1)
				cout << *iter << ",";
			else
				cout << *iter;
		}	
		cout << endl;
	}
	return 0;
}
