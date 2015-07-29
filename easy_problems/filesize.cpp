#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	fstream stream(argv[1]);
	stream.seekg(0,ios::end);
	int size=stream.tellg();

	cout << size << endl;	
	return 0;
}
