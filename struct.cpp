#include<stdio.h>

int main(){
	struct Student{
		char *name[10]={"arggg"};
	};
	
	struct Student s1;
	
	printf("name is  :%c",s1.name[0]);
	
	return 0;
	
}