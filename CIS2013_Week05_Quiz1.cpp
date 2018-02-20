#include <iostream>

using namespace std;



void primes(int, int);
int get_lcm (int, int);

int main(){
	int first;
	int second;
	int lcm;
	
	cout << "enter first number: ";
	cin >> first;
	cout << "enter second number: ";
	cin >> second;
	
	lcm=get_lcm(first, second);
	primes (first, second);

	cout << "The LCM is :" << lcm << endl;
	
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
int get_lcm(int one, int two){
	int one_counter=one;
	int two_counter=two;
	
	while(one!=two){
		if (one<two){
			one+=one_counter;
		}else {
			two+=two_counter;
	}
}	
return two;
}