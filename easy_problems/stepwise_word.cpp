#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

string longestWord(string line) {
	string word,result;
	int longest=0;
	for(stringstream s(line); s >> word;) {
		if(word.size() > longest) {
			result=word;
			longest=word.size();
		}
	}
	return result;
}

void stepwiseify(string line) {
	string longest_word=longestWord(line);
	
	for(int i=0; i<longest_word.size(); i++) {
		for(int j=0; j<longest_word.size()-(longest_word.size()-i); j++) {
			cout << "*";
		}
		cout << longest_word[i] << " ";
	}
	cout << endl;
}

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line;
	
	while(getline(stream,line)) {
		stepwiseify(line);
	}
	return 0;
}
