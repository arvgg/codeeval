#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

void max_sum(int days, vector <int> numbers) {
	int sum=0;
	int new_sum=0;
	
	for(int i=0; i<numbers.size()-days+1; i++) {
		for(int j=0; j<days; j++){ 
			new_sum+=numbers[j+i];
		}
		if(new_sum>sum) sum=new_sum;
		new_sum=0;
	}
	cout << sum << endl;
}

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line,num;
	int days;

	while(getline(stream,line)) {
		vector<int> numbers;
		
		stringstream s(line);
		getline(s, num, ';');
		days=stoi(num);
		
		for(s; s >> num;) {
			numbers.push_back(stoi(num));
		}
		max_sum(days,numbers);
	}
	return 0;
}
