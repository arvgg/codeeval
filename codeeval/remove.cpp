#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char *argv[]) {
	fstream stream(argv[1]);
	string line;
	char prev;

	while(getline(stream,line)) {
		for(int i=0; i<line.length(); i+=2) {
			while(line[i] == line[i+2]) 
				i+=2;
			cout << line[i];
			if(line[i+1]==',') 
				cout << ',';
		}
		cout << endl;
	}
	return 0;
}
