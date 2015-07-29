#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line;	

	while (getline(stream,line)) {
		int arrow_count = 0;

		size_t found=line.find("<--<<");
		while(found != string::npos) {
			arrow_count++;
			found=line.find("<--<<",found+1);
		}

		found=line.find(">>-->");
		while(found != string::npos) {
                        arrow_count++;
                        found=line.find(">>-->",found+1);
                }
		cout << arrow_count << endl;
	}

	return 0;
}
