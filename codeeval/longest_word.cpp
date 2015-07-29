#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line, word;

	while(getline(stream, line)) {
		int longest=0;
		string longestString="";
		for(stringstream s(line); s >> word;){
			if(word.size() > longest) { 
				longestString=word;
				longest=word.size();
			}
		}
		cout << longestString << endl;
	}
	return 0;
}
