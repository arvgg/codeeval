#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

void self_describing(string x) {
	for(int i=0; i<x.length(); i++) {
		string num(1,x[i]);
		if(stoi(num) != int(count(x.begin(), x.end(), i+'0'))){
			cout << '0' << endl;
			return;
		} 
	}
	cout << '1' << endl;
}

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line;
	
	while(getline(stream,line)) {
		self_describing(line);
	}

}
