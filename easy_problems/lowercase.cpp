#include <iostream>
#include <fstream>
#include <locale>
using namespace std;

int main(int argc, char* argv[]) {	
	ifstream stream(argv[1]);
	string line;	
		
	while(getline(stream, line)) {
		for(int i=0; i<line.length(); i++) {
			line[i]=tolower(line[i]);
		}
		cout << line << endl;
	}	
	
	return 0;
}
