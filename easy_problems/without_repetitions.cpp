#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line;
	while(getline(stream, line)) {
		char cur,prev_cur;
		for(int i=0; i<line.size(); i++) {
			cur = line[i];
			if(cur!=prev_cur) {
				cout << cur;
				prev_cur=cur;
			}
		}
		cout << endl;
	}

	return 0;
}
