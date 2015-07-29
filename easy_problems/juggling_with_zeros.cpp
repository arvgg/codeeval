#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line, flag, digits;
	while(getline(stream, line)) {
		string result="";
		for(stringstream s(line); s>>flag;) {
			if(flag=="0") {
				s>>digits;
				result+=digits;
			}
			else if(flag=="00") {
				s >> digits;
				for(int i=0; i<digits.size(); i++) {
					result+="1";
				}
			}
		}
		cout << stol(result, nullptr,2) << endl;
	}
	return 0;
}
