#include <iostream>
#include <fstream>
#include <sstream>
#include <set> 
using namespace std;

int main(int argc, char *argv[]) {
	fstream stream(argv[1]);
	string line,num;

	while(getline(stream,line)) {
		stringstream s(line);
		set<int> result;

		while(getline(s,num, ',')) {
			result.insert(stoi(num));
		} 
		set<int>::iterator iter;
		for(iter=result.begin(); iter!=result.end(); ++iter) {
			cout << *iter;	
			if(distance(iter,result.end())==1)
				cout << endl;
			else
				cout << ",";
		}

	}
	return 0;
}
