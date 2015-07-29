#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line,tuple1,tuple2,num;
	int x1, x2, y1, y2;
	
	while(getline(stream,line)) {
		stringstream s(line);
		s.ignore();
		getline(s, tuple1, ')');
		s.ignore();
		s.ignore();
		getline(s, tuple2, ')');

		stringstream s1(tuple1);
		getline(s1,num,',');
		x1=stoi(num);
		getline(s1,num);
		y1=stoi(num);
		
		stringstream s2(tuple2);
                getline(s2,num,',');
                x2=stoi(num);
                getline(s2,num);
                y2=stoi(num);
	
		int result=sqrt(pow((x2-x1),2) + pow((y2-y1),2));
		cout << result << endl;
	
	}
	return 0;
}
