#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line,word; 

	while(getline(stream, line)) {
		stringstream s(line);
		while(getline(s, word, ';')) {
			if(word=="zero")  cout << "0";
			if(word=="one")   cout << "1";
			if(word=="two")   cout << "2";
			if(word=="three") cout << "3";
			if(word=="four")  cout << "4";
			if(word=="five")  cout << "5";
			if(word=="six")   cout << "6";
			if(word=="seven") cout << "7";
			if(word=="eight") cout << "8";
			if(word=="nine")  cout << "9";
		}
			cout << endl;
	}
	return 0;
}
