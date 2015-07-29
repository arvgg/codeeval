#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]){
	ifstream stream(argv[1]);
	string line, num;

	while(getline(stream,line)) {
		vector<string> list1, list2;
		int listnum=1;
		for(stringstream s(line); s >> num;) {
			if(num!=":") {
				if(listnum==1) 
					list1.push_back(num);
				else
					list2.push_back(num);
			}
			else {
				listnum=2;
			}
		}
		
		string temp;
		int pos1, pos2;

		for(int i=0; i<(int)list2.size(); i++) {
			stringstream s(list2[i]);
			getline(s, temp, '-');
			pos1=stoi(temp);
			getline(s, temp, ',');
			pos2=stoi(temp);

			temp=list1[pos1];
			list1[pos1]=list1[pos2];
			list1[pos2]=temp;
		}
		vector<string>::iterator iter;
		for(iter=list1.begin(); iter!=list1.end(); ++iter) {
			cout << *iter << " ";
		}
		cout << endl;
	}	
	return 0;
}
