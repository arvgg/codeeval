#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line;
	int num1, num2, mult;
	while(getline(stream,line)) {
		stringstream stream(line);
		stream >> num1;
		stream.ignore();
		stream >> num2;
		mult=num2;
		
		int i=2;
		while(mult<num1) {
			mult=num2* i;
			i++;
		}
		cout << mult << endl;
	
	}

}
