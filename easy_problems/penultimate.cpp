#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line,word;

	while(getline(stream,line)) {
		stringstream s(line);
		vector<string> sentence;
		while(getline(s,word,' ')){
			sentence.push_back(word);
		}
		cout << sentence[sentence.size()-2] << endl;
	}
	return 0;
}
