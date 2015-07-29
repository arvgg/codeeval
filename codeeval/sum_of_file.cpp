#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
        ifstream stream(argv[1]);
        string line;
	int sum=0;
	int x;
        while(getline(stream,line)) {
		x=stoi(line);
		sum+=x;
	}
	cout << sum << endl;
        return 0;
}


