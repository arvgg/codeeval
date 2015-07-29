#include <iostream>
#include <fstream>
using namespace std;

int fibonacci(int n) {	
	if(n==0) 
		return 0;
	if(n==1) 
		return 1;

	int n1=0;
	int n2=1;
	int result;

	for(int i=2; i<=n; i++) {
		result=n1+n2;
		n1=n2;		//n-2
		n2=result;	//n-1	
	}
	return result;
}

int main(int argc, char* argv[]) {
	fstream stream(argv[1]);
	string line;
	int num;

	while(getline(stream, line)) {
		num=stoi(line);
		cout << fibonacci(num) << endl;
	}

return 0;
}
