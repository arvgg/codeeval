#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char *argv[]) {
	fstream stream(argv[1]);
	string line;
	char prev;

	while(getline(stream,line)) {
		string newList="";
		for(int i=0; i<line.length(); i+=2) {
			if(line[i]!=prev) {
				newList+=line[i];
				newList+=",";	
				prev=line[i];
			}
		}
		cout << newList.substr(0,newList.size()-1) << endl;	
	}
	return 0;
}
