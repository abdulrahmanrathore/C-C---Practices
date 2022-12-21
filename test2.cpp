#include<iostream>
using namespace std;

int main(){
	int a =5, b = 5;
	int *i = &a;
	int *j = &b;
	cout<<i<<" "<<j<<endl;
	cout<<&a<<" "<<&b<<endl;
	
	return 0;
}