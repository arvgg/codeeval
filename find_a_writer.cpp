#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line, code, num;
	
	while(getline(stream, line)) {
		
		if(line != "") {
			stringstream s(line);
			string writer="";
			
			getline(s, code, '|');
			s.ignore();
			while(getline(s,num,' ')) {
				writer+=code[stoi(num)-1];
			}
			cout << writer << endl;
		}
	}
	return 0;
}
