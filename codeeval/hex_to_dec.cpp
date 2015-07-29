#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line;
	int num;
	
	while(getline(stream, line)) {
		stringstream s(line);
		s >> hex >> num;
		cout << num << endl;
	}
	
	return 0;
}
