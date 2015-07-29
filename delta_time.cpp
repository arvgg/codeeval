#include <iostream>
#include <time.h>
#include <sstream>
#include <fstream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line, date, unit;

	while(getline(stream,line)) {
		struct tm first_time={0};
		struct tm second_time={0};
		
		stringstream s(line);
		
		s >> date;	
		stringstream ss(date);
		getline(ss, unit, ':');
		first_time.tm_hour=stoi(unit);
		getline(ss,unit,':');
		first_time.tm_min=stoi(unit);
		getline(ss,unit,':');
		first_time.tm_sec=stoi(unit);	
	
		s >> date;
                stringstream ss2(date);
                getline(ss2, unit, ':');
                second_time.tm_hour=stoi(unit);
                getline(ss2,unit,':');
                second_time.tm_min=stoi(unit);
                getline(ss2,unit,':');
                second_time.tm_sec=stoi(unit);

		double seconds=abs(difftime(mktime(&first_time), mktime(&second_time)));
		int hours=floor(seconds/(60*60));
		int minutes=floor(((int)seconds%(60*60))/60);
		int seconds_result=ceil((int)seconds%60);
		cout << setw(2) << setfill('0') << hours << ":";
		cout << setw(2) << setfill('0') << minutes << ":";
		cout << setw(2) << setfill('0') << seconds_result << endl;
	}

	return 0;
}
