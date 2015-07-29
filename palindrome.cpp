#include <iostream>
#include <string>
#include <math.h>
using namespace std;


bool is_palindrome(string str) {
	int len=str.length();
	int i=0;
	for(int i=0; i<len/2+1; i++) {
		if (str[i] != str[len-i-1]) 
			return false;
	}
	return true;
	
}

bool is_prime(int number) {
	for(int i=2; i<sqrt(number); i++) {
		if (number % i == 0) 
			return false;
	}
	return true;
}

int main() {
	for(int i=999; i>0; i--) {
		if(is_prime(i)==true) {
			string str=to_string(i);
			if(is_palindrome(str)==true) {
				cout << str << endl;
				break;
			}
		}
	}
	return 0;
}
