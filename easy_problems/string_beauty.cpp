#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <array>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string sentence;

	while(getline(stream,sentence)) {
		string copy=sentence;
		copy.erase(remove_if(copy.begin(), copy.end(), ::ispunct), copy.end());
		copy.erase(remove_if(copy.begin(), copy.end(), ::isspace), copy.end());	
		copy.erase(remove_if(copy.begin(), copy.end(), ::isdigit), copy.end());
		transform(copy.begin(), copy.end(), copy.begin(), ::tolower);
		sort(copy.begin(), copy.end());
		
		string copy2=copy;
		copy.erase(unique(copy.begin(), copy.end()),copy.end());
		
		int distrib[copy.size()];
		for(int i=0; i<copy.size(); i++) {
			distrib[i]=int(count(copy2.begin(),copy2.end(), copy[i]));	
		}
		
		sort(distrib, distrib+copy.size(),::greater<int>());
		
		int cur_score=26;
		int sum=0;
		
		for(int i=0; i<copy.size(); i++) {
			sum+=distrib[i]*cur_score;
			cur_score--;	
		}
		cout << sum << endl;
	}
	
	return 0;
}
