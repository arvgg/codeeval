#include <array>
#include <iostream>
#include<iomanip>
using namespace std;

int main(int argc, char* argv[]) {
	array<int, 12> arr={1,2,3,4,5,6,7,8,9,10,11,12};

	for(int i=1; i<=arr.size(); i++) {
		for(int j=0; j<arr.size(); j++) {
			cout << std::right << setw(4) << arr[j]*i;
		}
		cout << endl;
	}
	
	return 0;
}
