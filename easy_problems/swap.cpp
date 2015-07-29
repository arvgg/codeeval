#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line,word; 

	while(getline(stream, line)) {
		for (int i=0; i<line.size(); i++) {
			if(isalpha(line[i])) {
				if(isupper(line[i]))
					line[i]=tolower(line[i]);
				else
					line[i]=toupper(line[i]);
			}
		}
		cout << line << endl;
	}
	return 0;
}
