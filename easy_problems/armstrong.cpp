#include <iostream>
#include <fstream>
#include <math.h>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line;	

	while(getline(stream,line)) {
		int sum=0;
		int exp=line.length();

		for(int i=0; i<exp; i++) {
			string num(1,line[i]);
			sum+=pow(stoi(num), exp);
		}
		if(sum==stoi(line)) {
			cout << "True" << endl;
		}
		else {
			cout << "False" << endl;
		}
	}

	return 0;	
}
