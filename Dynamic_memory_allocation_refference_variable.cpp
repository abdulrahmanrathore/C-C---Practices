#include<iostream>
using namespace std;

void update1(int n){
	n++;
}

void update2(int& n){
	n++;
}

int main(){
	
	/*
	int i = 5;
	
	//create a ref variable
	
	int& j = i;
	
	cout << i << " " << j << endl;
	i++;
	cout<<i<<endl;
	j++;
	cout<<j<<endl;
	cout<<i<<endl;
	*/
	
	int n = 5;
	cout<<"Before "<< n<<endl;
	update1(n); //This is pass by value which copies the value and allocate in the different memory location.
	cout<<"After calling update1 function "<< n<<endl;
	update2(n); //This is pass by refference which copies the memory address and create refference of that variable like if int j=5, int &n =j.
	/*The n and j they both pointed out on same memory allocation so the n is the refference variable for j, so 
	if we update n will also update as well. */
	cout<<"After calling update2 function "<< n<<endl;
	
	
	return 0;
}