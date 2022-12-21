#include<iostream>
using namespace std;

void reachHome(int src, int dest){
	
	cout << "source " << src <<" destination " << dest << endl;
	//base case
	if(src==dest){
		cout<<"Pahoch gya " << endl;
		return ;
	}
	
	//processing - ek step aage badhjao
	src++;
	
	//Recursion lgaa diye i.e; recursive call
	reachHome(src, dest);
}

int main(){
	int dest = 10;
	int src = 1;
	
	reachHome(src, dest);
	
	return 0;
}