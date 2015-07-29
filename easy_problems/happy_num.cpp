#include <iostream>
#include <fstream>
#include <math.h>
#include <unistd.h>
#include <set>
using namespace std;

void happy_number(int n) {
	set<int> seenNumbers;
	while(true) {
		int happy=0;
		while(n>0) {
			happy+=pow((n%10),2);
			n=n/10;
		}
			
		if(happy==1) {
			cout << 1 << endl;
			break;
		}
		if(seenNumbers.find(happy)!=seenNumbers.end()) {
			cout << 0 << endl;
			break;
		}
		else {
			seenNumbers.insert(happy);
			n=happy;
		}
	}
}

int main(int argc, char *argv[]) {
	fstream stream(argv[1]);
	string line;
	
	while(getline(stream,line)) {
		happy_number(stoi(line));		
	}
	return 0;
}
