#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string line, letter;
		
	while(getline(stream,line)) {
		vector<string> letter_arr;
		
		for(stringstream s(line); s>>letter;) {
			letter_arr.push_back(letter);
		}
		int n=(int)sqrt(letter_arr.size());
		string arr[n][n];
		string rotate[n][n];
	
		int count=0;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				arr[i][j]=letter_arr[count];	
				count++;
			}
		}
		for(int i=0; i<n; i++) {
                        for(int j=0; j<n; j++) {
                                rotate[i][j]=arr[n-j-1][i];
                        	cout << rotate[i][j] << " ";
			}
                }
		cout << endl;
	}
	return 0;
}
