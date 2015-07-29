#include <iostream>
#include <fstream>
using namespace std;

void roller_coaster(string line) {
	bool upper=true;

	for(int i=0; i<line.size(); i++) {
		if(isalpha(line[i])) {
			if(upper==false){
				cout << (char)tolower(line[i]);
				upper=true;
			}
			else {
				cout << (char)toupper(line[i]);
				upper=false;
			}
		}	
		else cout << line[i];
	}
	cout << endl;
}

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line;

	while(getline(stream,line)) {
		roller_coaster(line);
	}
	return 0;
}
