#include<iostream>
using namespace std;

int main(){
	void *ptr;
	int i = 5;
	
	//assigning int address to void
	ptr = &i;
	cout << "Address of variable i " << &i << endl;
	cout << "Address where the void pointer is pointing " << ptr <<endl;
	return 0;
}

/*
  OUTPUT : -
  Address of variable i 0x78fe14
  Address where the void pointer is pointing 0x78fe14 
*/