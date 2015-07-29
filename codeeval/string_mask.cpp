#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line, word, number;
	
	while(getline(stream,line)) {
		stringstream s(line);
		s >> word;
		s >> number;
		for(int i=0; i<word.size(); i++) {
			if(number[i]=='1') 
				word[i]=toupper(word[i]);
		}
		cout << word << endl;
	}
	return 0;
}
