#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line,word; 

	while(getline(stream, line)) {
		for(stringstream s(line); s >> word;) {
			word[0]=toupper(word[0]);
			cout << word << " ";
		} 
		cout << endl;
	}
	return 0;
}
