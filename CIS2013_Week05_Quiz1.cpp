#include <iostream>

using namespace std;



void primes(int, int);
void lcm (int, int);

int main(){
	int first;
	int second;
	
	cout << "enter first number: ";
	cin >> first;
	cout << "enter second number: ";
	cin >> second;
	
	primes (first, second);
	lcm(first, second);
	
	return 0;
}


void primes(int f, int s){
	for (int i=f; i<=s; i++){
	bool prime=true;
		for(int p=2; p<i; p++){
			if(i%p==0){
				prime=false;
			}
		}
		if(prime){cout << i << " is prime" << endl;}
	}	
}
void lcm(int one, int two){
	int one_counter=one;
	int two_counter=two;
	
	while(one!=two){
		if (one<two){
			one+=one_counter;
		}else {
			two+=two_counter;
	}
}
cout << "The LCM is :" << two << endl;	
}