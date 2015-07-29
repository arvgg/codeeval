#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

void convert_degrees(double degrees) {
	int d=int(degrees);
	int m=int((degrees-d)*60);
	int s=(degrees-d-(double)m/60)*3600;
	cout << d << ".";
	cout << setw(2) << setfill('0') << m << "'";
	cout << setw(2) << setfill('0') << s << "\"" << endl;

}

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line;
	double degrees;

	while(getline(stream,line)) {
		stringstream s(line);
		s >> degrees;
		convert_degrees(degrees);
	}
	return 0;
}
