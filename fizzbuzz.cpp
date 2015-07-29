#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>
using namespace std;

void fizzbuzzify(string line) {
	stringstream stream(line);
	int first, second, max_count;
	stream >> first;
	stream >> second;
	stream >> max_count;
	if (first < 1 || first > 20) {
		cout << "X out of range." << endl;
		return;
	}
	if (second < 1 || second > 20) { 
		cout << "Y out of range." << endl;
		return;
	}
	if (max_count < 21 || max_count > 100) {
		cout << "N out of range." << endl;
		return;
	}	

	for(int i=1; i<=max_count; i++) {
		if(i % first==0 && i % second==0) {
			cout << "FB ";
		}
		else {
			if(i % first==0)    
				cout << "F ";
			else if(i % second==0) 
				cout << "B ";
			else 
				cout << i << " ";
		}
	}
	cout << endl;
}

int main(int argc, char *argv[]) {
	int testcase_count=0;
	ifstream stream(argv[1]);
	string line;
	while(getline(stream,line)) {
		if (testcase_count > 20) {
			cout << "Too many testcases. Exiting." << endl;
			exit(1);
		}
		fizzbuzzify(line);
		testcase_count++;
	}
	return 0;
}
