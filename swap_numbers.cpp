#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]){
	ifstream stream(argv[1]);
	string line, word;

	while(getline(stream, line)) {
		for(stringstream s(line); s>>word;) {
			int temp=word[0];
			word[0]=word[word.size()-1];
			word[word.size()-1]=temp;
			cout << word << " ";
		}
		cout << endl;
	}
	return 0;
}

