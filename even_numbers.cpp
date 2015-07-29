#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string word; 

	while(getline(stream, word)) {
		if(stoi(word)%2==0) {
			cout << "1" << endl;
		}	
		else cout << "0" << endl;
	}
	return 0;
}
