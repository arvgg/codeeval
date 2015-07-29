#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line, num;

	while(getline(stream,line)) {
		vector<int> numbers;
 	  	vector<int>::iterator iter;

		for(stringstream s(line);s>>num;) {
			numbers.push_back(stoi(num));
		}

		vector<int> copy=numbers;
		sort(numbers.begin(), numbers.end());
		
		bool repeat=false;
		int min=*numbers.begin();
		
		for(iter=numbers.begin()+1; iter!=numbers.end(); ++iter) {
			if(*iter>min && repeat==false) 
				break;
			else if(min==*iter)
				repeat=true;
			else {
				min=*iter;	
				repeat=false;
			}
		}
		if(repeat==true)
			cout << "0" << endl;
		else 
			cout << distance(copy.begin(),find(copy.begin(),copy.end(),min))+1 << endl;
	}
	return 0;
}
