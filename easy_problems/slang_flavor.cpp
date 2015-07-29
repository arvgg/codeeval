#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line;
	bool slang_time=false;
	string arr[8]={", yeah!", ", this is crazy, I tell ya.", ", can U believe this?", ", eh?", ", aw yea.", ", yo.", "? No way!", ". Awesome!"};
	int phrase=0;	

	while(getline(stream,line)) {
		for(int i=0; i<line.size(); i++) {
			if(line[i]!='!' && line[i]!='?' && line[i]!='.') {		
				cout << line[i];
			}
			else {
				if(slang_time==true) {
					cout << arr[phrase];
					if(phrase==7) phrase=0;
					else phrase++;
					slang_time=false;
				}
				else {
					cout << line[i];
					slang_time=true;
				}
			}	
		}
		cout << endl;
	}
}
