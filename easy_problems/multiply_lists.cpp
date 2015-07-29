#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]){
	ifstream stream(argv[1]);
	string line, num;

	while(getline(stream,line)) {
		vector<int> list1, list2;
		int listnum=1;
		for(stringstream s(line); s >> num;) {
			if(num!="|") {
				if(listnum==1) 
					list1.push_back(stoi(num));
				else
					list2.push_back(stoi(num));
			}
			else {
				listnum=2;
			}
		}
		for(int i=0; i<(int)list1.size(); i++) {
			cout << list1[i]*list2[i] << " ";
		}
		cout << endl;
	}	
	return 0;
}
