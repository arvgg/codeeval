#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
using namespace std;

int month_to_int(string month) {
	if(month=="Jan") return 0;
	if(month=="Feb") return 1;
	if(month=="Mar") return 2;
	if(month=="Apr") return 3;
	if(month=="May") return 4;
	if(month=="Jun") return 5;
	if(month=="Jul") return 6;
	if(month=="Aug") return 7;
	if(month=="Sep") return 8;
	if(month=="Oct") return 9;
	if(month=="Nov") return 10;
	if(month=="Dec") return 11;
}

int main(int argc, char* argv[]){
	ifstream stream(argv[1]);
	string line, date;	

	while(getline(stream,line)) {
		int year1, year2, month1, month2;
		int arr[360]={0};
		int sum=0;
		stringstream s(line);
		while(getline(s,date, ';')) {
			date.erase(date.begin(), find_if(date.begin(), date.end(), bind1st(std::not_equal_to<char>(), ' ')));
			
			year1=stoi(date.substr(4,4));
			year2=stoi(date.substr(13,4));
			month1=month_to_int(date.substr(0,3));
			month2=month_to_int(date.substr(9,3));
			
			int pos1=(year1-1990)*12+month1;
			int pos2=(year2-1990)*12+month2;

			for(int i=pos1; i<=pos2; i++) {
				arr[i]=1;
			}
		}
		for(int i=0; i<360; i++) {
			sum+=arr[i];
		}
		cout << sum/12 << endl;
	}	
	return 0;
}
