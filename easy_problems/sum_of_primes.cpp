#include <iostream>
#include <math.h>
using namespace std;

bool is_prime(int number) {
        for(int i=2; i<=sqrt(number); i++) {
                if (number % i == 0)
                        return false;
        }
        return true;
}

int main() {
	int sum=0;
	int num_primes=0;
	int i=2;

	while (num_primes < 1000) {
		if(is_prime(i)==true) { 
			sum += i;
			num_primes++;
		}
		i++;
	}
	cout << sum << endl;

}
