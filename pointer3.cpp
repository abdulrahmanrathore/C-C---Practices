#include<iostream>
using namespace std;


void changeSign(int *p){
	*p = (*p) * - 1;
}

int main(){
	//Character and pointers
	/*
	char s[]= "hello";
	char *p = s;
	cout << s[0] << " " << p[0];
	*/
	
	
	/*
	char arr[20];
	int i;
	for(i=0; i<10; i++){
		*(arr + i) = 65 + i;
	}  
	*(arr + i) = '\0';
	cout << arr;
	*/
	
	
	/*
	char st[] = "ABCD";
	for(int i=0; st[i] != '\0'; i++){
		cout << st[i] << *(st) + i << *(i+st) << i[st];
	}
	*/
	
	
	/*
	float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
	float *ptr1 = &arr[0];
	float *ptr2 = ptr1 + 3;
	cout << *ptr2 << " ";
	cout << ptr2 - ptr1 << endl;
	
	cout << ptr2 << endl;
	cout << ptr1 << endl;
	*/
	
	int a = 10;
	changeSign(&a);
	cout << a << endl;
	return 0;
}