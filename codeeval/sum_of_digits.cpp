#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void add_digits(string str) {
	stringstream stream(str);
	int sum=0;
	int x;
	stream >> x;

	if(x > 0) {
		while(x>0) {
			sum += x%10;
			x=x/10;
		}	
		cout << sum << endl;
	}
	else { 
		cout << "X is not a positive integer." << endl;
	}
}


int main(int argc, char *argv[]) {
        ifstream stream(argv[1]);
        string line;
        while(getline(stream,line)) {
        	add_digits(line);
	}
        return 0;
}


