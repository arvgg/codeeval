#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line;

	while(getline(stream, line)) {
		for(int i=0; i<line.size(); i++) {
			char c=line[i];
			if(isalpha(c)){
				cout << (char)tolower(c);
				if(!isalpha(line[i+1])) cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
