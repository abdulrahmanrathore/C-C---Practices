#include<iostream>
using namespace std;

int main(){
	/*
	//Address Type Casting
	int x = 65;
	char c = x;
	
	cout<< c<< endl;
	*/
	
	int i = 65;
	int *p =&i;
	//char *pc = p;       //we can't do like this, This will give an error. 
	char *pc = (char*) p; //explicit typecasting
	
	cout<< *pc <<endl;
		
	return 0;
}