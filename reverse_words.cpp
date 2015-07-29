#include <sstream>
#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

void reverse_sentence(string str) {
	stringstream stream(str);
        string word;
	stack<string> s;
	while(stream >> word) {
		s.push(word);
	} 
	while(s.empty() == false){ 
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}

int main(int argc, char *argv[]) {
        ifstream stream(argv[1]);
        string line;
        while(getline(stream,line)) {
		reverse_sentence(line);
	}
        return 0;
}

