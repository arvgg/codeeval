#include <iostream>
#include <fstream>
#include <sstream>
#include <bitset>
#include <limits.h>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line;
	int n, p1, p2;

	while(getline(stream,line)) {
		stringstream stream(line);
		stream>>n;
		stream.ignore();
		stream>>p1;
		stream.ignore();
		stream>>p2;
		

		bitset<sizeof(int)*CHAR_BIT> num (n);

		if (num.test(p1-1) == num.test(p2-1)) 
			cout << "true" << endl;
		else 
			cout << "false" << endl;
	}	


}
