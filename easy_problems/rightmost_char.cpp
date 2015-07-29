#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char* argv[1]) {
	fstream stream(argv[1]);
	string line, sentence, character;
	
	while(getline(stream, line)){
		stringstream s(line);
		getline(s, sentence, ',');
		getline(s, character, ',');
		
		if(sentence.find_last_of(character) != string::npos) 
			cout << sentence.find_last_of(character) << endl;
		else 
			cout << "-1" << endl;
	}

	return 0;
}
