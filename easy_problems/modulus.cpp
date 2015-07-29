#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line;
	int x,y;

	while(getline(stream, line)){
		stringstream s(line);
		s>>x;
		s.ignore();
		s>>y;
		
		int div = x/y;
		cout << x-(y*div) << endl;
	}
	return 0;
}
