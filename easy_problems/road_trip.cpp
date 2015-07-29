#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line, city;
	
	while(getline(stream, line)) {
		vector<int> distances;
		stringstream s(line);
		distances.push_back(0);
		while(getline(s,city,',')) {
			getline(s,city,';');
			distances.push_back(stoi(city));
		}
		sort(distances.begin(), distances.end());
		for(int i=0; i<distances.size()-1; i++) {
			if (i==distances.size()-2) 
				cout << distances[i+1]-distances[i] << endl;
			else
				cout << distances[i+1]-distances[i] << ",";
		}
	}
	return 0;
}
