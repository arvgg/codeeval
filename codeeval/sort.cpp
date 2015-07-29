#include <iostream>
#include <fstream>
#include <sstream>
#include <set>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line,word;
	cout << fixed << setprecision(3);
	
	while(getline(stream,line)){
		set<float> numbers;
		set<float>::iterator iter;
		for(stringstream s(line); s>>word;)
			numbers.insert(stof(word));	
		for(iter=numbers.begin(); iter!=numbers.end(); ++iter){
			cout<<*iter<<" ";
		}
		cout << endl;
	}
	return 0;
}
